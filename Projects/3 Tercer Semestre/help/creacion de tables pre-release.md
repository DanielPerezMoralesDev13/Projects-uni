# Para crear estas tablas en tu base de datos MySQL, aquí tienes los comandos SQL que puedes ejecutar en tu sesión de MySQL

1. **Tabla DatosParticipantes:**

   ```sql
   CREATE TABLE DatosParticipantes (
       id INT NOT NULL AUTO_INCREMENT,
       carnet VARCHAR(20) NOT NULL,
       nombre VARCHAR(100) NOT NULL,
       carrera VARCHAR(100),
       id_actividad INT,
       PRIMARY KEY (id)
   );
   ```

2. **Tabla Estudiantes:**

   ```sql
   CREATE TABLE Estudiantes (
       id INT NOT NULL AUTO_INCREMENT,
       nombre VARCHAR(100) NOT NULL,
       numero_carnet VARCHAR(20) NOT NULL,
       carrera VARCHAR(100) NOT NULL,
       PRIMARY KEY (id)
   );
   ```

3. **Tabla PlanActividadesExtension:**

   ```sql
   CREATE TABLE PlanActividadesExtension (
       id INT NOT NULL AUTO_INCREMENT,
       nombreActividad VARCHAR(255) NOT NULL,
       descripcion TEXT,
       objetivos TEXT,
       responsable VARCHAR(100),
       recursosNecesarios TEXT,
       justificacion TEXT,
       haSidoEjecutado TINYINT(1),
       finalizo TINYINT(1) DEFAULT 0,
       PRIMARY KEY (id)
   );
   ```

4. **Tabla ReportesActividadesExtension:**

   ```sql
   CREATE TABLE ReportesActividadesExtension (
       id INT NOT NULL AUTO_INCREMENT,
       numeroTotalInscritos INT,
       objetivosAlcanzados TEXT,
       resultados TEXT,
       evaluacion TEXT,
       numeroParticipantesAsistidos INT,
       id_actividad INT,
       fechaInicializacion DATETIME,
       fechaFinalizacion DATETIME,
       PRIMARY KEY (id)
   );
   ```

Estos comandos crearán las tablas con las estructuras que especificaste en tu base de datos MySQL. Asegúrate de ejecutar cada comando dentro de tu sesión de MySQL donde ya has seleccionado la base de datos adecuada (`Proyecto`, en tu caso).

