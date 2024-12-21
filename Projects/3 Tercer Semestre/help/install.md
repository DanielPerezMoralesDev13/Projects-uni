# ***Instalación en Debian/Ubuntu (con apt-get)***

## ***Compilador C# Viejo (Mono)***

*Para instalar Mono, sigue estos pasos:*

1. *Actualiza el índice de paquetes:*

   ```bash
   sudo apt-get update
   ```

2. *Instala Mono:*

   ```bash
   sudo apt-get install mono-complete
   ```

## ***Compilador C# Nuevo (.NET)***

*Para instalar el compilador C# nuevo (.NET), sigue estos pasos:*

1. *Agrega el repositorio de Microsoft:*

   ```bash
   # Instala una version especifica por ejemplo: dotnet-sdk-8.0
   apt-get search dotnet-sdk
   ```

   ```bash
   sudo apt-get install apt-get-transport-https
   sudo apt-get update
   sudo apt-get install dotnet-sdk-8.0
   ```

## ***Instalación en Arch Linux (con pacman)***

## ***Compilador C# Viejo (Mono) Arch***

*Para instalar Mono en Arch Linux, utiliza el siguiente comando:*

```bash
sudo pacman -Syu mono
```

## ***Compilador C# Nuevo (.NET) Arch***

*Para instalar el compilador C# nuevo (.NET) en Arch Linux, utiliza el siguiente comando:*

```bash
sudo pacman -Syu dotnet-sdk
```

## ***Crear un proyecto, compilar y ejecutar***

## ***Con Mono***

*Para crear, compilar y ejecutar un proyecto con Mono, sigue estos pasos:*

1. *Crea un nuevo proyecto:*

   ```bash
   mkdir MiProyecto
   cd MiProyecto
   ```

2. *Crea un archivo C# (por ejemplo, "Program.cs") y escribe tu código.*

3. **Compila el proyecto:**

   ```bash
   mcs Program.cs
   ```

4. *Ejecuta el programa:*

   ```bash
   mono Program.exe
   ```

## ***Con .NET***

*Para crear, compilar y ejecutar un proyecto con .NET, sigue estos pasos:*

1. *Crea un nuevo proyecto:*

   ```bash
   dotnet new console -n MiProyecto
   cd MiProyecto
   ```

2. *Edita el archivo generado "Program.cs" con tu código si es necesario.*

3. *Compila el proyecto:*

   ```bash
   dotnet build
   ```

4. *Ejecuta el programa:*

   ```bash
   dotnet run ./Program.cs
   ```

## ***Instalación de Paquetes NuGet***

*Para instalar el paquete NuGet MySql.Data en tu proyecto de C#, utiliza el siguiente comando:*

```bash
dotnet add package MySql.Data
```

## ***Crear un Proyecto Web***

*Para crear un proyecto web en C#, ejecuta el siguiente comando:*

```bash
dotnet new webapi -n MyBackendProject
```

> *Este README proporciona instrucciones detalladas para instalar los compiladores C# Mono y .NET en sistemas Debian/Ubuntu y Arch Linux, así como cómo crear, compilar y ejecutar proyectos utilizando ambos compiladores. También incluye instrucciones para instalar paquetes NuGet y crear un proyecto web en C#.*
