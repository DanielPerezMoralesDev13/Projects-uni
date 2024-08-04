using System.Linq;
using System.Collections.Generic;
using MySql.Data.MySqlClient;
using System;

namespace MyBackendProject
{
    // Clase estática para definir validaciones reutilizables
    public static class Validaciones
    {
        // Método para verificar si una cadena no contiene números
        public static bool NoContieneNumeros(string input)
        {
            return input.All(c => !char.IsDigit(c));
        }
    }

    // Clase para deserializar la solicitud de inscripción JSON
    public class InscripcionRequest
    {
        public int id_actividad { get; set; }
        public List<Estudiante>? estudiantes { get; set; }
    }

    // Clase que representa los datos de un estudiante
    public class Estudiante
    {
        public int Id { get; set; }

        public string? nombre { get; set; }
        public string? carnet { get; set; }
        public string? carrera { get; set; }
    }

    // Definición de la clase Actividad
    public class Actividad
    {
        public int Id { get; set; }
        public string? NombreActividad { get; set; }
        public string? Descripcion { get; set; }
        public string? Objetivos { get; set; }
        public string? Responsable { get; set; }
        public string? RecursosNecesarios { get; set; }
        public string? Justificacion { get; set; }
        public bool HaSidoEjecutado { get; set; }
        public bool Finalizo { get; set; }
    }
    public class FinalizarActividadRequest
    {
        public int idActividad { get; set; }
        public int idEstudiante { get; set; }
        public string? objetivosAlcanzados { get; set; }
        public string? evaluacion { get; set; }
        public string? resultados { get; set; }
    }
    public class RegistrarAsistenciaRequest
    {
        public int IdActividad { get; set; }
        public List<int>? EstudiantesAsistentes { get; set; }
    }
}
// Definición del modelo ReporteActividadExtension
public class ReporteActividadExtension
{
    public int id_actividad { get; set; }
    public int numeroParticipantesAsistidos { get; set; }
}
