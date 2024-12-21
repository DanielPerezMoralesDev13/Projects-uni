#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#include <ctype.h>
#include <lib_two.h>
#include <lib_three.h>

#define TAMANO 100
#define NUMERO_DE_CATEGORIAS 8
/*Variables globales*/
char codigos_agregados[TAMANO][50],
    nombre_producto_agregados[TAMANO][50],
    categoria_producto_ingresado[NUMERO_DE_CATEGORIAS][50];

char carrito_de_compra[TAMANO][50], verificar_copia[5], copia_de_nombre_producto[TAMANO][50];
short int unidades_compradas[TAMANO], contador_de_carrito = 0, copia_de_cantidad_producto[TAMANO], contador_de_copia_cantidad_producto = 0, numero_de_factura = 0;
/*recuerda vaciar los campos y ademas indice;*/
short int cantidad_de_producto_agregados[TAMANO], contador_de_indices = 0, indice, productos_existente = 0;
short double precio_del_producto_agregados[TAMANO];

/*Cantidad de categorias*/
char categoria_producto[NUMERO_DE_CATEGORIAS][50] = {{"Productos de limpieza"},
                                                     {"Muebles y Decoracion del Hogar"},
                                                     {"Electrodomesticos"},
                                                     {"Tecnologia"},
                                                     {"Accesorios"},
                                                     {"Instrumentos musicales"},
                                                     {"Juguetes"},
                                                     {"Alimentos"}};

