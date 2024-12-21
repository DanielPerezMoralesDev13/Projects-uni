// Crear un constructor para la aplicación web con argumentos proporcionados por la línea de comando
// dotnet add package System.Text.Json

using Microsoft.AspNetCore.Builder;
using Microsoft.AspNetCore.Hosting;
using Microsoft.Extensions.DependencyInjection;
using Microsoft.Extensions.Hosting;
using System.IO;
using System.Threading.Tasks;
using System.Text.Json;
using MyBackendProject;
using System.Text;
using dotenv.net;

// Importar la biblioteca MySql.Data para la conexión MySQL
using MySql.Data.MySqlClient;
using Newtonsoft.Json;
using System.Data;
using Microsoft.AspNetCore.Mvc;

// dotnet add package Newtonsoft.Json
DotEnv.Load();

string? db_server = Environment.GetEnvironmentVariable(variable: "DB_SERVER");
string? db_user = Environment.GetEnvironmentVariable(variable: "DB_USER");
string? db_password = Environment.GetEnvironmentVariable(variable: "DB_PASSWORD");
string? db_name = Environment.GetEnvironmentVariable(variable: "DB_NAME");

// Definir la cadena de conexión para la db
string connection_db = $"server={db_server};user={db_user};password={db_password};database={db_name};Connection Timeout=300;Pooling=true;Min Pool Size=5;Max Pool Size=100;";


// Crear una instancia de la clase MySqlConnection con la cadena de conexión
using MySqlConnection connection = new MySqlConnection(connectionString: connection_db);

// Abrir la conexión
await connection.OpenAsync();
// Añadir esto en la configuración de tu aplicación .NET
var builder = WebApplication.CreateBuilder(args);

// Permitir servir archivos estáticos
builder.Services.AddRazorPages();

var app = builder.Build();

// Usar archivos estáticos
app.UseStaticFiles();

// Modificar la ruta existente para procesar la solicitud y extraer el valor del campo
app.MapGet("/", async context =>
{
    context.Response.ContentType = "text/html";
    await context.Response.SendFileAsync("wwwroot/index.html");
});

app.MapGet("/CrearActividades", async context =>
{
    context.Response.ContentType = "text/html";
    await context.Response.SendFileAsync("wwwroot/CrearActividades.html");
});

