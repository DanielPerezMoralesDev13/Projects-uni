# En C#, `string?` es una sintaxis utilizada para indicar que una variable de tipo `string` puede tener un valor `null`. Esto es parte de una característica llamada "nullable reference types" (tipos de referencia anulables) introducida en C# 8.0

## Nullable Reference Types (Tipos de Referencia Anulables)

En versiones anteriores de C#, todas las referencias (`class`, `string`, `array`, etc.) podían ser `null` por defecto. Esto podía llevar a errores de referencia nula (`NullReferenceException`) si no se manejaba adecuadamente. Con la introducción de los tipos de referencia anulables, se proporciona una forma de manejar mejor estos casos.

### ¿Qué significa `string?`?

1. **`string` (sin el `?`):** Indica que la variable es un tipo de referencia no anulable. Es decir, se espera que siempre tenga un valor y no sea `null`.
2. **`string?` (con el `?`):** Indica que la variable es un tipo de referencia anulable. Esto significa que la variable puede contener un valor de tipo `string` o `null`.

### Ejemplo de uso

```csharp
public class Ejemplo
{
    public string NoNullString { get; set; }   // No puede ser null
    public string? NullableString { get; set; } // Puede ser null
}

public class Program
{
    public static void Main()
    {
        Ejemplo ejemplo = new Ejemplo();
        
        ejemplo.NoNullString = "Hola"; // Válido
        // ejemplo.NoNullString = null; // Error en compilación si los tipos anulables están habilitados

        ejemplo.NullableString = "Mundo"; // Válido
        ejemplo.NullableString = null;    // También válido
    }
}
```

### Habilitación de Nullable Reference Types

Para utilizar nullable reference types, debes habilitar esta característica en tu proyecto. Puedes hacerlo añadiendo la siguiente línea al archivo de configuración del proyecto (`.csproj`):

```xml
<Project Sdk="Microsoft.NET.Sdk">
  <PropertyGroup>
    <Nullable>enable</Nullable>
  </PropertyGroup>
</Project>
```

### Beneficios

1. **Mejora la seguridad del código:** Ayuda a prevenir errores de referencia nula, ya que el compilador puede advertir sobre posibles asignaciones nulas.
2. **Documentación implícita:** Clarifica la intención del desarrollador al especificar cuáles variables pueden ser `null` y cuáles no.
3. **Detección temprana de errores:** Los errores relacionados con valores nulos pueden detectarse en tiempo de compilación en lugar de tiempo de ejecución.

### Manejo de valores nulos

Cuando trabajas con tipos de referencia anulables, puedes utilizar el operador de coalescencia nula (`??`) y el operador de condicional nula (`?.`) para manejar los valores `null` de manera segura:

```csharp
public void ProcesarTexto(string? texto)
{
    // Usa el operador de coalescencia nula para proporcionar un valor predeterminado
    string textoSeguro = texto ?? "Valor por defecto";

    // Usa el operador de condicional nula para evitar errores de referencia nula
    int longitud = texto?.Length ?? 0;
    
    Console.WriteLine($"Texto: {textoSeguro}, Longitud: {longitud}");
}
```

En resumen, `string?` es una forma de especificar que una variable de tipo `string` puede ser `null`, mejorando la seguridad y la claridad del código en relación con el manejo de valores nulos.