/*funcion de agregar_producto*/
void categoria_del_producto(char *codigo_producto, char *nombre_producto, short int *cantidad, short double precio, char *verificar);
void categoria_del_producto(char *codigo_producto, char *nombre_producto, short int *cantidad, short double precio, char *verificar)
{
    /*
    (Estas categorías ya deben de estar definidas
    en el programa mostrara dichas categorías y
    el usuario seleccionara la categoría a
    la que pertenece el producto).*/
    short int iterable;
    char categoria[5];
    strcpy(verificar, "");
    while (1)
    {
        borrar();

        gotoxy(19, 2);
        textcolor(WHITE);
        cprintf("Elija la categorias para el producto \"%s\"", nombre_producto);
        textcolor(GREEN);

        gotoxy(10, 4);
        textcolor(WHITE);
        cprintf("1. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[0]);

        gotoxy(10, 6);
        textcolor(WHITE);
        cprintf("2. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[1]);

        gotoxy(10, 8);
        textcolor(WHITE);
        cprintf("3. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[2]);

        gotoxy(10, 10);
        textcolor(WHITE);
        cprintf("4. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[3]);

        gotoxy(10, 12);
        textcolor(WHITE);
        cprintf("5. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[4]);

        gotoxy(10, 14);
        textcolor(WHITE);
        cprintf("6. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[5]);

        gotoxy(10, 16);
        textcolor(WHITE);
        cprintf("7. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[6]);

        gotoxy(10, 18);
        textcolor(WHITE);
        cprintf("8. ");
        textcolor(CYAN);
        cprintf("\"%s\"", categoria_producto[7]);

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(10, 20);
        textcolor(CYAN);
        cprintf("Ingrese el numero de la categoria: ");
        gotoxy(45, 20);
        textcolor(GREEN);
        cprintf("                                               ");
        fflush(stdin);
        gotoxy(45, 20);
        input(&categoria, sizeof(categoria));
        if (strcmp(categoria, "\n") == 0)
        {
            gotoxy(15, 22);
            textcolor(GREEN);
            cprintf("Ingrese el numero de la categoria correctamente");
            getch();
            continue;
        }
        eliminar_enter(&categoria);
        mayuscula(&categoria);
        if (strcmp(categoria, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            strcpy(verificar, "salir");
            return;
        }
        if (strcmp(categoria, "1") == 0)
        {
            break;
        }
        else if (strcmp(categoria, "2") == 0)
        {
            break;
        }
        else if (strcmp(categoria, "3") == 0)
        {
            break;
        }
        else if (strcmp(categoria, "4") == 0)
        {
            break;
        }
        else if (strcmp(categoria, "5") == 0)
        {
            break;
        }
        else if (strcmp(categoria, "6") == 0)
        {
            break;
        }
        else if (strcmp(categoria, "7") == 0)
        {
            break;
        }
        else if (strcmp(categoria, "8") == 0)
        {
            break;
        }
        else
        {
            gotoxy(15, 22);
            textcolor(GREEN);
            cprintf("Ingrese el numero de la categoria correctamente");
            getch();
            continue;
        }
    }
    contador_de_indices++;
    /*Le restamos 1 para que siempre accedamos ala posicion que se necesita*/
    for (iterable = contador_de_indices - 1; iterable < contador_de_indices; iterable++)
    {

        strcpy(codigos_agregados[iterable], codigo_producto);
        strcpy(nombre_producto_agregados[iterable], nombre_producto);
        cantidad_de_producto_agregados[iterable] = cantidad;
        precio_del_producto_agregados[iterable] = precio;
        if (strcmp(categoria, "1") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[0]);
        }
        else if (strcmp(categoria, "2") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[1]);
        }
        else if (strcmp(categoria, "3") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[2]);
        }
        else if (strcmp(categoria, "4") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[3]);
        }
        else if (strcmp(categoria, "5") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[4]);
        }
        else if (strcmp(categoria, "6") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[5]);
        }
        else if (strcmp(categoria, "7") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[6]);
        }
        else if (strcmp(categoria, "8") == 0)
        {
            strcpy(categoria_producto_ingresado[iterable], categoria_producto[7]);
        }
    }

    /*borrar();
    printf("codigo %s\n",codigos_agregados[iterable-1]);
    printf("nombre %s\n",nombre_producto_agregados[iterable-1]);
    printf("cantidad %d\n",cantidad_de_producto_agregados[iterable-1]);
    printf("Precio %lf\n",precio_del_producto_agregados[iterable-1]);
    printf("categoria %s\n",categoria_producto_ingresado[iterable-1]);
    getch();*/
    productos_existente++;
    return;
}

/*funcion de agregar_producto*/
void precio_del_producto(char *codigo_producto, char *nombre_producto, short int *cantidad, char *verificar);
void precio_del_producto(char *codigo_producto, char *nombre_producto, short int *cantidad, char *verificar)
{
    /*(Validado para monto reales).*/
    char numero_flotante[50];
    short double precio;
    strcpy(verificar, "");
    while (1)
    {
        borrar();
        gotoxy(10, 3);
        textcolor(WHITE);
        cprintf("Codigo del producto: ");
        textcolor(GREEN);
        cprintf("%s", codigo_producto);

        gotoxy(10, 5);
        textcolor(WHITE);
        cprintf("Nombre del producto: ");
        textcolor(GREEN);
        cprintf("%s", nombre_producto);

        gotoxy(10, 7);
        textcolor(WHITE);
        cprintf("Cantidad de ingreso del producto: ");
        textcolor(GREEN);
        cprintf("%d", cantidad);

        gotoxy(10, 9);
        textcolor(WHITE);
        cprintf("Precio del producto: ");
        textcolor(GREEN);
        cprintf("                                                             ");

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(31, 9);
        fflush(stdin);
        input(&numero_flotante, sizeof(numero_flotante));
        if (strcmp(numero_flotante, "\n") == 0)
        {
            gotoxy(15, 13);
            textcolor(GREEN);
            cprintf("Cantidad no valida recuerde ingresar numeros flotantes");
            getch();
            continue;
        }
        eliminar_enter(&numero_flotante);
        mayuscula(&numero_flotante);
        if (strcmp(numero_flotante, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            strcpy(verificar, "salir");
            return;
        }
        ver_si_hay_flotante(&numero_flotante);
        if (strcmp(numero_flotante, "caracter") == 0)
        {
            /*significa que el usuario ingreso caracteres*/
            gotoxy(15, 13);
            textcolor(GREEN);
            cprintf("Cantidad no valida recuerde ingresar numeros flotantes");
            getch();
            continue;
        }
        else
        {
            break;
        }
    }
    precio = atof(numero_flotante); /*Para convertir cadena a double*/
    if (precio >= 1)
    {
        categoria_del_producto(codigo_producto, nombre_producto, cantidad, precio, verificar);
    }
    else
    {
        gotoxy(15, 13);
        textcolor(GREEN);
        cprintf("El numero que ingrese debe ser mayor que 0.0");
        getch();
        precio_del_producto(codigo_producto, nombre_producto, cantidad, verificar);
    }
    if (strcmp(verificar, "salir") == 0)
    {
        precio_del_producto(codigo_producto, nombre_producto, cantidad, verificar);
    }
    return;
}

/*funcion de agregar_producto*/
void cantidad_de_ingreso_de_producto(char *codigo_producto, char *nombre_producto, char *verificar);
void cantidad_de_ingreso_de_producto(char *codigo_producto, char *nombre_producto, char *verificar)
{
    /*(validado para enteros).*/
    char numero[50];
    short int cantidad;
    strcpy(verificar, "");
    while (1)
    {
        borrar();
        gotoxy(10, 3);
        textcolor(WHITE);
        cprintf("Codigo del producto: ");
        textcolor(GREEN);
        cprintf("%s", codigo_producto);

        gotoxy(10, 5);
        textcolor(WHITE);
        cprintf("Nombre del producto: ");
        textcolor(GREEN);
        cprintf("%s", nombre_producto);

        gotoxy(10, 7);
        textcolor(WHITE);
        cprintf("Cantidad de ingreso del producto: ");
        textcolor(GREEN);
        cprintf("                                   ");

        gotoxy(10, 9);
        textcolor(WHITE);
        cprintf("Precio del producto: ");
        textcolor(GREEN);
        cprintf("                                                             ");

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(44, 7);
        fflush(stdin);
        input(&numero, sizeof(numero));
        if (strcmp(numero, "\n") == 0)
        {
            gotoxy(15, 13);
            textcolor(GREEN);
            cprintf("Cantidad no valida recuerde ingresar numeros enteros");
            getch();
            continue;
        }
        eliminar_enter(&numero);
        mayuscula(&numero);
        if (strcmp(numero, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            strcpy(verificar, "salir");
            return;
        }
        ver_si_hay_caracter(&numero);
        if (strcmp(numero, "caracter") == 0)
        {
            /*significa que el usuario ingreso caracteres*/
            gotoxy(15, 13);
            textcolor(GREEN);
            cprintf("Cantidad no valida recuerde ingresar numeros enteros");
            getch();
            continue;
        }
        else
        {
            break;
        }
    }
    cantidad = atoi(numero);
    if (cantidad <= 0)
    {
        gotoxy(15, 13);
        textcolor(GREEN);
        cprintf("El numero que ingrese debe ser mayor que 0");
        getch();
        cantidad_de_ingreso_de_producto(codigo_producto, nombre_producto, verificar);
    }
    else
    {
        precio_del_producto(codigo_producto, nombre_producto, cantidad, verificar);
    }
    if (strcmp(verificar, "salir") == 0)
    {
        cantidad_de_ingreso_de_producto(codigo_producto, nombre_producto, verificar);
    }
    return;
}

/*funcion de agregar_producto*/
void nombre_del_producto(char *codigo_producto, char *verificar);
void nombre_del_producto(char *codigo_producto, char *verificar)
{
    char nombre_producto[50];
    short int iterable;
    strcpy(verificar, "");
    while (1)
    {
        borrar();
        gotoxy(10, 3);
        textcolor(WHITE);
        cprintf("Codigo del producto: ");
        textcolor(GREEN);
        cprintf("%s", codigo_producto);

        gotoxy(10, 5);
        textcolor(WHITE);
        cprintf("Nombre del producto: ");
        textcolor(GREEN);
        cprintf("                                                             ");

        gotoxy(10, 7);
        textcolor(WHITE);
        cprintf("Cantidad de ingreso del producto: ");
        textcolor(GREEN);
        cprintf("                            ");

        gotoxy(10, 9);
        textcolor(WHITE);
        cprintf("Precio del producto: ");
        textcolor(GREEN);
        cprintf("                                                             ");

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(31, 5);
        fflush(stdin);
        input(&nombre_producto, sizeof(nombre_producto));
        if (strcmp(nombre_producto, "\n") == 0)
        {
            gotoxy(23, 13);
            textcolor(GREEN);
            cprintf("Nombre del producto no valido");
            getch();
            continue;
        }
        eliminar_enter(&nombre_producto);
        mayuscula(&nombre_producto);
        if (strcmp(nombre_producto, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            strcpy(verificar, "salir");
            return;
        }
        ver_si_hay_numero_y_signos(&nombre_producto);
        if (strcmp(nombre_producto, "caracter") == 0)
        {
            /*significa que el usuario ingreso caracteres*/
            gotoxy(23, 13);
            textcolor(GREEN);
            cprintf("Nombre del producto no valido");
            getch();
            continue;
        }
        ver_largo(&nombre_producto);
        if (strcmp(nombre_producto, "codigo corto") == 0)
        {
            gotoxy(19, 13);
            textcolor(GREEN);
            cprintf("El nombre del producto es muy corto");
            getch();
            continue;
        }
        else
        {
            for (iterable = 0; iterable < TAMANO; iterable++)
            {
                if (strcmp(nombre_producto, nombre_producto_agregados[iterable]) == 0)
                {
                    strcpy(nombre_producto, "repetido");
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (strcmp(nombre_producto, "repetido") == 0)
            {
                gotoxy(11, 13);
                textcolor(GREEN);
                cprintf("El nombre del producto que ingreso ya existe ingrese otro");
                getch();
                continue;
            }
            else
            {
                break;
            }
        }
    }

    cantidad_de_ingreso_de_producto(codigo_producto, nombre_producto, verificar);
    if (strcmp(verificar, "salir") == 0)
    {
        nombre_del_producto(codigo_producto, verificar);
    }
    return;
}

/*funcion de agregar_producto*/
void codigo_del_producto(void);
void codigo_del_producto(void)
{
    char codigo_producto[50], verificar[5];
    short int iterable;
    while (1)
    {
        borrar();
        gotoxy(10, 3);
        textcolor(WHITE);
        cprintf("Codigo del producto: ");
        textcolor(GREEN);
        cprintf("                                                             ");

        gotoxy(10, 5);
        textcolor(WHITE);
        cprintf("Nombre del producto: ");
        textcolor(GREEN);
        cprintf("                                                             ");

        gotoxy(10, 7);
        textcolor(WHITE);
        cprintf("Cantidad de ingreso del producto: ");
        textcolor(GREEN);
        cprintf("                            ");

        gotoxy(10, 9);
        textcolor(WHITE);
        cprintf("Precio del producto: ");
        textcolor(GREEN);
        cprintf("                                                             ");

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(31, 3);
        fflush(stdin);
        input(&codigo_producto, sizeof(codigo_producto));
        if (strcmp(codigo_producto, "\n") == 0)
        {
            gotoxy(15, 13);
            textcolor(GREEN);
            cprintf("Ingrese correctamente el codigo del producto");
            getch();
            continue;
        }
        eliminar_enter(&codigo_producto);
        mayuscula(&codigo_producto);
        if (strcmp(codigo_producto, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            menu_principal();
        }
        ver_si_hay_caracter(&codigo_producto);
        if (strcmp(codigo_producto, "caracter") == 0)
        {
            /*significa que el usuario ingreso caracteres*/
            gotoxy(15, 13);
            textcolor(GREEN);
            cprintf("Ingrese correctamente el codigo del producto");
            getch();
            continue;
        }
        ver_largo(&codigo_producto);
        if (strcmp(codigo_producto, "codigo corto") == 0)
        {
            gotoxy(19, 13);
            textcolor(GREEN);
            cprintf("El codigo del producto es muy corto");
            getch();
            continue;
        }
        else
        {
            /*Ver si el codigo se repite*/
            for (iterable = 0; iterable < TAMANO; iterable++)
            {
                if (strcmp(codigo_producto, codigos_agregados[iterable]) == 0)
                {
                    strcpy(codigo_producto, "repetido");
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (strcmp(codigo_producto, "repetido") == 0)
            {
                gotoxy(15, 13);
                textcolor(GREEN);
                cprintf("El codigo que ingreso ya existe ingrese otro");
                getch();
                continue;
            }
            else
            {
                break;
            }
        }
    }

    nombre_del_producto(codigo_producto, &verificar);
    if (strcmp(verificar, "salir") == 0)
    {
        codigo_del_producto();
    }
    return;
}

/*opcion 1*/
void agregar_producto(void);
void agregar_producto(void)
{
    codigo_del_producto();
    /*
    nombre_del_producto();
    cantidad_de_ingreso_de_producto();
    precio_del_producto();
    categoria_del_producto();
    */
    return;
}

void ver_productos_inventario(void);
void ver_productos_inventario(void)
{
    /*ver los productos del inventario disponible*/
    short int iterable, contadora = 0;
    size_t len;
    char opcion[5];
    while (1)
    {
        borrar();

        gotoxy(19, 2);
        textcolor(WHITE);
        cprintf("Productos del invetario disponibles actualmente");
        textcolor(GREEN);

        for (iterable = 0; iterable < contador_de_indices; iterable++)
        {
            len = strlen(nombre_producto_agregados[iterable]);
            if (len >= 3)
            {
                contadora++;
                gotoxy(10, 4 + contadora);
                textcolor(WHITE);
                cprintf("%d. ", contadora);
                textcolor(CYAN);
                cprintf("\"%s\"\n", nombre_producto_agregados[iterable]);
            }
            else
            {
                continue;
            }
        }
        contadora = 0;

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(10, 23);
        textcolor(CYAN);
        cprintf("> ");
        gotoxy(12, 23);
        textcolor(GREEN);
        cprintf("                                                                               ");
        fflush(stdin);
        gotoxy(12, 23);
        input(&opcion, sizeof(opcion));
        if (strcmp(opcion, "\n") == 0)
        {
            gotoxy(15, 22);
            textcolor(GREEN);
            cprintf("Presion le letra \"Q\" para salir");
            getch();
            continue;
        }
        eliminar_enter(&opcion);
        mayuscula(&opcion);
        if (strcmp(opcion, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            return;
        }
        else
        {
            continue;
        }
    }
}

/*Editamos los campos del producto*/
actualizar_producto_editar(void);
actualizar_producto_editar(void)
{
    char opcion[10];
    short int iterable, cantidad;
    short double precio;
    while (1)
    {
        borrar();

        gotoxy(24, 2);
        textcolor(WHITE);
        cprintf("Actualizar campos del producto");

        gotoxy(10, 4);
        textcolor(WHITE);
        cprintf("1. ");
        textcolor(GREEN);
        cprintf("Codigo del producto: %s", codigos_agregados[indice]);

        gotoxy(10, 6);
        textcolor(WHITE);
        cprintf("2. ");
        textcolor(GREEN);
        cprintf("Nombre del producto: %s", nombre_producto_agregados[indice]);

        gotoxy(10, 8);
        textcolor(WHITE);
        cprintf("3. ");
        textcolor(GREEN);
        cprintf("Cantidad de ingreso del producto: %d", cantidad_de_producto_agregados[indice]);

        gotoxy(10, 10);
        textcolor(WHITE);
        cprintf("4. ");
        textcolor(GREEN);
        cprintf("Precio del producto: %.2lf", precio_del_producto_agregados[indice]);

        gotoxy(10, 12);
        textcolor(WHITE);
        cprintf("5. ");
        textcolor(GREEN);
        cprintf("Categoria del producto: %s", categoria_producto_ingresado[indice]);

        textcolor(GREEN);
        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(10, 14);
        textcolor(CYAN);
        cprintf("Ingrese la opcion del producto a actualizar");
        gotoxy(12, 15);
        textcolor(GREEN);
        cprintf("                                                                         ");
        fflush(stdin);
        gotoxy(10, 15);
        textcolor(LIGHTGREEN);
        cprintf("> ");
        input(&opcion, sizeof(opcion));
        if (strcmp(opcion, "\n") == 0)
        {
            gotoxy(15, 22);
            textcolor(GREEN);
            cprintf("Ingrese correctamente el opcion del producto que quiere actualizar");
            getch();
            continue;
        }
        eliminar_enter(&opcion);
        mayuscula(&opcion);
        if (strcmp(opcion, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            break;
        }
        if (strcmp(opcion, "1") == 0)
        {
            while (1)
            {
                gotoxy(10, 4);
                textcolor(WHITE);
                cprintf("1. ");
                textcolor(GREEN);
                cprintf("Codigo del producto:                                              ");
                gotoxy(34, 4);
                input(&opcion, sizeof(opcion));
                if (strcmp(opcion, "\n") == 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Ingrese correctamente el codigo del producto");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                            ");
                    continue;
                }
                eliminar_enter(&opcion);
                mayuscula(&opcion);
                if (strcmp(opcion, "Q") == 0)
                {
                    /* Nos salimos del bucle*/
                    break;
                }
                ver_si_hay_caracter(&opcion);
                if (strcmp(opcion, "caracter") == 0)
                {
                    /*significa que el usuario ingreso caracteres*/
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Ingrese correctamente el codigo del producto");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                            ");
                    continue;
                }
                ver_largo(&opcion);
                if (strcmp(opcion, "codigo corto") == 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("El codigo del producto es muy corto");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                   ");
                    continue;
                }
                else
                {
                    /*Ver si el codigo se repite*/
                    for (iterable = 0; iterable < TAMANO; iterable++)
                    {
                        if (strcmp(opcion, codigos_agregados[iterable]) == 0)
                        {
                            strcpy(opcion, "repetido");
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    if (strcmp(opcion, "repetido") == 0)
                    {
                        gotoxy(15, 22);
                        textcolor(GREEN);
                        cprintf("El codigo que ingreso ya existe ingrese otro");
                        getch();
                        gotoxy(15, 22);
                        cprintf("                                            ");
                        continue;
                    }
                    else
                    {
                        strcpy(codigos_agregados[indice], opcion);
                        break;
                    }
                }
            }
            continue;
        }
        else if (strcmp(opcion, "2") == 0)
        {
            while (1)
            {
                gotoxy(10, 6);
                textcolor(WHITE);
                cprintf("2. ");
                textcolor(GREEN);
                cprintf("Nombre del producto:                                              ");

                gotoxy(34, 6);
                input(&opcion, sizeof(opcion));
                if (strcmp(opcion, "\n") == 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Ingrese correctamente el nombre del producto");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                            ");
                    continue;
                }
                eliminar_enter(&opcion);
                mayuscula(&opcion);
                if (strcmp(opcion, "Q") == 0)
                {
                    /* Nos salimos del bucle*/
                    break;
                }
                ver_si_hay_numero_y_signos(&opcion);
                if (strcmp(opcion, "caracter") == 0)
                {
                    /*significa que el usuario ingreso caracteres*/
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Ingrese correctamente el nombre del producto");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                            ");
                    continue;
                }
                ver_largo(&opcion);
                if (strcmp(opcion, "codigo corto") == 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("El nombre del producto es muy corto");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                   ");
                    continue;
                }
                else
                {
                    /*Ver si el codigo se repite*/
                    for (iterable = 0; iterable < TAMANO; iterable++)
                    {
                        if (strcmp(opcion, nombre_producto_agregados[iterable]) == 0)
                        {
                            strcpy(opcion, "repetido");
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    if (strcmp(opcion, "repetido") == 0)
                    {
                        gotoxy(11, 22);
                        textcolor(GREEN);
                        cprintf("El nombre del producto que ingreso ya existe ingrese otro");
                        getch();
                        gotoxy(11, 22);
                        cprintf("                                                          ");
                        continue;
                    }
                    else
                    {
                        strcpy(nombre_producto_agregados[indice], opcion);
                        break;
                    }
                }
            }
            continue;
        }
        else if (strcmp(opcion, "3") == 0)
        {
            while (1)
            {

                gotoxy(10, 8);
                textcolor(WHITE);
                cprintf("3. ");
                textcolor(GREEN);
                cprintf("Cantidad de ingreso del producto:                                              ");

                gotoxy(47, 8);
                input(&opcion, sizeof(opcion));
                if (strcmp(opcion, "\n") == 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Cantidad no valida recuerde ingresar numeros enteros");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                                      ");
                    continue;
                }
                eliminar_enter(&opcion);
                mayuscula(&opcion);
                if (strcmp(opcion, "Q") == 0)
                {
                    /* Nos salimos del bucle*/
                    break;
                }
                ver_si_hay_caracter(&opcion);
                if (strcmp(opcion, "caracter") == 0)
                {
                    /*significa que el usuario ingreso caracteres*/
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Cantidad no valida recuerde ingresar numeros enteros");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                                     ");
                    continue;
                }
                cantidad = atoi(opcion);
                if (cantidad <= 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("El numero que ingrese debe ser mayor que 0");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                           ");
                    continue;
                }
                else
                {
                    cantidad_de_producto_agregados[indice] = cantidad;

                    /*temporal*/
                    for (iterable = 0; iterable < contador_de_copia_cantidad_producto; iterable++)
                    {

                        if (strcmp(copia_de_nombre_producto[iterable], nombre_producto_agregados[indice]) == 0)
                        {

                            /*cantidad_de_producto_agregados[iterable_two] =*/
                            copia_de_cantidad_producto[iterable] = cantidad;
                            break;
                        }
                        else
                        {
                            continue;
                        }
                    }
                    break;
                }
            }
            continue;
        }
        else if (strcmp(opcion, "4") == 0)
        {
            while (1)
            {

                gotoxy(10, 10);
                textcolor(WHITE);
                cprintf("4. ");
                textcolor(GREEN);
                cprintf("Precio del producto:                                              ");

                /*$cantidad_de_producto_agregados*/
                gotoxy(34, 10);
                input(&opcion, sizeof(opcion));
                if (strcmp(opcion, "\n") == 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Cantidad no valida recuerde ingresar numeros flotantes");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                                         ");
                    continue;
                }
                eliminar_enter(&opcion);
                mayuscula(&opcion);
                if (strcmp(opcion, "Q") == 0)
                {
                    /* Nos salimos del bucle*/
                    break;
                }
                ver_si_hay_flotante(&opcion);
                if (strcmp(opcion, "caracter") == 0)
                {
                    /*significa que el usuario ingreso caracteres*/
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Cantidad no valida recuerde ingresar numeros flotantes");
                    getch();
                    gotoxy(15, 22);
                    cprintf("                                                         ");
                    continue;
                }
                else
                {
                    precio = atof(opcion); /*Para convertir cadena a double*/
                    if (precio >= 1)
                    {
                        precio_del_producto_agregados[indice] = precio;
                        break;
                    }
                    else
                    {
                        gotoxy(15, 22);
                        textcolor(GREEN);
                        cprintf("El numero que ingrese debe ser mayor que 0.0");
                        getch();
                        gotoxy(15, 22);
                        cprintf("                                             ");

                        continue;
                    }
                }
            }
            continue;
        }
        else if (strcmp(opcion, "5") == 0)
        {
            while (1)
            {
                borrar();
                gotoxy(19, 2);
                textcolor(WHITE);
                cprintf("Elija la categorias para el producto \"%s\"", nombre_producto_agregados[indice]);
                textcolor(GREEN);

                gotoxy(10, 4);
                textcolor(WHITE);
                cprintf("1. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[0]);

                gotoxy(10, 6);
                textcolor(WHITE);
                cprintf("2. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[1]);

                gotoxy(10, 8);
                textcolor(WHITE);
                cprintf("3. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[2]);

                gotoxy(10, 10);
                textcolor(WHITE);
                cprintf("4. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[3]);

                gotoxy(10, 12);
                textcolor(WHITE);
                cprintf("5. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[4]);

                gotoxy(10, 14);
                textcolor(WHITE);
                cprintf("6. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[5]);

                gotoxy(10, 16);
                textcolor(WHITE);
                cprintf("7. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[6]);

                gotoxy(10, 18);
                textcolor(WHITE);
                cprintf("8. ");
                textcolor(CYAN);
                cprintf("\"%s\"", categoria_producto[7]);

                gotoxy(2, 25);
                textcolor(LIGHTGREEN);
                cprintf("Presione la letra q para regresar al menu");

                gotoxy(10, 20);
                textcolor(CYAN);
                cprintf("Ingrese el numero de la categoria: ");
                gotoxy(45, 20);
                textcolor(GREEN);
                cprintf("                                               ");
                fflush(stdin);
                gotoxy(45, 20);
                input(&opcion, sizeof(opcion));
                if (strcmp(opcion, "\n") == 0)
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Ingrese el numero de la categoria correctamente");
                    getch();
                    continue;
                }
                eliminar_enter(&opcion);
                mayuscula(&opcion);
                if (strcmp(opcion, "Q") == 0)
                {
                    /* Nos salimos de la funcion*/
                    break;
                }
                if (strcmp(opcion, "1") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[0]);
                    break;
                }
                else if (strcmp(opcion, "2") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[1]);
                    break;
                }
                else if (strcmp(opcion, "3") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[2]);
                    break;
                }
                else if (strcmp(opcion, "4") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[3]);
                    break;
                }
                else if (strcmp(opcion, "5") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[4]);
                    break;
                }
                else if (strcmp(opcion, "6") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[5]);
                    break;
                }
                else if (strcmp(opcion, "7") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[6]);
                    break;
                }
                else if (strcmp(opcion, "8") == 0)
                {
                    strcpy(categoria_producto_ingresado[indice], categoria_producto[7]);
                    break;
                }
                else
                {
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Ingrese el numero de la categoria correctamente");
                    getch();
                    continue;
                }
            }
            continue;
        }
        else
        {
            gotoxy(15, 22);
            textcolor(GREEN);
            cprintf("Ingrese correctamente el opcion del producto que quiere actualizar");
            getch();
            continue;
        }
    }
}

/*opcion 2*/
void actualizar_producto(void);
void actualizar_producto(void)
{
    short int iterable;
    char campo[50];
    if (productos_existente == 0)
    {
        gotoxy(22, 21);
        textcolor(GREEN);
        cprintf("No hay productos en el inventario todavia");
        getch();
    }
    else
    {
        while (1)
        {
            borrar();

            gotoxy(24, 2);
            textcolor(WHITE);
            cprintf("Actualizar campos del producto");

            gotoxy(10, 8);
            textcolor(WHITE);
            cprintf("!. ");
            textcolor(GREEN);
            cprintf("Si no recuerda el nombre del producto ingrese \"1\"");
            gotoxy(13, 9);
            cprintf("para ver todos los productos del inventario");

            textcolor(GREEN);
            gotoxy(2, 25);
            textcolor(LIGHTGREEN);
            cprintf("Presione la letra q para regresar al menu");

            gotoxy(10, 4);
            textcolor(CYAN);
            cprintf("Ingrese el nombre del producto a actualizar");
            gotoxy(10, 5);
            textcolor(GREEN);
            cprintf("                                               ");
            fflush(stdin);
            gotoxy(10, 5);
            textcolor(LIGHTGREEN);
            cprintf("> ");
            input(&campo, sizeof(campo));
            if (strcmp(campo, "\n") == 0)
            {
                gotoxy(15, 22);
                textcolor(GREEN);
                cprintf("Ingrese correctamente el nombre del producto");
                getch();
                continue;
            }
            eliminar_enter(&campo);
            mayuscula(&campo);
            if (strcmp(campo, "Q") == 0)
            {
                /* Nos salimos de la funcion*/
                return;
            }
            if (strcmp(campo, "1") == 0)
            {
                ver_productos_inventario();
            }
            for (iterable = 0; iterable < contador_de_indices; iterable++)
            {

                if (strcmp(campo, nombre_producto_agregados[iterable]) == 0)
                {
                    /*eliminamos los campos*/
                    indice = iterable;
                    actualizar_producto_editar();
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    return;
}

/*opcion 3*/
void eliminar_producto(void);
void eliminar_producto(void)
{
    short int iterable;
    char opcion[50];
    if (productos_existente == 0)
    {
        gotoxy(22, 21);
        textcolor(GREEN);
        cprintf("No hay productos en el inventario todavia");
        getch();
    }
    else
    {
        while (1)
        {
            borrar();

            gotoxy(19, 2);
            textcolor(WHITE);
            cprintf("Eliminar productos del inventario");

            gotoxy(10, 8);
            textcolor(WHITE);
            cprintf("!. ");
            textcolor(GREEN);
            cprintf("Si no recuerda el nombre del producto ingrese \"1\"");
            gotoxy(13, 9);
            cprintf("para ver todos los productos del inventario");

            textcolor(GREEN);
            gotoxy(2, 25);
            textcolor(LIGHTGREEN);
            cprintf("Presione la letra q para regresar al menu");

            gotoxy(10, 4);
            textcolor(CYAN);
            cprintf("Ingrese el nombre del producto a eliminar");
            gotoxy(10, 5);
            textcolor(GREEN);
            cprintf("                                               ");
            if (productos_existente == 0)
            {
                gotoxy(19, 21);
                textcolor(GREEN);
                cprintf("No hay productos disponibles en el inventario");
                getch();
                return;
            }
            fflush(stdin);
            gotoxy(10, 5);
            textcolor(LIGHTGREEN);
            cprintf("> ");
            input(&opcion, sizeof(opcion));
            if (strcmp(opcion, "\n") == 0)
            {
                gotoxy(15, 22);
                textcolor(GREEN);
                cprintf("Ingrese correctamente el nombre del producto");
                getch();
                continue;
            }
            eliminar_enter(&opcion);
            mayuscula(&opcion);
            if (strcmp(opcion, "Q") == 0)
            {
                /* Nos salimos de la funcion*/
                return;
            }
            if (strcmp(opcion, "1") == 0)
            {
                ver_productos_inventario();
                continue;
            }

            for (iterable = 0; iterable < contador_de_indices; iterable++)
            {

                if (strcmp(opcion, nombre_producto_agregados[iterable]) == 0)
                {
                    /*eliminamos los campos*/
                    gotoxy(15, 22);
                    textcolor(GREEN);
                    cprintf("Producto \"%s\" ha sido eliminado del inventario", nombre_producto_agregados[iterable]);
                    getch();
                    strcpy(codigos_agregados[iterable], "\0");
                    strcpy(nombre_producto_agregados[iterable], "\0");

                    strcpy(categoria_producto_ingresado[iterable], "\0");
                    cantidad_de_producto_agregados[iterable] = -1;
                    precio_del_producto_agregados[iterable] = -1;
                    productos_existente--;
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (iterable == contador_de_indices)
            {
                gotoxy(15, 22);
                textcolor(GREEN);
                cprintf("Ingrese correctamente el nombre del producto");
                getch();
                continue;
            }
        }
    }
    return;
}

void ver_caracteristicas_del_producto(void);
void ver_caracteristicas_del_producto(void)
{
    char opcion[5];
    while (1)
    {
        borrar();

        gotoxy(19, 2);
        textcolor(WHITE);
        cprintf("Caracteristica del producto \"%s\"", nombre_producto_agregados[indice]);
        textcolor(GREEN);

        gotoxy(10, 4);
        textcolor(WHITE);
        cprintf("1. ");
        textcolor(GREEN);
        cprintf("Codigo del producto: %s", codigos_agregados[indice]);

        gotoxy(10, 6);
        textcolor(WHITE);
        cprintf("2. ");
        textcolor(GREEN);
        cprintf("Nombre del producto: %s", nombre_producto_agregados[indice]);

        gotoxy(10, 8);
        textcolor(WHITE);
        cprintf("3. ");
        textcolor(GREEN);
        cprintf("Cantidad de ingreso del producto: %d", cantidad_de_producto_agregados[indice]);

        gotoxy(10, 10);
        textcolor(WHITE);
        cprintf("4. ");
        textcolor(GREEN);
        cprintf("Precio del producto: %.2lf", precio_del_producto_agregados[indice]);

        gotoxy(10, 12);
        textcolor(WHITE);
        cprintf("5. ");
        textcolor(GREEN);
        cprintf("Categoria del producto: %s", categoria_producto_ingresado[indice]);

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(10, 23);
        textcolor(CYAN);
        cprintf("> ");
        gotoxy(12, 23);
        textcolor(GREEN);
        cprintf("                                                                               ");
        fflush(stdin);
        gotoxy(12, 23);
        input(&opcion, sizeof(opcion));
        if (strcmp(opcion, "\n") == 0)
        {
            gotoxy(15, 22);
            textcolor(GREEN);
            cprintf("Presion le letra \"Q\" para salir");
            getch();
            continue;
        }
        eliminar_enter(&opcion);
        mayuscula(&opcion);
        if (strcmp(opcion, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            return;
        }
        else
        {
            continue;
        }
    }
}
/*opcion 4*/
void buscar_producto(void);
void buscar_producto(void)
{
    short int iterable;
    char opcion[50];
    if (productos_existente == 0)
    {
        gotoxy(22, 21);
        textcolor(GREEN);
        cprintf("No hay productos en el inventario todavia");
        getch();
    }
    else
    {
        while (1)
        {
            borrar();

            gotoxy(19, 2);
            textcolor(WHITE);
            cprintf("Buscar productos en el inventario");

            gotoxy(10, 8);
            textcolor(WHITE);
            cprintf("!. ");
            textcolor(GREEN);
            cprintf("Si no recuerda el nombre del producto ingrese \"1\"");
            gotoxy(13, 9);
            cprintf("para ver todos los productos del inventario");

            textcolor(GREEN);
            gotoxy(2, 25);
            textcolor(LIGHTGREEN);
            cprintf("Presione la letra q para regresar al menu");

            gotoxy(10, 4);
            textcolor(CYAN);
            cprintf("Ingrese el nombre del producto a buscar");
            gotoxy(10, 5);
            textcolor(GREEN);
            cprintf("                                               ");
            fflush(stdin);
            gotoxy(10, 5);
            textcolor(LIGHTGREEN);
            cprintf("> ");
            input(&opcion, sizeof(opcion));
            if (strcmp(opcion, "\n") == 0)
            {
                gotoxy(15, 22);
                textcolor(GREEN);
                cprintf("Ingrese correctamente el nombre del producto");
                getch();
                continue;
            }
            eliminar_enter(&opcion);
            mayuscula(&opcion);
            if (strcmp(opcion, "Q") == 0)
            {
                /* Nos salimos de la funcion*/
                return;
            }
            if (strcmp(opcion, "1") == 0)
            {
                ver_productos_inventario();
                continue;
            }

            for (iterable = 0; iterable < contador_de_indices; iterable++)
            {

                if (strcmp(opcion, nombre_producto_agregados[iterable]) == 0)
                {
                    /*eliminamos los campos*/
                    indice = iterable;
                    ver_caracteristicas_del_producto();
                    break;
                }
                else
                {
                    continue;
                }
            }

            if (iterable == contador_de_indices)
            {
                gotoxy(15, 22);
                textcolor(GREEN);
                cprintf("Ingrese correctamente el nombre del producto");
                getch();
                continue;
            }
        }
    }
    return;
}

void realizar_venta_final(void);
void realizar_venta_final(void)
{
    char opcion[5], preguntar[5];
    short int iterable, iterable_two, cantidad, cantidad_two, contador;
    short double total, subtotal = 0, iva;
    char nombre[50];
    FILE *archivo;
    char nombre_archivo[50];
    while (1)
    {
        borrar();

        gotoxy(19, 2);
        textcolor(WHITE);
        cprintf("Caracteristica del producto \"%s\"", nombre_producto_agregados[indice]);
        textcolor(GREEN);

        gotoxy(10, 4);
        textcolor(WHITE);
        cprintf("1. ");
        textcolor(GREEN);
        cprintf("Codigo del producto: %s", codigos_agregados[indice]);

        gotoxy(10, 6);
        textcolor(WHITE);
        cprintf("2. ");
        textcolor(GREEN);
        cprintf("Nombre del producto: %s", nombre_producto_agregados[indice]);

        gotoxy(10, 8);
        textcolor(WHITE);
        cprintf("3. ");
        textcolor(GREEN);
        cprintf("Unidadades disponibles: %d", cantidad_de_producto_agregados[indice]);

        gotoxy(10, 10);
        textcolor(WHITE);
        cprintf("4. ");
        textcolor(GREEN);
        cprintf("Precio del producto: %.2lf", precio_del_producto_agregados[indice]);

        gotoxy(10, 12);
        textcolor(WHITE);
        cprintf("5. ");
        textcolor(GREEN);
        cprintf("Categoria del producto: %s", categoria_producto_ingresado[indice]);

        gotoxy(2, 25);
        textcolor(LIGHTGREEN);
        cprintf("Presione la letra q para regresar al menu");

        gotoxy(10, 22);
        cprintf("Ingrese la cantidad de productos de \"%s\" que desea comprar", nombre_producto_agregados[indice]);

        textcolor(CYAN);
        gotoxy(10, 23);
        textcolor(CYAN);
        cprintf("> ");
        gotoxy(12, 23);
        textcolor(GREEN);
        cprintf("                                                                               ");
        fflush(stdin);
        gotoxy(12, 23);
        input(&opcion, sizeof(opcion));
        if (strcmp(opcion, "\n") == 0)
        {
            gotoxy(11, 17);
            textcolor(CYAN);
            cprintf("Presion le letra \"Q\" para salir");
            getch();
            continue;
        }
        eliminar_enter(&opcion);
        mayuscula(&opcion);
        if (strcmp(opcion, "Q") == 0)
        {
            /* Nos salimos de la funcion*/
            return;
        }
        ver_si_hay_caracter(&opcion);
        if (strcmp(opcion, "caracter") == 0)
        {
            /*significa que el usuario ingreso caracteres*/
            gotoxy(11, 17);
            textcolor(CYAN);
            cprintf("Cantidad no valida recuerde ingresar numeros enteros");
            getch();
            continue;
        }
        else
        {
            cantidad = atoi(opcion);
            if (cantidad <= 0)
            {
                gotoxy(15, 13);
                textcolor(GREEN);
                cprintf("El numero que ingrese debe ser mayor que 0");
                getch();
                continue;
            }
            else
            {
                cantidad_two = cantidad_de_producto_agregados[indice];
                cantidad_two = cantidad_two - cantidad;
                if (cantidad_two < 0)
                {
                    gotoxy(11, 17);
                    textcolor(CYAN);
                    cprintf("La cantidad ingresada supera la cantidad de \"%s\" disponibles", nombre_producto_agregados[indice]);
                    getch();
                    continue;
                }
                else
                {
                    cantidad_de_producto_agregados[indice] = cantidad_two;
                    for (iterable_two = contador_de_carrito - 1; iterable_two < contador_de_carrito; iterable_two++)
                    {
                        strcpy(carrito_de_compra[iterable_two], nombre_producto_agregados[indice]);
                        unidades_compradas[iterable_two] = cantidad;
                    }
                    while (1)
                    {
                        textcolor(GREEN);
                        gotoxy(2, 25);
                        textcolor(LIGHTGREEN);
                        cprintf("Presione la letra q para regresar al menu");

                        borrar();
                        gotoxy(10, 2);
                        textcolor(CYAN);
                        cprintf("Quiere ingresar otro producto: (Si/No)");
                        textcolor(GREEN);
                        gotoxy(10, 3);
                        cprintf(">                                                                   ");
                        gotoxy(12, 3);
                        fflush(stdin);
                        input(&preguntar, sizeof(preguntar));
                        if (strcmp(preguntar, "\n") == 0)
                        {
                            gotoxy(10, 13);
                            textcolor(GREEN);
                            cprintf("Opcion no valida ingrese de nuevo su opcion");
                            getch();
                            continue;
                        }
                        eliminar_enter(&preguntar);
                        mayuscula(&preguntar);
                        if (strcmp(preguntar, "SI") == 0)
                        {
                            /* Nos salimos de la funcion*/
                            strcpy(verificar_copia, "SI");
                            iterable_two = 0;
                            for (iterable = 0; iterable < TAMANO; iterable++)
                            {
                                if (cantidad_de_producto_agregados[iterable] == 0)
                                {
                                    iterable_two++;
                                }
                                else
                                {
                                    continue;
                                }
                            }
                            if (iterable_two == TAMANO)
                            {
                                gotoxy(6, 13);
                                textcolor(GREEN);
                                cprintf("Ya no queda ninguna producto con unidades disponibles en el inventario");
                                getch();

                                while (1)
                                {
                                    gotoxy(10, 15);
                                    cprintf("Quiere continuar con la factura: (Si/No)");
                                    textcolor(GREEN);
                                    gotoxy(10, 16);
                                    cprintf(">                                                                   ");
                                    gotoxy(12, 16);
                                    fflush(stdin);
                                    input(&preguntar, sizeof(preguntar));
                                    if (strcmp(preguntar, "\n") == 0)
                                    {
                                        gotoxy(10, 18);
                                        textcolor(GREEN);
                                        cprintf("Opcion no valida ingrese de nuevo su opcion");
                                        getch();
                                        continue;
                                    }
                                    eliminar_enter(&preguntar);
                                    mayuscula(&preguntar);
                                    if (strcmp(preguntar, "SI") == 0)
                                    {
                                        break;
                                    }
                                    else if (strcmp(preguntar, "NO") == 0)
                                    {
                                        for (iterable = 0; iterable < contador_de_copia_cantidad_producto; iterable++)
                                        {
                                            for (iterable_two = 0; iterable_two < TAMANO; iterable_two++)
                                            {
                                                if (strcmp(copia_de_nombre_producto[iterable], nombre_producto_agregados[iterable_two]) == 0)
                                                {

                                                    cantidad_de_producto_agregados[iterable_two] = copia_de_cantidad_producto[iterable];
                                                    break;
                                                }
                                                else
                                                {
                                                    continue;
                                                }
                                            }
                                        }
                                        menu_principal();
                                    }
                                    else
                                    {

                                        gotoxy(10, 18);
                                        textcolor(GREEN);
                                        cprintf("Opcion no valida ingrese de nuevo su opcion");
                                        getch();

                                        gotoxy(12, 16);
                                        textcolor(GREEN);
                                        cprintf("                                                                               ");
                                        continue;
                                    }
                                }

                                break;
                            }
                            return;
                        }
                        else if (strcmp(preguntar, "NO") == 0)
                        {
                            /* Nos salimos de la funcion*/
                            break;
                        }
                        else
                        {
                            gotoxy(10, 13);
                            textcolor(GREEN);
                            cprintf("Opcion no valida ingrese de nuevo su opcion");
                            getch();
                            continue;
                        }
                    }

                    while (1)
                    {
                        textcolor(GREEN);
                        gotoxy(2, 25);
                        textcolor(LIGHTGREEN);
                        cprintf("Presione la letra q para regresar al menu");

                        borrar();
                        gotoxy(10, 2);
                        textcolor(CYAN);
                        cprintf("Para finalizar ingrese solo un nombre");
                        textcolor(GREEN);
                        gotoxy(10, 3);
                        cprintf(">                                                                   ");
                        gotoxy(12, 3);
                        fflush(stdin);
                        input(&nombre, sizeof(nombre));
                        if (strcmp(nombre, "\n") == 0)
                        {
                            gotoxy(10, 13);
                            textcolor(GREEN);
                            cprintf("Nombre del no valido recuerde ingresar solo un nombre");
                            getch();
                            continue;
                        }
                        eliminar_enter(&nombre);
                        mayuscula(&nombre);
                        ver_si_hay_numero_y_signos(&nombre);
                        if (strcmp(nombre, "caracter") == 0)
                        {
                            /*significa que el usuario ingreso caracteres*/
                            gotoxy(10, 13);
                            textcolor(GREEN);
                            cprintf("Nombre del no valido recuerde ingresar solo un nombre");
                            getch();
                            continue;
                        }
                        ver_largo(&nombre);
                        if (strcmp(nombre, "codigo corto") == 0)
                        {
                            gotoxy(10, 13);
                            textcolor(GREEN);
                            cprintf("El nombre es muy corto");
                            getch();
                            continue;
                        }
                        else
                        {

                            break;
                        }
                    }
                    numero_de_factura++;
                    sprintf(nombre_archivo, "C:\\TC20\\BIN\\Factura %d.txt", numero_de_factura);
                    archivo = fopen(nombre_archivo, "w");
                    if (archivo == NULL)
                    {
                        printf("/*NO hacemos nada no se pudo crear el archivo*/");
                        getch();
                        /*NO hacemos nada no se pudo crear el archivo*/
                    }
                    else
                    {

                        fprintf(archivo, "-------------------------------------------------------------------------------------------------------\n");
                        fprintf(archivo, "\t\t\t\tEmpresa xd\n");
                        fprintf(archivo, "\t\t\t\tNIC. 123456789\n");
                        fprintf(archivo, "\t\t\t\tCALLE 123  -  IES  -  55\n");
                        fprintf(archivo, "\t\t\t\tTELEFONO 77889650\n");
                        fprintf(archivo, "\t\t\t\tNUMERO DE FACTURA: N° %d\n", numero_de_factura);
                        fprintf(archivo, "-------------------------------------------------------------------------------------------------------\n");
                        for (iterable = 0; iterable < contador_de_carrito; iterable++)
                        {
                            for (iterable_two = 0; iterable_two < TAMANO; iterable_two++)
                            {
                                if (strcmp(carrito_de_compra[iterable], nombre_producto_agregados[iterable_two]) == 0)
                                {
                                    indice = iterable_two;
                                    break;
                                }
                            }
                            contador = iterable + 1;
                            fprintf(archivo, "%d. ", contador);
                            fprintf(archivo, "Nombre: %s/%s\t\tCantidad: %d\t\tValor: %.2lf\t\tSubtotal: %.2lf\t\n", carrito_de_compra[iterable], codigos_agregados[indice], unidades_compradas[iterable], precio_del_producto_agregados[indice], unidades_compradas[iterable] * precio_del_producto_agregados[indice]);
                            subtotal = subtotal + unidades_compradas[iterable] * precio_del_producto_agregados[indice];
                        }
                        fprintf(archivo, "-------------------------------------------------------------------------------------------------------\n");
                        fprintf(archivo, "Subtotal: %.2lf\n", subtotal);
                        iva = (double)0.15 * subtotal;
                        fprintf(archivo, "IVA 15%%: %.2lf\n", iva);
                        /*Para imprimir % se pone %%*/
                        total = subtotal + iva;
                        fprintf(archivo, "Total: %.2lf\n", total);
                        fprintf(archivo, "Numero de productos comprado: %d\n", contador_de_carrito);
                        fprintf(archivo, "Nombre cliente: \"%s\"\n", nombre);
                        fprintf(archivo, "Fecha: 29/11/2023\n");
                        fclose(archivo);
                        contador_de_carrito = 0;
                        gotoxy(20, 13);
                        textcolor(GREEN);
                        cprintf("La factura ya ha sido impresa");
                        getch();
                        menu_principal();
                    }

                    continue;
                }
            }
        }
    }
    return;
}
/*opcion 5*/
void realizar_venta(void);
void realizar_venta(void)
{
    short int iterable, iterable_two, indice_two;
    char opcion[50];
    strcpy(verificar_copia, "");
    contador_de_copia_cantidad_producto = 0;
    if (productos_existente == 0)
    {
        gotoxy(22, 21);
        textcolor(GREEN);
        cprintf("No hay productos en el inventario todavia");
        getch();
    }
    else
    {
        iterable_two = 0;
        for (iterable = 0; iterable < TAMANO; iterable++)
        {
            if (cantidad_de_producto_agregados[iterable] == 0)
            {
                iterable_two++;
            }
            else
            {
                continue;
            }
        }
        if (iterable_two == TAMANO)
        {
            gotoxy(6, 21);
            textcolor(GREEN);
            cprintf("Ya no queda ninguna producto con unidades disponibles en el inventario");
            getch();
            return;
        }

        while (1)
        {

            borrar();

            gotoxy(11, 2);
            textcolor(WHITE);
            cprintf("Buscar productos en el inventario para realizar venta");

            gotoxy(10, 8);
            textcolor(WHITE);
            cprintf("!. ");
            textcolor(GREEN);
            cprintf("Si no recuerda el nombre del producto ingrese \"1\"");
            gotoxy(13, 9);
            cprintf("para ver todos los productos del inventario");

            textcolor(GREEN);
            gotoxy(2, 25);
            textcolor(LIGHTGREEN);
            cprintf("Presione la letra q para regresar al menu");

            gotoxy(10, 4);
            textcolor(CYAN);
            cprintf("Ingrese el nombre del producto a comprar");
            gotoxy(10, 5);
            textcolor(GREEN);
            cprintf("                                               ");
            fflush(stdin);
            gotoxy(10, 5);
            textcolor(LIGHTGREEN);
            cprintf("> ");
            input(&opcion, sizeof(opcion));
            if (strcmp(opcion, "\n") == 0)
            {
                gotoxy(15, 22);
                textcolor(GREEN);
                cprintf("Ingrese correctamente el nombre del producto");
                getch();
                continue;
            }
            eliminar_enter(&opcion);
            mayuscula(&opcion);
            if (strcmp(opcion, "Q") == 0)
            {
                /* Nos salimos de la funcion*/
                contador_de_carrito = 0;
                if (strcmp(verificar_copia, "SI") == 0)
                {
                    strcpy(verificar_copia, "");
                    for (iterable = 0; iterable < contador_de_copia_cantidad_producto; iterable++)
                    {
                        for (iterable_two = 0; iterable_two < TAMANO; iterable_two++)
                        {
                            if (strcmp(copia_de_nombre_producto[iterable], nombre_producto_agregados[iterable_two]) == 0)
                            {

                                cantidad_de_producto_agregados[iterable_two] = copia_de_cantidad_producto[iterable];

                                break;
                            }
                            else
                            {
                                continue;
                            }
                        }
                    }
                }
                return;
            }
            if (strcmp(opcion, "1") == 0)
            {
                ver_productos_inventario();
                continue;
            }

            for (iterable = 0; iterable < contador_de_indices; iterable++)
            {

                if (strcmp(opcion, nombre_producto_agregados[iterable]) == 0)
                {
                    indice = iterable;
                    if (cantidad_de_producto_agregados[indice] == 0)
                    {
                        gotoxy(15, 22);
                        textcolor(GREEN);
                        cprintf("Las unidades del producto %s estan agotadas", nombre_producto_agregados[indice]);
                        getch();
                    }
                    else
                    {
                        contador_de_copia_cantidad_producto++;

                        for (iterable = contador_de_copia_cantidad_producto - 1; iterable < contador_de_copia_cantidad_producto; iterable++)
                        {
                            for (iterable_two = 0; iterable_two < TAMANO; iterable_two++)
                            {
                                if (strcmp(opcion, copia_de_nombre_producto[iterable_two]) == 0)
                                {
                                    indice_two = 1;
                                    break;
                                }
                                else
                                {
                                    continue;
                                }
                            }
                            if (indice_two == 1)
                            {
                                strcpy(copia_de_nombre_producto[iterable], opcion);
                                copia_de_cantidad_producto[iterable] = copia_de_cantidad_producto[iterable_two];
                            }
                            else
                            {
                                strcpy(copia_de_nombre_producto[iterable], opcion);
                                copia_de_cantidad_producto[iterable] = cantidad_de_producto_agregados[indice];
                            }
                        }

                        contador_de_carrito++;

                        realizar_venta_final();
                        indice_two = 0;
                    }

                    break;
                }
                else
                {
                    continue;
                }
            }

            if (iterable == contador_de_indices)
            {
                /*gotoxy(15, 22);
                textcolor(GREEN);
                cprintf("Ingrese correctamente el nombre del producto");
                getch();*/
                continue;
            }
        }
    }
    return;
}

menu_principal(void);
menu_principal(void)
{
    char opcion;
    borrar();
    while (1)
    {
        borrar();
        gotoxy(16, 5);
        textcolor(WHITE);
        cprintf("1. ");
        textcolor(CYAN);
        cprintf("Agregar Producto");

        gotoxy(16, 7);
        textcolor(WHITE);
        cprintf("2. ");
        textcolor(CYAN);
        cprintf("Actualizar Producto");

        gotoxy(16, 9);
        textcolor(WHITE);
        cprintf("3. ");
        textcolor(CYAN);
        cprintf("Eliminar producto");

        gotoxy(16, 11);
        textcolor(WHITE);
        cprintf("4. ");
        textcolor(CYAN);
        cprintf("Buscar Producto");

        gotoxy(16, 13);
        textcolor(WHITE);
        cprintf("5. ");
        textcolor(CYAN);
        cprintf("Realizar venta");

        gotoxy(16, 15);
        textcolor(WHITE);
        cprintf("6. ");
        textcolor(CYAN);
        cprintf("Salir");

        gotoxy(16, 17);
        textcolor(CYAN);
        cprintf("Ingrese un numero segun la accion que desea realizar");

        gotoxy(16, 19);
        textcolor(LIGHTGREEN);
        cprintf("> ");

        opcion = getch();

        textcolor(LIGHTGREEN);
        cprintf("%c", opcion);
        getch();

        switch (opcion)
        {
        case '1':
            agregar_producto();
            break;
        case '2':
            actualizar_producto();
            break;
        case '3':
            eliminar_producto();
            break;
        case '4':
            buscar_producto();
            break;
        case '5':
            realizar_venta();

            break;
        case '6':
            salir();
        default:
            gotoxy(13, 21);
            textcolor(GREEN);
            cprintf("Error Recuerde ingresar un dato dentro del rango del 1 al 6");
            getch();
            break;
        }
    }
    return;
}

void principal(void);
void principal(void)
{
    short int iterable;
    animacion();
    login();
    logo();
    inicio();
    for (iterable = 0; iterable < TAMANO; iterable++)
    {
        cantidad_de_producto_agregados[iterable] = 0;
    }
    borrar();
    /*Aqui va
    - el logo
    - la barra de carga
    - y el login
    y despues el programa sigue al menu principal
    */
    /*logo();
    inicio();
     */
    menu_principal();
    return;
}