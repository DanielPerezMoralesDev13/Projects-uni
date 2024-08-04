# Ejemplos de cómo trabajar con tipos de datos de fecha (`DateTime`) en C #

1. **Crear una fecha y hora actual:**

    ```csharp
    DateTime ahora = DateTime.Now;
    ```

2. **Crear una fecha específica:**

    ```csharp
    DateTime fechaEspecifica = new DateTime(2024, 5, 24);
    ```

3. **Obtener componentes de fecha y hora:**

    ```csharp
    int año = ahora.Year;
    int mes = ahora.Month;
    int día = ahora.Day;
    int hora = ahora.Hour;
    int minuto = ahora.Minute;
    int segundo = ahora.Second;
    ```

4. **Operaciones matemáticas con fechas:**

    ```csharp
    DateTime mañana = ahora.AddDays(1);
    DateTime ayer = ahora.AddDays(-1);
    TimeSpan diferencia = mañana - ahora;
    ```

5. **Formatear fechas como cadenas:**

    ```csharp
    string formatoCorto = ahora.ToShortDateString(); // 5/24/2024
    string formatoLargo = ahora.ToLongDateString();   // viernes, 24 de mayo de 2024
    string formatoPersonalizado = ahora.ToString("dd/MM/yyyy HH:mm:ss"); // 24/05/2024 15:30:00
    ```

6. **Parsear una cadena a fecha:**

    ```csharp
    string fechaTexto = "2024-05-24";
    DateTime fechaParseada = DateTime.Parse(fechaTexto);
    ```

7. **Comparar fechas:**

    ```csharp
    DateTime otraFecha = new DateTime(2024, 5, 23);
    bool esMayor = ahora > otraFecha;
    bool esIgual = ahora == otraFecha;
    ```

Estos son solo algunos ejemplos básicos de cómo trabajar con fechas en C#. ¡Espero que te sean útiles! Si necesitas más información o ejemplos, no dudes en preguntar.