```sql
-- Insertar 50 estudiantes aleatorios
INSERT INTO Estudiantes (nombre, numero_carnet, carrera) VALUES
('Juan Carlos Pérez Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07181'), 'Ingeniería en Computación'),
('María José Rodríguez López', CONCAT(YEAR(CURRENT_DATE()), '-07182'), 'Ingeniería en Sistemas'),
('Luis Miguel Martínez González', CONCAT(YEAR(CURRENT_DATE()), '-07183'), 'Ingeniería Civil'),
('Ana Sofía García Hernández', CONCAT(YEAR(CURRENT_DATE()), '-07184'), 'Ingeniería Industrial'),
('David Alejandro Díaz Díaz', CONCAT(YEAR(CURRENT_DATE()), '-07185'), 'Ingeniería en Electrónica'),
('Laura Gabriela Rodríguez Cruz', CONCAT(YEAR(CURRENT_DATE()), '-07186'), 'Ingeniería en Computación'),
('Diego Eduardo Pérez Sánchez', CONCAT(YEAR(CURRENT_DATE()), '-07187'), 'Ingeniería en Sistemas'),
('Andrea Isabel Martínez Reyes', CONCAT(YEAR(CURRENT_DATE()), '-07188'), 'Ingeniería Civil'),
('Carlos Alberto Gómez Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07189'), 'Ingeniería Industrial'),
('Sofía Valentina López Pérez', CONCAT(YEAR(CURRENT_DATE()), '-07190'), 'Ingeniería en Electrónica'),
('José Miguel Hernández Martínez', CONCAT(YEAR(CURRENT_DATE()), '-07191'), 'Ingeniería en Computación'),
('Fernanda Alejandra Cruz López', CONCAT(YEAR(CURRENT_DATE()), '-07192'), 'Ingeniería en Sistemas'),
('Rodrigo Arturo Sánchez García', CONCAT(YEAR(CURRENT_DATE()), '-07193'), 'Ingeniería Civil'),
('Elena Victoria Reyes Martínez', CONCAT(YEAR(CURRENT_DATE()), '-07194'), 'Ingeniería Industrial'),
('Daniel Antonio Gómez Hernández', CONCAT(YEAR(CURRENT_DATE()), '-07195'), 'Ingeniería en Electrónica'),
('Adriana Gabriela Pérez Pérez', CONCAT(YEAR(CURRENT_DATE()), '-07196'), 'Ingeniería en Computación'),
('Martín Alejandro López Rodríguez', CONCAT(YEAR(CURRENT_DATE()), '-07197'), 'Ingeniería en Sistemas'),
('Ana Sofía Martínez Sánchez', CONCAT(YEAR(CURRENT_DATE()), '-07198'), 'Ingeniería Civil'),
('Miguel Ángel Cruz Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07199'), 'Ingeniería Industrial'),
('Valentina Gabriela Hernández Cruz', CONCAT(YEAR(CURRENT_DATE()), '-07200'), 'Ingeniería en Electrónica'),
('Luis Eduardo Reyes López', CONCAT(YEAR(CURRENT_DATE()), '-07201'), 'Ingeniería en Computación'),
('Sara Victoria Sánchez Martínez', CONCAT(YEAR(CURRENT_DATE()), '-07202'), 'Ingeniería en Sistemas'),
('Juan Manuel Gómez Hernández', CONCAT(YEAR(CURRENT_DATE()), '-07203'), 'Ingeniería Civil'),
('Ana Sofía Pérez Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07204'), 'Ingeniería Industrial'),
('Diego Alejandro López Rodríguez', CONCAT(YEAR(CURRENT_DATE()), '-07205'), 'Ingeniería en Electrónica'),
('Fernanda Isabel Martínez Cruz', CONCAT(YEAR(CURRENT_DATE()), '-07206'), 'Ingeniería en Computación'),
('Javier Antonio Sánchez Pérez', CONCAT(YEAR(CURRENT_DATE()), '-07207'), 'Ingeniería en Sistemas'),
('Valentina Gabriela Hernández Martínez', CONCAT(YEAR(CURRENT_DATE()), '-07208'), 'Ingeniería Civil'),
('Santiago Arturo Gómez López', CONCAT(YEAR(CURRENT_DATE()), '-07209'), 'Ingeniería Industrial'),
('Camila Victoria Cruz Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07210'), 'Ingeniería en Electrónica'),
('José Luis Martínez Hernández', CONCAT(YEAR(CURRENT_DATE()), '-07211'), 'Ingeniería en Computación'),
('Isabella Sofía Sánchez Pérez', CONCAT(YEAR(CURRENT_DATE()), '-07212'), 'Ingeniería en Sistemas'),
('Emilio Alejandro Pérez Martínez', CONCAT(YEAR(CURRENT_DATE()), '-07213'), 'Ingeniería Civil'),
('María José Gómez Cruz', CONCAT(YEAR(CURRENT_DATE()), '-07214'), 'Ingeniería Industrial'),
('Andrés David Hernández Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07215'), 'Ingeniería en Electrónica'),
('Lucía Valentina López Rodríguez', CONCAT(YEAR(CURRENT_DATE()), '-07216'), 'Ingeniería en Computación'),
('Juan José Gómez Pérez', CONCAT(YEAR(CURRENT_DATE()), '-07217'), 'Ingeniería en Sistemas'),
('Ana Sofía Rodríguez Martínez', CONCAT(YEAR(CURRENT_DATE()), '-07218'), 'Ingeniería Civil'),
('Diego Alejandro Pérez Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07219'), 'Ingeniería Industrial'),
('María José Sánchez López', CONCAT(YEAR(CURRENT_DATE()), '-07220'), 'Ingeniería en Electrónica'),
('Santiago Alejandro Martínez Rodríguez', CONCAT(YEAR(CURRENT_DATE()), '-07221'), 'Ingeniería en Computación'),
('Valentina Sofía Cruz Gómez', CONCAT(YEAR(CURRENT_DATE()), '-07222'), 'Ingeniería en Sistemas'),
('Carlos Alberto Pérez Martínez', CONCAT(YEAR(CURRENT_DATE()), '-07223'), 'Ingeniería Civil'),
('Sara Gabriela Gómez López', CONCAT(YEAR(CURRENT_DATE()), '-07224'), 'Ingeniería Industrial'),
('Andrés David Martínez Cruz', CONCAT(YEAR(CURRENT_DATE()), '-07225'), 'Ingeniería en Electrónica');
```