app.MapPost("/CrearActividades", async context =>
{
    try
    {

        var form = await context.Request.ReadFormAsync();

        string? nombreActividad = form["nombreActividad"];
        string? descripcion = form["descripcion"];
        string? objetivos = form["objetivos"];
        string? responsable = form["responsable"];
        string? recursosNecesarios = form["recursosNecesarios"];
        string? justificacion = form["justificacion"];

        string query = @"INSERT INTO PlanActividadesExtension 
                        (nombreActividad, descripcion, objetivos, responsable, recursosNecesarios, justificacion) 
                        VALUES (@nombreActividad, @descripcion, @objetivos, @responsable, @recursosNecesarios, @justificacion)";

        using var command = new MySqlCommand(query, connection);
        command.Parameters.AddWithValue("@nombreActividad", nombreActividad);
        command.Parameters.AddWithValue("@descripcion", descripcion);
        command.Parameters.AddWithValue("@objetivos", objetivos);
        command.Parameters.AddWithValue("@responsable", responsable);
        command.Parameters.AddWithValue("@recursosNecesarios", recursosNecesarios);
        command.Parameters.AddWithValue("@justificacion", justificacion);

        int rowsAffected = await command.ExecuteNonQueryAsync();

        if (rowsAffected > 0)
        {
            // Responder con un script para mostrar un alert
            await context.Response.WriteAsync(@"
                <script>
                    alert('Datos enviados');
                    window.location.href = '/CrearActividades'; // Redireccionar a la página de actividades
                </script>
            ");
        }
        else
        {
            context.Response.StatusCode = 400;
            await context.Response.WriteAsync("Error al guardar la actividad");
        }
    }
    catch (Exception ex)
    {
        context.Response.StatusCode = 500;
        await context.Response.WriteAsync($"Error al procesar la solicitud: {ex.Message}");
    }
});


app.MapGet("/VerActividades", async context =>
{
    // Establecer el tipo de contenido de la respuesta como HTML
    context.Response.ContentType = "text/html";
    await context.Response.SendFileAsync("wwwroot/VerActividades.html");

    // Obtener los datos de las actividades de la base de datos
    string query = "SELECT * FROM PlanActividadesExtension";

    // Crear un StringBuilder para construir el HTML
    StringBuilder htmlBuilder = new StringBuilder();

    // Iniciar el contenedor de actividades
    htmlBuilder.Append("<div class='actividades-container'>");

    // Ejecutar la consulta y leer los resultados
    using (MySqlCommand command = new MySqlCommand(cmdText: query, connection: connection))
    {
        using (var reader = await command.ExecuteReaderAsync())
        {
            while (await reader.ReadAsync())
            {
                // Verificar si la actividad ha sido ejecutada
                bool haSidoEjecutada = !reader.IsDBNull(reader.GetOrdinal("haSidoEjecutado")) && reader.GetBoolean(reader.GetOrdinal("haSidoEjecutado"));

                // Si la actividad no ha sido ejecutada, mostrarla
                if (!haSidoEjecutada)
                {
                    // Obtener el ID de la actividad
                    int actividadId = reader.GetInt32(0);

                    // Agregar una tarjeta para cada actividad
                    htmlBuilder.Append("<div class='actividad-card'>");
                    htmlBuilder.Append($"<h2>{reader.GetString(1)}</h2>");
                    htmlBuilder.Append($"<p><strong>Descripción:</strong><br>{(reader.IsDBNull(2) ? "" : reader.GetString(2))}</p>");
                    htmlBuilder.Append($"<p><strong>Objetivos:</strong><br>{(reader.IsDBNull(3) ? "" : reader.GetString(3))}</p>");
                    htmlBuilder.Append($"<p><strong>Responsable:</strong><br>{(reader.IsDBNull(4) ? "" : reader.GetString(4))}</p>");
                    htmlBuilder.Append($"<p><strong>Recursos Necesarios:</strong><br>{(reader.IsDBNull(5) ? "" : reader.GetString(5))}</p>");
                    htmlBuilder.Append($"<p><strong>Justificación:</strong><br>{(reader.IsDBNull(6) ? "" : reader.GetString(6))}</p>");
                    // numero participantes
                    // htmlBuilder.Append($"<p><strong>Número de Participantes Inscritos:</strong><br>{(reader.IsDBNull(7) ? "" : reader.GetInt32(7).ToString())}</p>");
                    htmlBuilder.Append($"<p><strong>ID de la Actividad:</strong><br>{actividadId}</p>");
                    htmlBuilder.Append($"<div class='boton-container'>");
                    htmlBuilder.Append($"<button class='ejecutar-button' onclick='inscribirEstudiantes({actividadId})'>Inscribir Estudiantes</button>");
                    htmlBuilder.Append($"<button class='eliminar-button' onclick='eliminarActividad({actividadId})'>Eliminar</button>");
                    htmlBuilder.Append($"<button class='editar-button' onclick='editarActividad({actividadId})'>Editar</button>");
                    htmlBuilder.Append($"</div>");
                    htmlBuilder.Append("</div>");
                }
            }
        }
    }

    // Cerrar el contenedor de actividades
    htmlBuilder.Append("</div>");

    // Escribir el HTML generado en la respuesta
    await context.Response.WriteAsync(htmlBuilder.ToString());
});


app.MapGet("/ObtenerEstudiantes", async context =>
{
    try
    {
        // Establecer el tipo de contenido de la respuesta como JSON
        context.Response.ContentType = "application/json";

        // Obtener los estudiantes de la base de datos
        string query = "SELECT * FROM Estudiantes";

        List<object> estudiantes = new List<object>();

        using (MySqlCommand command = new MySqlCommand(query, connection))
        {
            using (var reader = await command.ExecuteReaderAsync())
            {
                while (await reader.ReadAsync())
                {
                    var estudiante = new
                    {
                        id = reader.GetInt32(0),
                        nombre = reader.GetString(1),
                        numero_carnet = reader.GetString(2),
                        carrera = reader.GetString(3)
                    };

                    estudiantes.Add(estudiante);
                }
            }
        }

        // Convertir la lista de estudiantes a JSON y enviarla en la respuesta
        string estudiantesJson = System.Text.Json.JsonSerializer.Serialize(estudiantes);
        await context.Response.WriteAsync(estudiantesJson);
    }
    catch (Exception ex)
    {
        context.Response.StatusCode = 500;
        await context.Response.WriteAsync($"Error al obtener estudiantes: {ex.Message}");
    }
});


// Endpoint para inscribir estudiantes
app.MapPost("/InscribirEstudiantes", async context =>
{
    try
    {
        var requestBody = await new StreamReader(context.Request.Body).ReadToEndAsync();
        var inscripcionRequest = JsonConvert.DeserializeObject<InscripcionRequest>(requestBody);

        var idActividad = inscripcionRequest?.id_actividad ?? throw new ArgumentNullException(nameof(inscripcionRequest), "La solicitud de inscripción no puede ser nula.");

        var estudiantes = inscripcionRequest.estudiantes;

        if (estudiantes == null || estudiantes.Count == 0)
        {
            context.Response.StatusCode = 400; // Bad request
            await context.Response.WriteAsync("No se han proporcionado estudiantes para inscribir.");
            return;
        }

        // Obtener la fecha de inicialización del sistema
        DateTime fechaInicializacion = DateTime.Now;

        // Iniciar una transacción
        using (var transaction = await connection.BeginTransactionAsync())
        {
            try
            {
                // Actualizar haSidoEjecutado a true en PlanActividadesExtension
                string updateQuery = @"
                        UPDATE PlanActividadesExtension 
                        SET haSidoEjecutado = true
                        WHERE id = @id";

                using (var updateCommand = new MySqlCommand(updateQuery, connection, transaction))
                {
                    updateCommand.Parameters.AddWithValue("@id", idActividad);
                    int rowsAffected = await updateCommand.ExecuteNonQueryAsync();

                    if (rowsAffected == 0)
                    {
                        context.Response.StatusCode = 404; // Not Found si no se encuentra la actividad con el id dado
                        await context.Response.WriteAsync("Actividad no encontrada.");
                        return;
                    }
                }

                // Insertar estudiantes en DatosParticipantes
                string insertQuery = "INSERT INTO DatosParticipantes (carnet, nombre, carrera, id_actividad) VALUES (@carnet, @nombre, @carrera, @id_actividad)";

                foreach (var estudiante in estudiantes)
                {
                    using (var command = new MySqlCommand(insertQuery, connection, transaction))
                    {
                        command.Parameters.AddWithValue("@carnet", estudiante.carnet);
                        command.Parameters.AddWithValue("@nombre", estudiante.nombre);
                        command.Parameters.AddWithValue("@carrera", estudiante.carrera);
                        command.Parameters.AddWithValue("@id_actividad", idActividad);

                        await command.ExecuteNonQueryAsync();
                    }
                }

                // Insertar id_actividad y fechaInicializacion en ReportesActividadesExtension si no existe
                string insertReporteQuery = @"
                        INSERT INTO ReportesActividadesExtension (id_actividad, fechaInicializacion)
                        SELECT @id_actividad, @fechaInicializacion
                        FROM dual
                        WHERE NOT EXISTS (
                            SELECT 1 FROM ReportesActividadesExtension WHERE id_actividad = @id_actividad
                        )";

                using (var insertReporteCommand = new MySqlCommand(insertReporteQuery, connection, transaction))
                {
                    insertReporteCommand.Parameters.AddWithValue("@id_actividad", idActividad);
                    insertReporteCommand.Parameters.AddWithValue("@fechaInicializacion", fechaInicializacion);

                    int rowsInserted = await insertReporteCommand.ExecuteNonQueryAsync();
                }

                // Commit de la transacción
                await transaction.CommitAsync();

                context.Response.StatusCode = 200; // OK
                await context.Response.WriteAsync("Estudiantes inscritos correctamente.");
            }
            catch (Exception)
            {
                // Si ocurre un error, se hace rollback de la transacción
                await transaction.RollbackAsync();
                throw;
            }
        }

    }
    catch (Exception ex)
    {
        context.Response.StatusCode = 500; // Internal server error
        await context.Response.WriteAsync($"Error al inscribir los estudiantes: {ex.Message}");
    }
});

// Endpoint GET para mostrar la página de inscripción de estudiantes
app.MapGet("/InscribirEstudiantes", async context =>
{
    try
    {
        // Establecer el tipo de contenido de la respuesta como HTML
        context.Response.ContentType = "text/html";

        // Ruta del archivo InscribirEstudiantes.html
        string filePath = Path.Combine(Directory.GetCurrentDirectory(), "wwwroot", "InscribirEstudiantes.html");

        // Verificar si el archivo existe
        if (File.Exists(filePath))
        {
            // Leer el contenido del archivo HTML
            string htmlContent = await File.ReadAllTextAsync(filePath);

            // Enviar el contenido como respuesta
            await context.Response.WriteAsync(htmlContent);
        }
        else
        {
            // Si el archivo no existe, enviar un error 404
            context.Response.StatusCode = 404;
            await context.Response.WriteAsync("Página no encontrada.");
        }
    }
    catch (Exception ex)
    {
        context.Response.StatusCode = 500;
        await context.Response.WriteAsync($"Error al procesar la solicitud: {ex.Message}");
    }
});


app.MapGet("/ObtenerActividad/{id:int}", async (int id, HttpContext context) =>
{
    try
    {
        // Preparar la consulta para obtener los datos de la actividad de la base de datos
        string query = @"
            SELECT id, nombreActividad, descripcion, objetivos, responsable, recursosNecesarios, justificacion
            FROM PlanActividadesExtension
            WHERE id = @id";

        using (var command = new MySqlCommand(query, connection))
        {
            command.Parameters.AddWithValue("@id", id);

            using (var reader = await command.ExecuteReaderAsync())
            {
                if (await reader.ReadAsync())
                {
                    // Construir un objeto JSON con los datos de la actividad
                    var actividad = new
                    {
                        id = reader.GetInt32(0), // El índice 0 corresponde a la primera columna, que es "id"
                        nombreActividad = reader.GetString(1), // El índice 1 corresponde a la segunda columna, que es "nombreActividad"
                        descripcion = reader.IsDBNull(2) ? null : reader.GetString(2), // Índice 2 para "descripcion"
                        objetivos = reader.IsDBNull(3) ? null : reader.GetString(3), // Índice 3 para "objetivos"
                        responsable = reader.IsDBNull(4) ? null : reader.GetString(4), // Índice 4 para "responsable"
                        recursosNecesarios = reader.IsDBNull(5) ? null : reader.GetString(5), // Índice 5 para "recursosNecesarios"
                        justificacion = reader.IsDBNull(6) ? null : reader.GetString(6), // Índice 6 para "justificacion"

                    };

                    // Devolver la actividad como JSON
                    context.Response.StatusCode = 200;
                    context.Response.ContentType = "application/json";
                    await context.Response.WriteAsync(JsonConvert.SerializeObject(actividad));
                }
                else
                {
                    // Si no se encontró ninguna actividad con el ID proporcionado, devolver un código 404 (Not Found)
                    context.Response.StatusCode = 404;
                    await context.Response.WriteAsync("Actividad no encontrada.");
                }
            }
        }

    }
    catch (Exception ex)
    {
        // En caso de error, devolver un código 500 (Internal Server Error) y el mensaje de error
        context.Response.StatusCode = 500;
        await context.Response.WriteAsync($"Error al obtener la actividad: {ex.Message}");
    }
});


app.MapPut("/EditarActividad/{id:int}", async (int id, HttpContext context) =>
{
    // Obtener los datos de la actividad a editar desde el cuerpo de la solicitud
    var requestBody = await new StreamReader(context.Request.Body).ReadToEndAsync();
    var data = JsonConvert.DeserializeObject<dynamic>(requestBody);

    if (data == null)
    {
        context.Response.StatusCode = 400; // Bad Request si el cuerpo de la solicitud está vacío o malformado
        await context.Response.WriteAsync("Datos inválidos.");
        return;
    }

    // Preparar la consulta para actualizar la actividad en la base de datos
    string query = @"
        UPDATE PlanActividadesExtension 
        SET nombreActividad = @nombreActividad,
            descripcion = @descripcion,
            objetivos = @objetivos,
            responsable = @responsable,
            recursosNecesarios = @recursosNecesarios,
            justificacion = @justificacion
        WHERE id = @id";

    try
    {
        using (var command = new MySqlCommand(query, connection))
        {
            command.Parameters.AddWithValue("@nombreActividad", (string)data.nombreActividad);
            command.Parameters.AddWithValue("@descripcion", (string)data.descripcion);
            command.Parameters.AddWithValue("@objetivos", (string)data.objetivos);
            command.Parameters.AddWithValue("@responsable", (string)data.responsable);
            command.Parameters.AddWithValue("@recursosNecesarios", (string)data.recursosNecesarios);
            command.Parameters.AddWithValue("@justificacion", (string)data.justificacion);
            command.Parameters.AddWithValue("@id", id);

            int rowsAffected = await command.ExecuteNonQueryAsync();

            if (rowsAffected > 0)
            {
                // Si la actualización fue exitosa, devolver un código 200 (OK)
                context.Response.StatusCode = 200;
            }
            else
            {
                // Si no se encontró ninguna actividad con el ID proporcionado, devolver un código 404 (Not Found)
                context.Response.StatusCode = 404;
                await context.Response.WriteAsync("Actividad no encontrada.");
            }
        }

    }
    catch (Exception ex)
    {
        // En caso de error, devolver un código 500 (Internal Server Error) y el mensaje de error
        context.Response.StatusCode = 500;
        await context.Response.WriteAsync($"Error al actualizar la actividad: {ex.Message}");
    }
});

// Endpoint para manejar la eliminación de una actividad
app.MapDelete("/EliminarActividad/{id:int}", async (int id, HttpContext context) =>
{
    // Conectar a la base de datos y eliminar la actividad
    string query = "DELETE FROM PlanActividadesExtension WHERE id = @id";
    using (MySqlCommand command = new MySqlCommand(query, connection))
    {
        command.Parameters.AddWithValue("@id", id);
        int affectedRows = await command.ExecuteNonQueryAsync();

        if (affectedRows > 0)
        {
            context.Response.StatusCode = 200; // OK

        }
        else
        {
            context.Response.StatusCode = 404; // Not Found
        }
    }
});

app.MapGet("/ActividadesEnEjecucion", async context =>
{
    await context.Response.SendFileAsync("wwwroot/ActividadesEnEjecucion.html");
});

app.MapGet("/api/ActividadesEnEjecucion", async context =>
{
    try
    {

        string query = "SELECT * FROM PlanActividadesExtension WHERE haSidoEjecutado = 1 AND finalizo = 0";
        var command = new MySqlCommand(query, connection);

        using (var reader = await command.ExecuteReaderAsync())
        {
            var actividades = new List<Actividad>();

            while (await reader.ReadAsync())
            {
                var actividad = new Actividad
                {
                    Id = reader.GetInt32("id"),
                    NombreActividad = reader.GetString("nombreActividad"),
                    Descripcion = reader["descripcion"] as string,
                    Objetivos = reader["objetivos"] as string,
                    Responsable = reader["responsable"] as string,
                    RecursosNecesarios = reader["recursosNecesarios"] as string,
                    Justificacion = reader["justificacion"] as string,
                    HaSidoEjecutado = reader.GetBoolean("haSidoEjecutado"),
                    Finalizo = reader.GetBoolean("finalizo")
                };
                actividades.Add(actividad);
            }

            var response = new { success = true, actividades };
            context.Response.ContentType = "application/json";
            await context.Response.WriteAsJsonAsync(response);
        }

    }
    catch (Exception ex)
    {
        context.Response.StatusCode = 500;
        var errorResponse = new { success = false, message = "Error al obtener las actividades en ejecución: " + ex.Message };
        context.Response.ContentType = "application/json";
        await context.Response.WriteAsJsonAsync(errorResponse);
    }
});

app.MapGet("/AsistenciaDeLaActividad", async (HttpContext context) =>
{
    try
    {
        // Obtener el id_actividad desde los parámetros de la URL
        if (!context.Request.Query.ContainsKey("id_actividad") ||
            !int.TryParse(context.Request.Query["id_actividad"], out int idActividad))
        {
            context.Response.StatusCode = 400; // Bad request
            await context.Response.WriteAsJsonAsync(new { success = false, message = "Parámetro 'id_actividad' no válido." });
            return;
        }

        // Consulta para obtener los estudiantes asociados a la actividad
        string query = @"
            SELECT e.id, e.nombre, e.numero_carnet, e.carrera
            FROM Estudiantes e
            INNER JOIN DatosParticipantes dp ON e.numero_carnet = dp.carnet
            WHERE dp.id_actividad = @idActividad";

        using var cmd = new MySqlCommand(query, connection);
        cmd.Parameters.AddWithValue("@idActividad", idActividad);

        using var reader = await cmd.ExecuteReaderAsync();

        var estudiantes = new List<Estudiante>();

        while (await reader.ReadAsync())
        {
            var estudiante = new Estudiante
            {
                Id = reader.GetInt32("id"),
                nombre = reader.GetString("nombre"),
                carnet = reader.GetString("numero_carnet"),
                carrera = reader.GetString("carrera")
            };
            estudiantes.Add(estudiante);
        }

        var response = new { success = true, estudiantes };
        context.Response.ContentType = "application/json";
        await context.Response.WriteAsJsonAsync(response);
    }
    catch (Exception ex)
    {
        context.Response.StatusCode = 500;
        var errorResponse = new { success = false, message = "Error al obtener los estudiantes: " + ex.Message };
        context.Response.ContentType = "application/json";
        await context.Response.WriteAsJsonAsync(errorResponse);
    }
});

app.MapGet("/EstudiantesInscritos/{id_actividad}", async (int id_actividad) =>
{
    // Lista para almacenar los resultados de la consulta
    List<dynamic> estudiantes = new List<dynamic>();

    try
    {
        // Preparar la consulta SQL para obtener los datos de los estudiantes
        string sql = "SELECT carnet, nombre, carrera FROM DatosParticipantes WHERE id_actividad = @id_actividad";
        using MySqlCommand cmd = new MySqlCommand(sql, connection);
        cmd.Parameters.AddWithValue("@id_actividad", id_actividad);

        // Ejecutar la consulta y leer los resultados
        using var reader = await cmd.ExecuteReaderAsync();
        while (await reader.ReadAsync())
        {
            // Crear un objeto con los datos del estudiante
            var estudiante = new
            {
                carnet = reader.GetString("carnet"),
                nombre = reader.GetString("nombre"),
                carrera = reader.IsDBNull(reader.GetOrdinal("carrera")) ? null : reader.GetString("carrera")
            };
            estudiantes.Add(estudiante);
        }
    }
    catch (Exception ex)
    {
        Console.WriteLine($"Error al obtener estudiantes inscritos: {ex.Message}");
        return Results.BadRequest("Error al obtener estudiantes inscritos");
    }

    // Construir el HTML con los datos de los estudiantes y el script JavaScript
    var html = new StringBuilder();
    html.Append(@"
    <!DOCTYPE html>
    <html lang='es'>
    <head>
        <meta charset='UTF-8'>
        <meta name='viewport' content='width=device-width, initial-scale=1.0'>
        <title>Estudiantes Inscritos</title>
        <style>
            body {
                background-color: #f4f4f4;
                color: #333;
                margin: 0;
                padding: 0;
                font-family: Arial, sans-serif;
            }
            header {
                background-color: #007BFF;
                padding: 10px 0;
                text-align: center;
                color: #fff;
            }
            main {
                padding: 20px;
                text-align: center;
            }
            h1 {
                margin-bottom: 20px;
                color: #333;
            }
            .estudiantes-container {
                display: flex;
                flex-wrap: wrap;
                justify-content: center;
            }
            .estudiante-card {
                background-color: #fff;
                border-radius: 10px;
                box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
                margin: 20px;
                padding: 20px;
                max-width: 400px;
                width: calc(100% - 40px);
                text-align: left;
                transition: transform 0.3s ease;
            }
            .estudiante-card:hover {
                transform: translateY(-5px);
            }
            .estudiante-card h2 {
                color: #333;
                margin-bottom: 10px;
                font-size: 24px;
            }
            .estudiante-card p {
                color: #666;
                margin-bottom: 10px;
                font-size: 18px;
                line-height: 1.6;
            }
            .button-container {
                display: flex;
                justify-content: flex-start;
                align-items: center;
                margin-top: 20px;
            }
            .asistio-checkbox {
                margin-right: 10px;
            }
            .finalizar-button {
                margin-top: 20px;
                padding: 10px 20px;
                border: none;
                border-radius: 5px;
                font-size: 16px;
                cursor: pointer;
                transition: background-color 0.3s ease;
                background-color: #dc3545;
                color: #fff;
                text-align: center;
            }
            .finalizar-button:hover {
                background-color: #c82333;
            }
        </style>
    </head>
    <body>
        <header>
            <h1>Estudiantes Inscritos</h1>
        </header>
        <main>
            <div class='estudiantes-container'>");

    foreach (var estudiante in estudiantes)
    {
        html.Append($@"
                <div class='estudiante-card'>
                    <h2>{estudiante.nombre}</h2>
                    <p><strong>Carnet:</strong> {estudiante.carnet}</p>
                    <p><strong>Carrera:</strong> {estudiante.carrera ?? "N/A"}</p>
                    <div class='button-container'>
                        <input type='checkbox' class='asistio-checkbox' id='asistio-{estudiante.carnet}' name='asistio-{estudiante.carnet}'>
                        <label for='asistio-{estudiante.carnet}'>Asistió a la Actividad</label>
                    </div>
                </div>");
    }

    html.Append(@"
            </div>
            <div>
                <h3>Objetivos Alcanzados</h3>
                <textarea id='objetivosAlcanzados' rows='4' cols='50'></textarea>
            </div>
            <div>
                <h3>Resultados</h3>
                <textarea id='resultados' rows='4' cols='50'></textarea>
            </div>
            <div>
                <h3>Evaluación</h3>
                <textarea id='evaluacion' rows='4' cols='50'></textarea>
            </div>
            <button id='finalizar-button' class='finalizar-button'>Finalizar</button>
        </main>
        <script>
            document.getElementById('finalizar-button').addEventListener('click', function() {
                var id_actividad = " + id_actividad + @";
                var checkboxes = document.querySelectorAll('.asistio-checkbox');
                var asistentes = [];
                var totalInscritos = " + estudiantes.Count + @";
                var objetivosAlcanzados = document.getElementById('objetivosAlcanzados').value;
                var resultados = document.getElementById('resultados').value;
                var evaluacion = document.getElementById('evaluacion').value;

                checkboxes.forEach(function(checkbox) {
                    if (checkbox.checked) {
                        var estudianteCard = checkbox.closest('.estudiante-card');
                        var nombreEstudiante = estudianteCard.querySelector('h2').textContent.trim();
                        var carnetEstudiante = estudianteCard.querySelector('p:nth-of-type(1)').textContent.trim().replace('Carnet: ', '');
                        var carreraEstudiante = estudianteCard.querySelector('p:nth-of-type(2)').textContent.trim().replace('Carrera: ', '');
                        
                        asistentes.push({
                            nombre: nombreEstudiante,
                            carnet: carnetEstudiante,
                            carrera: carreraEstudiante
                        });
                    }
                });

                console.log('Estudiantes que asistieron:');
                console.log(asistentes);

                fetch(`/ActualizarAsistencia/${id_actividad}`, {
                    method: 'POST',
                    headers: {
                        'Content-Type': 'application/json',
                    },
                    body: JSON.stringify({ 
                        cantidadAsistentes: asistentes.length, 
                        cantidadTotalInscritos: totalInscritos,
                        objetivosAlcanzados: objetivosAlcanzados,
                        resultados: resultados,
                        evaluacion: evaluacion
                    }),
                })
                .then(response => {
                    if (response.ok) {
                        console.log('Datos de la actividad actualizados correctamente.');
                        window.location.href = '/VerRegistroActividadesEjecutadas';
                    } else {
                        throw new Error('Error al actualizar los datos de la actividad.');
                    }
                })
                .catch(error => {
                    console.error('Error:', error);
                    alert('Error al actualizar los datos de la actividad.');
                });
            });
        </script>
    </body>
    </html>");

    return Results.Content(html.ToString(), "text/html");
});

app.MapPost("/ActualizarAsistencia/{id_actividad}", async (int id_actividad, HttpRequest request) =>
{
    try
    {
        // Leer los datos JSON del cuerpo de la solicitud
        var requestBody = await System.Text.Json.JsonSerializer.DeserializeAsync<Dictionary<string, JsonElement>>(request.Body) ?? new Dictionary<string, JsonElement>();


        int cantidadAsistentes = requestBody["cantidadAsistentes"].GetInt32();
        int cantidadTotalInscritos = requestBody["cantidadTotalInscritos"].GetInt32();
        string? objetivosAlcanzados = requestBody["objetivosAlcanzados"].GetString();
        string? resultados = requestBody["resultados"].GetString();
        string? evaluacion = requestBody["evaluacion"].GetString();
        DateTime fechaFinalizacion = DateTime.Now;


        // Iniciar una transacción
        using var transaction = await connection.BeginTransactionAsync();

        try
        {
            // Actualizar los campos en la tabla ReportesActividadesExtension
            string sqlUpdateReportes = @"
                UPDATE ReportesActividadesExtension 
                SET 
                    numeroParticipantesAsistidos = @cantidadAsistentes, 
                    numeroTotalInscritos = @cantidadTotalInscritos, 
                    objetivosAlcanzados = @objetivosAlcanzados,
                    resultados = @resultados,
                    evaluacion = @evaluacion,
                    fechaFinalizacion = @fechaFinalizacion
                WHERE id_actividad = @id_actividad";

            using MySqlCommand cmdUpdateReportes = new MySqlCommand(sqlUpdateReportes, connection, transaction);
            cmdUpdateReportes.Parameters.AddWithValue("@cantidadAsistentes", cantidadAsistentes);
            cmdUpdateReportes.Parameters.AddWithValue("@cantidadTotalInscritos", cantidadTotalInscritos);
            cmdUpdateReportes.Parameters.AddWithValue("@objetivosAlcanzados", objetivosAlcanzados);
            cmdUpdateReportes.Parameters.AddWithValue("@resultados", resultados);
            cmdUpdateReportes.Parameters.AddWithValue("@evaluacion", evaluacion);
            cmdUpdateReportes.Parameters.AddWithValue("@fechaFinalizacion", fechaFinalizacion);
            cmdUpdateReportes.Parameters.AddWithValue("@id_actividad", id_actividad);

            int rowsAffectedReportes = await cmdUpdateReportes.ExecuteNonQueryAsync();

            // Actualizar el campo finalizo en la tabla PlanActividadesExtension
            string sqlUpdatePlan = @"
                UPDATE PlanActividadesExtension 
                SET 
                    finalizo = @finalizo
                WHERE id = @id_actividad";

            using MySqlCommand cmdUpdatePlan = new MySqlCommand(sqlUpdatePlan, connection, transaction);
            cmdUpdatePlan.Parameters.AddWithValue("@finalizo", true);
            cmdUpdatePlan.Parameters.AddWithValue("@id_actividad", id_actividad);

            int rowsAffectedPlan = await cmdUpdatePlan.ExecuteNonQueryAsync();

            // Confirmar la transacción
            await transaction.CommitAsync();

            if (rowsAffectedReportes > 0 && rowsAffectedPlan > 0)
            {
                Console.WriteLine($"Datos de la actividad actualizados correctamente para la actividad con ID {id_actividad}.");
                return Results.Ok("Datos de la actividad actualizados correctamente.");
            }
            else
            {
                return Results.NotFound("No se encontró la actividad especificada para actualizar.");
            }
        }
        catch (Exception)
        {
            // Revertir la transacción en caso de error
            await transaction.RollbackAsync();
            throw;
        }
    }
    catch (Exception ex)
    {
        Console.WriteLine($"Error al actualizar los datos de la actividad: {ex.Message}");
        return Results.BadRequest("Error al actualizar los datos de la actividad.");
    }
});

// Endpoint para obtener todas las actividades que ya finalizaron
app.MapGet("/VerRegistroActividadesEjecutadas", async () =>
{
    // Lista para almacenar los resultados de la consulta
    List<dynamic> actividadesFinalizadas = new List<dynamic>();

    try
    {
        // Preparar la consulta SQL para obtener los datos de las actividades finalizadas
        string sql = @"
            SELECT pa.id, pa.nombreActividad, pa.descripcion, pa.objetivos, pa.responsable, 
                   pa.recursosNecesarios, pa.justificacion, pa.haSidoEjecutado, pa.finalizo,
                   ra.numeroTotalInscritos, ra.objetivosAlcanzados, ra.resultados, 
                   ra.evaluacion, ra.numeroParticipantesAsistidos, ra.fechaInicializacion, 
                   ra.fechaFinalizacion
            FROM PlanActividadesExtension pa
            JOIN ReportesActividadesExtension ra ON pa.id = ra.id_actividad
            WHERE pa.finalizo = 1";

        using MySqlCommand cmd = new MySqlCommand(sql, connection);

        // Ejecutar la consulta y leer los resultados
        using var reader = await cmd.ExecuteReaderAsync();
        while (await reader.ReadAsync())
        {
            // Crear un objeto con los datos de la actividad finalizada
            var actividad = new
            {
                id = reader.GetInt32("id"),
                nombreActividad = reader.GetString("nombreActividad"),
                descripcion = reader.IsDBNull(reader.GetOrdinal("descripcion")) ? null : reader.GetString("descripcion"),
                objetivos = reader.IsDBNull(reader.GetOrdinal("objetivos")) ? null : reader.GetString("objetivos"),
                responsable = reader.IsDBNull(reader.GetOrdinal("responsable")) ? null : reader.GetString("responsable"),
                recursosNecesarios = reader.IsDBNull(reader.GetOrdinal("recursosNecesarios")) ? null : reader.GetString("recursosNecesarios"),
                justificacion = reader.IsDBNull(reader.GetOrdinal("justificacion")) ? null : reader.GetString("justificacion"),
                haSidoEjecutado = reader.GetBoolean("haSidoEjecutado"),
                finalizo = reader.GetBoolean("finalizo"),
                numeroTotalInscritos = reader.GetInt32("numeroTotalInscritos"),
                objetivosAlcanzados = reader.IsDBNull(reader.GetOrdinal("objetivosAlcanzados")) ? null : reader.GetString("objetivosAlcanzados"),
                resultados = reader.IsDBNull(reader.GetOrdinal("resultados")) ? null : reader.GetString("resultados"),
                evaluacion = reader.IsDBNull(reader.GetOrdinal("evaluacion")) ? null : reader.GetString("evaluacion"),
                numeroParticipantesAsistidos = reader.GetInt32("numeroParticipantesAsistidos"),
                fechaInicializacion = reader.IsDBNull(reader.GetOrdinal("fechaInicializacion")) ? (DateTime?)null : reader.GetDateTime("fechaInicializacion"),
                fechaFinalizacion = reader.IsDBNull(reader.GetOrdinal("fechaFinalizacion")) ? (DateTime?)null : reader.GetDateTime("fechaFinalizacion")
            };
            actividadesFinalizadas.Add(actividad);
        }
    }
    catch (Exception ex)
    {
        Console.WriteLine($"Error al obtener actividades finalizadas: {ex.Message}");
        return Results.BadRequest("Error al obtener actividades finalizadas");
    }

    // Construir el HTML con los datos de las actividades finalizadas
    var html = new StringBuilder();
    html.Append(@"
    <!DOCTYPE html>
    <html lang='es'>
    <head>
        <meta charset='UTF-8'>
        <meta name='viewport' content='width=device-width, initial-scale=1.0'>
        <title>Registro de Actividades Finalizadas</title>
        <style>
            body {
                background-color: #f4f4f4;
                color: #333;
                margin: 0;
                padding: 0;
                font-family: Arial, sans-serif;
            }
            header {
                background-color: #007BFF;
                padding: 10px 0;
                text-align: center;
                color: #fff;
            }
            main {
                padding: 20px;
                text-align: center;
            }
            h1 {
                margin-bottom: 20px;
                color: #333;
            }
            .actividad-card {
                background-color: #fff;
                border-radius: 10px;
                box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
                margin: 20px;
                padding: 20px;
                max-width: 800px;
                width: calc(100% - 40px);
                text-align: left;
                transition: transform 0.3s ease;
            }
            .actividad-card:hover {
                transform: translateY(-5px);
            }
            .actividad-card h2 {
                color: #333;
                margin-bottom: 10px;
                font-size: 24px;
            }
            .actividad-card p {
                color: #666;
                margin-bottom: 10px;
                font-size: 18px;
                line-height: 1.6;
            }
        </style>
    </head>
    <body>
        <header>
            <h1>Registro de Actividades Finalizadas</h1>
        </header>
        <main>");

    foreach (var actividad in actividadesFinalizadas)
    {
        html.Append($@"
            <div class='actividad-card'>
                <h2>{actividad.nombreActividad}</h2>
                <p><strong>Descripción:</strong> {actividad.descripcion ?? "N/A"}</p>
                <p><strong>Objetivos:</strong> {actividad.objetivos ?? "N/A"}</p>
                <p><strong>Responsable:</strong> {actividad.responsable ?? "N/A"}</p>
                <p><strong>Recursos Necesarios:</strong> {actividad.recursosNecesarios ?? "N/A"}</p>
                <p><strong>Justificación:</strong> {actividad.justificacion ?? "N/A"}</p>
                <p><strong>Número Total Inscritos:</strong> {actividad.numeroTotalInscritos}</p>
                <p><strong>Objetivos Alcanzados:</strong> {actividad.objetivosAlcanzados ?? "N/A"}</p>
                <p><strong>Resultados:</strong> {actividad.resultados ?? "N/A"}</p>
                <p><strong>Evaluación:</strong> {actividad.evaluacion ?? "N/A"}</p>
                <p><strong>Número Participantes Asistidos:</strong> {actividad.numeroParticipantesAsistidos}</p>
                <p><strong>Fecha Inicialización:</strong> {actividad.fechaInicializacion?.ToString("yyyy-MM-dd HH:mm:ss") ?? "N/A"}</p>
                <p><strong>Fecha Finalización:</strong> {actividad.fechaFinalizacion?.ToString("yyyy-MM-dd HH:mm:ss") ?? "N/A"}</p>
            </div>");
    }

    html.Append(@"
        </main>
    </body>
    </html>");

    // Devolver el HTML como respuesta
    return Results.Content(html.ToString(), "text/html");
});


// Iniciar la aplicación web y ponerla en funcionamiento para escuchar las solicitudes entrantes
app.Run(url: "http://0.0.0.0:5000");
