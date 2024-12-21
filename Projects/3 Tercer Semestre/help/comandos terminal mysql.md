# comand

1. Conectar a MySQL:

   ```bash
   mysql -u tu_usuario -p
   ```

2. Crear una nueva base de datos (si aún no la tienes):

   ```sql
   CREATE DATABASE IF NOT EXISTS nombre_de_la_base_de_datos;
   ```

3. Usar la base de datos recién creada:

   ```sql
   USE nombre_de_la_base_de_datos;
   ```

4. Crear una tabla llamada `estudiantes` con los campos especificados:

   ```sql
   CREATE TABLE estudiantes (
       id INT PRIMARY KEY,
       nombre_estudiante VARCHAR(255),
       carnet VARCHAR(10),
       carrera VARCHAR(50),
       anio_carrera INT
   );
   ```

5. Insertar los datos en la tabla `estudiantes`:
  Claro, aquí tienes todos los comandos de inserción para los 100 estudiantes:

    ```sql
    INSERT INTO estudiantes (id, nombre_estudiante, carnet, carrera, anio_carrera) VALUES
    (1, 'Ana Martínez', '2023-1234I', 'Ingeniería en Computación', 1),
    (2, 'José López', '2023-5678I', 'Ingeniería en Sistemas', 2),
    (3, 'María Rodríguez', '2023-9012I', 'Ingeniería Civil', 3),
    (4, 'Carlos Pérez', '2023-3456I', 'Ingeniería Industrial', 1),
    (5, 'Laura Gómez', '2023-7890I', 'Ingeniería Eléctrica', 2),
    (6, 'Miguel García', '2023-2345I', 'Ingeniería Electrónica', 3),
    (7, 'Sofía Hernández', '2023-6789I', 'Ingeniería en Computación', 1),
    (8, 'Daniel Díaz', '2023-0123I', 'Ingeniería en Sistemas', 2),
    (9, 'Valentina Ruiz', '2023-4567I', 'Ingeniería Civil', 3),
    (10, 'Alejandro Torres', '2023-8901I', 'Ingeniería Industrial', 1),
    (11, 'Andrea Medina', '2023-3456I', 'Ingeniería Eléctrica', 2),
    (12, 'Rodrigo Castro', '2023-7890I', 'Ingeniería Electrónica', 3),
    (13, 'Paula Navarro', '2023-2345I', 'Ingeniería en Computación', 1),
    (14, 'Juan Reyes', '2023-6789I', 'Ingeniería en Sistemas', 2),
    (15, 'Daniela Sánchez', '2023-0123I', 'Ingeniería Civil', 3),
    (16, 'Adrián Flores', '2023-4567I', 'Ingeniería Industrial', 1),
    (17, 'Ana Martínez', '2023-8901I', 'Ingeniería Eléctrica', 2),
    (18, 'José López', '2023-3456I', 'Ingeniería Electrónica', 3),
    (19, 'María Rodríguez', '2023-7890I', 'Ingeniería en Computación', 1),
    (20, 'Carlos Pérez', '2023-2345I', 'Ingeniería en Sistemas', 2),
    (21, 'Laura Gómez', '2023-6789I', 'Ingeniería Civil', 3),
    (22, 'Miguel García', '2023-0123I', 'Ingeniería Industrial', 1),
    (23, 'Sofía Hernández', '2023-4567I', 'Ingeniería Eléctrica', 2),
    (24, 'Daniel Díaz', '2023-8901I', 'Ingeniería Electrónica', 3),
    (25, 'Valentina Ruiz', '2023-3456I', 'Ingeniería en Computación', 1),
    (26, 'Alejandro Torres', '2023-7890I', 'Ingeniería en Sistemas', 2),
    (27, 'Andrea Medina', '2023-2345I', 'Ingeniería Civil', 3),
    (28, 'Rodrigo Castro', '2023-6789I', 'Ingeniería Industrial', 1),
    (29, 'Paula Navarro', '2023-0123I', 'Ingeniería Eléctrica', 2),
    (30, 'Juan Reyes', '2023-4567I', 'Ingeniería Electrónica', 3),
    (31, 'Daniela Sánchez', '2023-8901I', 'Ingeniería en Computación', 1),
    (32, 'Adrián Flores', '2023-3456I', 'Ingeniería en Sistemas', 2),
    (33, 'Ana Martínez', '2023-7890I', 'Ingeniería Civil', 3),
    (34, 'José López', '2023-1234I', 'Ingeniería Industrial', 1),
    (35, 'María Rodríguez', '2023-5678I', 'Ingeniería Eléctrica', 2),
    (36, 'Carlos Pérez', '2023-9012I', 'Ingeniería Electrónica', 3),
    (37, 'Laura Gómez', '2023-3456I', 'Ingeniería en Computación', 1),
    (38, 'Miguel García', '2023-7890I', 'Ingeniería en Sistemas', 2),
    (39, 'Sofía Hernández', '2023-2345I', 'Ingeniería Civil', 3),
    (40, 'Daniel Díaz', '2023-6789I', 'Ingeniería Industrial', 1),
    (41, 'Valentina Ruiz', '2023-0123I', 'Ingeniería Eléctrica', 2),
    (42, 'Alejandro Torres', '2023-4567I', 'Ingeniería Electrónica', 3),
    (43, 'Andrea Medina', '2023-8901I', 'Ingeniería en Computación', 1),
    (44, 'Rodrigo Castro', '2023-2345I', 'Ingeniería en Sistemas', 2),
    (45, 'Paula Navarro', '2023-6789I', 'Ingeniería Civil', 3),
    (46, 'Juan Reyes', '2023-0123I', 'Ingeniería Industrial', 1),
    (47, 'Daniela Sánchez', '2023-4567I', 'Ingeniería Eléctrica', 2),
    (48, 'Adrián Flores', '2023-8901I', 'Ingeniería Electrónica', 3),
    (49, 'Ana Martínez', '2023-3456I', 'Ingeniería en Computación', 1),
    (50, 'José López', '2023-7890I', 'Ingeniería en Sistemas', 2),
    (51, 'María Rodríguez', '2023-2345I', 'Ingeniería Civil', 3),
    (52, 'Carlos Pérez', '2023-6789I', 'Ingeniería Industrial', 1),
    (53, 'Laura Gómez', '2023-0123I', 'Ingeniería Eléctrica', 2),
    (54, 'Miguel García', '2023-4567I', 'Ingeniería Electrónica', 3),
    (55, 'Sofía Hernández', '2023-8901I', 'Ingeniería en Computación', 1),
    (56, 'Daniel Díaz', '2023-3456I', 'Ingeniería en Sistemas', 2),
    (57, 'Valentina Ruiz', '2023-7890I', 'Ingeniería Civil', 3),
    (58, 'Alejandro Torres', '2023-2345I', 'Ingeniería Industrial', 1),
    (59, 'Andrea Medina', '2023-6789I', 'Ingeniería Eléctrica', 2),
    (60, 'Rodrigo Castro', '2023-0123I', 'Ingeniería Electrónica', 3),
    (61, 'Paula Navarro', '2023-4567I', 'Ingeniería en Computación', 1),
    (62, 'Juan Reyes', '2023-8901I', 'Ingeniería en Sistemas', 2),
    (63, 'Daniela Sánchez', '2023-3456I', 'Ingeniería Civil', 3),
    (64, 'Adrián Flores', '2023-7890I', 'Ingeniería Industrial', 1),
    (65, 'Ana Martínez', '2023-2345', 'Ingeniería Eléctrica', 2),
    (66, 'José López', '2023-6789I', 'Ingeniería Electrónica', 3),
    (67, 'María Rodríguez', '2023-0123I', 'Ingeniería en Computación', 1),
    (68, 'Carlos Pérez', '2023-4567I', 'Ingeniería en Sistemas', 2),
    (69, 'Laura Gómez', '2023-8901I', 'Ingeniería Civil', 3),
    (70, 'Miguel García', '2023-3456I', 'Ingeniería Industrial', 1),
    (71, 'Sofía Hernández', '2023-7890I', 'Ingeniería Eléctrica', 2),
    (72, 'Daniel Díaz', '2023-2345I', 'Ingeniería Electrónica', 3),
    (73, 'Valentina Ruiz', '2023-6789I', 'Ingeniería en Computación', 1),
    (74, 'Alejandro Torres', '2023-0123I', 'Ingeniería en Sistemas', 2),
    (75, 'Andrea Medina', '2023-4567I', 'Ingeniería Civil', 3),
    (76, 'Rodrigo Castro', '2023-8901I', 'Ingeniería Industrial', 1),
    (77, 'Paula Navarro', '2023-3456I', 'Ingeniería Eléctrica', 2),
    (78, 'Juan Reyes', '2023-7890I', 'Ingeniería Electrónica', 3),
    (79, 'Daniela Sánchez', '2023-2345I', 'Ingeniería en Computación', 1),
    (80, 'Adrián Flores', '2023-6789I', 'Ingeniería en Sistemas', 2),
    (81, 'Ana Martínez', '2023-0123I', 'Ingeniería Civil', 3),
    (82, 'José López', '2023-4567I', 'Ingeniería Industrial', 1),
    (83, 'María Rodríguez', '2023-8901I', 'Ingeniería Eléctrica', 2),
    (84, 'Carlos Pérez', '2023-3456I', 'Ingeniería Electrónica', 3),
    (85, 'Laura Gómez', '2023-7890I', 'Ingeniería en Computación', 1),
    (86, 'Miguel García', '2023-2345I', 'Ingeniería en Sistemas', 2),
    (87, 'Sofía Hernández', '2023-6789I', 'Ingeniería Civil', 3),
    (88, 'Daniel Díaz', '2023-0123I', 'Ingeniería Industrial', 1),
    (89, 'Valentina Ruiz', '2023-4567I', 'Ingeniería Eléctrica', 2),
    (90, 'Alejandro Torres', '2023-8901I', 'Ingeniería Electrónica', 3),
    (91, 'Andrea Medina', '2023-3456I','Ingeniería en Computación', 1),
    (92, 'Rodrigo Castro', '2023-7890I', 'Ingeniería en Sistemas', 2),
    (93, 'Paula Navarro', '2023-2345I', 'Ingeniería Civil', 3),
    (94, 'Juan Reyes', '2023-6789I', 'Ingeniería Industrial', 1),
    (95, 'Daniela Sánchez', '2023-0123I', 'Ingeniería Eléctrica', 2),
    (96, 'Adrián Flores', '2023-4567I', 'Ingeniería Electrónica', 3),
    (97, 'Ana Martínez', '2023-8901I', 'Ingeniería en Computación', 1),
    (98, 'José López', '2023-3456I', 'Ingeniería en Sistemas', 2),
    (99, 'María Rodríguez', '2023-7890I', 'Ingeniería Civil', 3),
    (100, 'Carlos Pérez', '2023-2345I', 'Ingeniería Industrial', 1);
    ```

    ```sql
    SELECT * FROM estudiantes;
    ```

Cerrar session y volver abrir

```bash
su root
```

```sql
mysql -u root -p -P 3306
```

```sql
mysql> SHOW TABLES;
```

Y la salida mostrará todas las tablas en la base de datos seleccionada.

Para ver la estructura de una tabla específica en MySQL, puedes usar el comando DESCRIBE seguido del nombre de la tabla. Aquí está cómo hacerlo:

```sql
DESCRIBE estudiantes;
```

Este comando mostrará la estructura de la tabla estudiantes, incluyendo los nombres de las columnas, los tipos de datos y cualquier restricción que pueda haber definido.

```sql
SELECT nombre_estudiante, carnet FROM estudiantes;
```

Esto te mostrará solo las columnas nombre_estudiante y carnet de la tabla estudiantes.

```sql
ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'root password';
```