```sql
-- Para añadir el campo id_actividad a la tabla "DatosParticipantes"
ALTER TABLE DatosParticipantes
ADD id_actividad INT;

-- Para añadir el campo id_actividad a la tabla "ReportesActividadesExtension"
ALTER TABLE ReportesActividadesExtension
ADD id_actividad INT;
```

```sql
-- Primero, elimina los campos que quieres eliminar
ALTER TABLE ReportesActividadesExtension
DROP COLUMN nombreActividad,
DROP COLUMN descripcion;

-- Luego, agrega los nuevos campos
ALTER TABLE ReportesActividadesExtension
ADD COLUMN fechaInicializacion DATE AFTER id,
ADD COLUMN numeroTotalInscritos INT AFTER fechaInicializacion;
```

```sql
ALTER TABLE ReportesActividadesExtension
ADD COLUMN fechaInicializacion DATETIME,
ADD COLUMN fechaFinalizacion DATETIME;
```

Para borrar todos los valores de las tablas y reiniciar el contador de ID en MySQL, puedes seguir estos pasos para cada tabla:

## 1. Borrar todos los valores de las tablas

Para cada tabla, ejecuta el siguiente comando SQL para eliminar todos los registros:

```sql
TRUNCATE TABLE NombreDeLaTabla;
```

Sustituye `NombreDeLaTabla` por el nombre de cada una de tus tablas. Aquí están los comandos específicos para tus tablas:

```sql
TRUNCATE TABLE DatosParticipantes;
TRUNCATE TABLE Estudiantes;
TRUNCATE TABLE PlanActividadesExtension;
TRUNCATE TABLE ReportesActividadesExtension;
```

### 2. Reiniciar el contador de ID (auto increment) en MySQL

Después de borrar los datos, si deseas reiniciar el contador de ID (auto increment) en cada tabla, puedes ejecutar el siguiente comando para cada una:

```sql
ALTER TABLE NombreDeLaTabla AUTO_INCREMENT = 1;
```

Esto reiniciará el contador de ID a 1 para cada tabla. Aquí están los comandos específicos para tus tablas:

```sql
ALTER TABLE DatosParticipantes AUTO_INCREMENT = 1;
ALTER TABLE Estudiantes AUTO_INCREMENT = 1;
ALTER TABLE PlanActividadesExtension AUTO_INCREMENT = 1;
ALTER TABLE ReportesActividadesExtension AUTO_INCREMENT = 1;
```

### Consideraciones

- **Truncate vs Delete**: `TRUNCATE TABLE` es más rápido que `DELETE FROM`, ya que no registra la eliminación de cada fila en el registro de transacciones y no dispara disparadores (triggers) de eliminación. Sin embargo, ten cuidado, ya que `TRUNCATE TABLE` no se puede deshacer (no es transaccional) y borra todos los registros de la tabla de inmediato.

- **Reinicio del contador de ID**: Reiniciar el contador de ID no afecta a la integridad referencial ni a las dependencias de claves foráneas. Simplemente restablece el contador para que el siguiente registro insertado comience desde el número especificado.

- **Seguridad y Respaldo**: Antes de ejecutar comandos que borren datos o modifiquen esquemas, asegúrate de tener un respaldo de tu base de datos en caso de necesitar restaurarlo.

Siguiendo estos pasos, podrás borrar todos los datos de tus tablas y reiniciar los contadores de ID en MySQL según tus requerimientos

---
