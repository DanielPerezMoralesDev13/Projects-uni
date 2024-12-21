#include <graphics.h>
#include <mouse.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#include <ctype.h>

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGRAY 7
#define DARKGRAY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15

short int numero_de_intentos = 0;
short int driver = DETECT, mode = 0, color_repetido;

void numero_aleatorio_luces(short int *x);
void numero_aleatorio_luces(short int *x)
{

    while (1)
    {
        *x = rand();
        /*printf("Valor generado: %d\n", *x);*/
        if (*x >= 1 && *x <= 14 && *x != 2 && *x != 10 && *x != color_repetido)
        {
            color_repetido = *x;
            break;
        }
        else
        {
            continue;
        }
    }
}

void tronco(void);
void muneco_de_nieve(void);
void luces_navidenas(void);
void arbol(void);
void tronco(void)
{
    setfillstyle(2, BROWN);
    bar(165, getmaxy() - 100, 225, getmaxy());
}

void luces_navidenas(void)
{
    short int x;
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(80, 370, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(140, 370, 4, 4);

    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(180, 330, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(220, 370, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(260, 330, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(300, 370, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(110, 330, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(120, 290, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(170, 260, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(220, 290, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(260, 260, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(285, 290, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(135, 230, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(180, 230, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(230, 230, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(175, 200, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);

    fillellipse(215, 200, 4, 4);
    numero_aleatorio_luces(&x);
    setfillstyle(1, x);
    setcolor(x);
}

void arbol(void)
{
    /*0-12*/
    /*(x1, y1), (x2, y2) y (x3, y3)*/
    /*getmaxxy() = 479  |  getmaxx() = 639*/
    /*short int puntos[] = {175, 100, 20, 279, 330, 279};*/

    short int triangulo_final[] = {195, 150, 30, 379, 350, 379};

    short int triangulo_penultimo[] = {195, 150, 40, 320, 340, 320};

    short int triangulo_antepenultimo[] = {195, 150, 75, 241, 310, 241}; /*{195, 150, 65, 10, 320, 10};*/

    /*short int triangulo_arriba[] = {195, 150, 30, 261, 350, 261};*/

    setfillstyle(1, LIGHTGREEN);
    setcolor(LIGHTGREEN);
    fillpoly(3, triangulo_final);
    fillpoly(3, triangulo_penultimo);
    fillpoly(3, triangulo_antepenultimo);
}

void muneco_de_nieve()
{

    setfillstyle(SOLID_FILL, LIGHTBLUE);
    setcolor(LIGHTBLUE);
    bar(getmaxx() - 220, getmaxy() - 20, getmaxx() - 90, getmaxy()); /*Base*/

    bar(435, getmaxy() - 250, getmaxx() - 100, getmaxy() - 255); /*Base gorro*/

    bar(455, getmaxy() - 250, getmaxx() - 120, getmaxy() - 275); /*Gorro*/

    setfillstyle(SOLID_FILL, WHITE);
    setcolor(WHITE);
    fillellipse(485, getmaxy() - 100, 80, 80); /*Cuerpo panza*/
    fillellipse(485, getmaxy() - 200, 50, 50); /*Cuerpo loza*/

    /*ojos*/
    setfillstyle(SOLID_FILL, BLACK);
    setcolor(BLACK);
    fillellipse(460, getmaxy() - 220, 6, 6);

    fillellipse(490, getmaxy() - 220, 6, 6);

    /*int x = 200;
    int y = 200;
    int start_angle = 180;
    int end_angle = 360;
    int x_radius = 100;
    int y_radius = 100;*/

    setcolor(BLACK);
    ellipse(480, 290, 180, 360, 20, 20); /*sonrisa*/

    /*line*/
    setcolor(LIGHTGRAY);

    /*line(420, 360, 380, 320); /*brazo izquierdo*/

    /* line(550, 360, 590, 320);     /*brazo derecho*/
    line(420, 360, 380, 320); /*brazo izquierdo*/
    line(550, 360, 590, 320); /*brazo derecho*/
    /*dedos*/
    line(400, 338, 400, 315); /*dedo mano izquierdo superior*/
    line(400, 338, 380, 350); /*dedo mano izquierdo inferior*/

    line(570, 338, 570, 315); /*dedo mano derecho superior*/
    line(570, 338, 590, 350); /*dedo mano derecho inferior*/
}

void nieve(void);
void nieve(void)
{
    short int iterable = 0, iterable_two = 0;
    short int nieve_1 = 0, nieve_2 = 0, nieve_3 = 0, nieve_4 = 0, nieve_5 = 0, nieve_6 = 0, nieve_7 = 0, nieve_8 = 0, nieve_9 = 0, nieve_10 = 0, nieve_11 = 0, nieve_12 = 0, nieve_13 = 0, nieve_14 = 0, nieve_15 = 0, nieve_16 = 0, nieve_17 = 0, nieve_18 = 0, nieve_19 = 0, nieve_20 = 0, nieve_21 = 0, nieve_22 = 0, nieve_23 = 0, nieve_24 = 0, nieve_25 = 0, nieve_26 = 0, nieve_27 = 0;

    initgraph(&driver, &mode, "C:\\TC20\\BIN");
    cleardevice();

    /*
    ellipse(300,300,50,0,50,50);
    setcolor(WHITE);*/

    /*getmaxy()*/
    tronco();
    arbol();

    muneco_de_nieve();
    luces_navidenas();

    do
    {
        /*cleardevice();*/
        if (iterable == getmaxy() - 100)
        {
            tronco();
        }
        setfillstyle(SOLID_FILL, CYAN);
        setcolor(WHITE);
        /*repiten direccion*/
        if (iterable >= 45)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(60, nieve_9 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(60, nieve_9, 4, 4);
            nieve_9++;
            arbol();
        }
        if (iterable >= 70)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(90, nieve_10 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(90, nieve_10, 4, 4);
            nieve_10++;
            arbol();
        }
        if (iterable >= 80)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(121, nieve_11 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(121, nieve_11, 4, 4);
            nieve_11++;
            arbol();
        }
        if (iterable >= 110)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(149, nieve_12 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(149, nieve_12, 4, 4);
            nieve_12++;
            arbol();
        }
        if (iterable >= 135)
        {
            arbol();

            if (nieve_13 <= 165)
            {
                setfillstyle(SOLID_FILL, BLACK);
                setcolor(BLACK);
                fillellipse(180, nieve_13 - 1, 4, 4);

                setfillstyle(SOLID_FILL, CYAN);
                setcolor(WHITE);

                fillellipse(180, nieve_13, 4, 4);
            }

            nieve_13++;
            arbol();
        }
        if (iterable >= 150)
        {
            arbol();

            if (nieve_14 <= 165)
            {
                setfillstyle(SOLID_FILL, BLACK);
                setcolor(BLACK);
                fillellipse(211, nieve_14 - 1, 4, 4);

                setfillstyle(SOLID_FILL, CYAN);
                setcolor(WHITE);
                fillellipse(211, nieve_14, 4, 4);
            }

            nieve_14++;
            arbol();
        }
        if (iterable >= 160)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(244, nieve_15 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(244, nieve_15, 4, 4);
            nieve_15++;
            arbol();
        }
        if (iterable >= 180)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(274, nieve_16 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(274, nieve_16, 4, 4);
            nieve_16++;
            arbol();
        }
        if (iterable >= 205)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(301, nieve_17 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(301, nieve_17, 4, 4);
            nieve_17++;
            arbol();
        }
        if (iterable >= 225)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(332, nieve_18 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(332, nieve_18, 4, 4);
            nieve_18++;
            arbol();
        }
        if (iterable >= 257)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(368, nieve_19 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(368, nieve_19, 4, 4);
            nieve_19++;
            arbol();
        }
        if (iterable >= 285)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(393, nieve_20 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(393, nieve_20, 4, 4);
            nieve_20++;
            arbol();
        }
        if (iterable >= 315)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(425, nieve_21 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(425, nieve_21, 4, 4);
            nieve_21++;
            arbol();
        }

        if (iterable >= 325)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(455, nieve_22 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(455, nieve_22, 4, 4);
            nieve_22++;
            arbol();
        }

        if (iterable >= 330)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(475, nieve_23 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(475, nieve_23, 4, 4);
            nieve_23++;
            arbol();
        }

        if (iterable >= 345)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(500, nieve_24 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(500, nieve_24, 4, 4);
            nieve_24++;
            arbol();
        }

        if (iterable >= 365)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(540, nieve_25 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(540, nieve_25, 4, 4);
            nieve_25++;
            arbol();
        }

        if (iterable >= 375)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(570, nieve_26 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(570, nieve_26, 4, 4);
            nieve_26++;
            arbol();
        }

        if (iterable >= 395)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(590, nieve_27 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(590, nieve_27, 4, 4);
            nieve_27++;
            arbol();
        }

        /*no repiten direccion*/
        if (iterable >= 30)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(100, nieve_1 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);

            fillellipse(100, nieve_1, 4, 4);
            arbol();

            nieve_1++;
        }
        if (iterable >= 50)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(150, nieve_2 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);

            fillellipse(150, nieve_2, 4, 4);
            arbol();

            nieve_2++;
        }
        if (iterable >= 80)
        {
            arbol();

            if (nieve_3 <= 165)
            {
                setfillstyle(SOLID_FILL, BLACK);
                setcolor(BLACK);
                fillellipse(200, nieve_3 - 1, 4, 4);

                setfillstyle(SOLID_FILL, CYAN);
                setcolor(WHITE);

                fillellipse(200, nieve_3, 4, 4);
                arbol();
            }

            nieve_3++;
        }
        if (iterable >= 110)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(250, nieve_4 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(250, nieve_4, 4, 4);

            nieve_4++;
            arbol();
        }
        if (iterable >= 140)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(300, nieve_5 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);
            fillellipse(300, nieve_5, 4, 4);
            nieve_5++;
            arbol();
        }
        if (iterable >= 170)
        {
            arbol();

            /*setfillstyle(SOLID_FILL, RED);
            setcolor(WHITE);*/

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(350, nieve_6 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);

            setcolor(WHITE);
            fillellipse(350, nieve_6, 4, 4);
            arbol();

            nieve_6++;
        }
        if (iterable >= 200)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(400, nieve_7 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);

            fillellipse(400, nieve_7, 4, 4);
            arbol();

            nieve_7++;
        }
        if (iterable >= 230)
        {
            arbol();

            setfillstyle(SOLID_FILL, BLACK);
            setcolor(BLACK);
            fillellipse(450, nieve_8 - 1, 4, 4);

            setfillstyle(SOLID_FILL, CYAN);
            setcolor(WHITE);

            fillellipse(450, nieve_8, 4, 4);
            arbol();

            nieve_8++;
        }

        /*Borrar la nieve*/
        setfillstyle(SOLID_FILL, BLACK);
        setcolor(BLACK);
        fillellipse(50, iterable_two - 1, 4, 4);
        arbol();

        setfillstyle(SOLID_FILL, CYAN);
        setcolor(WHITE);
        /*setfillstyle(SOLID_FILL, RED);*/
        /*bar(0, 0, getmaxx(), getmaxy());*/

        fillellipse(50, iterable_two, 4, 4); /*fillellipse(50, iterable_two, 4, 4);*/

        arbol();

        muneco_de_nieve();

        luces_navidenas();

        iterable_two++;
        iterable++;

        if (iterable_two > getmaxy() + 10) /*250*/
        {
            iterable_two = 0;
        }

        if (nieve_1 > getmaxy() + 10) /*198*/
        {
            nieve_1 = 0;
        }
        if (nieve_2 > getmaxy() + 10) /*198*/
        {
            nieve_2 = 0;
        }
        if (nieve_3 > getmaxy() + 10) /*198*/
        {
            nieve_3 = 0;
        }
        if (nieve_4 > getmaxy() + 10) /*198*/
        {
            nieve_4 = 0;
        }
        if (nieve_5 > getmaxy() + 10) /*198*/
        {
            nieve_5 = 0;
        }
        if (nieve_6 > getmaxy() + 10) /*198*/
        {
            nieve_6 = 0;
        }
        if (nieve_7 > getmaxy() + 10) /*198*/
        {
            nieve_7 = 0;
        }
        if (nieve_8 > getmaxy() + 10) /*198*/
        {
            nieve_8 = 0;
        }
        if (nieve_9 > getmaxy() + 10) /*198*/
        {
            nieve_9 = 0;
        }
        if (nieve_10 > getmaxy() + 10) /*198*/
        {
            nieve_10 = 0;
        }

        if (nieve_11 > getmaxy() + 10) /*198*/
        {
            nieve_11 = 0;
        }
        if (nieve_12 > getmaxy() + 10) /*198*/
        {
            nieve_12 = 0;
        }
        if (nieve_13 > getmaxy() + 10) /*198*/
        {
            nieve_13 = 0;
        }
        if (nieve_14 > getmaxy() + 10) /*198*/
        {
            nieve_14 = 0;
        }
        if (nieve_15 > getmaxy() + 10) /*198*/
        {
            nieve_15 = 0;
        }
        if (nieve_16 > getmaxy() + 10) /*198*/
        {
            nieve_16 = 0;
        }
        if (nieve_17 > getmaxy() + 10) /*198*/
        {
            nieve_17 = 0;
        }
        if (nieve_18 >= getmaxy() + 10)
        {
            nieve_18 = 0;
        }
        if (nieve_19 >= getmaxy() + 10)
        {
            nieve_19 = 0;
        }
        if (nieve_20 >= getmaxy() + 10)
        {
            nieve_20 = 0;
        }
        if (nieve_21 >= getmaxy() + 10)
        {
            nieve_21 = 0;
        }

        if (nieve_22 >= getmaxy() + 10)
        {
            nieve_22 = 0;
        }
        if (nieve_23 >= getmaxy() + 10)
        {
            nieve_23 = 0;
        }
        if (nieve_24 >= getmaxy() + 10)
        {
            nieve_24 = 0;
        }
        if (nieve_25 >= getmaxy() + 10)
        {
            nieve_25 = 0;
        }
        if (nieve_26 >= getmaxy() + 10)
        {
            nieve_26 = 0;
        }
        if (nieve_27 >= getmaxy() + 10)
        {
            nieve_27 = 0;
        }

    } while (!kbhit());

    getch();
}

void borrar_graficos(void);
void borrar_graficos(void)
{
    cleardevice();
}

void salida(void);
void salida(void)
{
    system("cls");
    gotoxy(28, 14);
    textcolor(GREEN);
    cprintf("El programa ha finalizado");
    gotoxy(31, 15);
    textcolor(GREEN);
    cprintf("Gracias por usarlo");
    getch();
    exit(0);
}
struct iniciar_session
{
    char user;
    char contrasena;
    size_t len;
};

void login(void);
void login(void)
{
    char usuario[20] = "";
    char password[20] = "";
    char password_no_ver[20] = "";
    short int contador = 0, iterable;
    short int verificacion; /*verifica si ver contrasena esta presionado
     0 = False presionado no ver contrasena
     1 = True presionado ver contrasena*/

    struct iniciar_session datos;

    initgraph(&driver, &mode, "C:\\TC20\\BIN");
    while (1)
    {
        if (numero_de_intentos == 3)
        {
            salida();
        }
        setbkcolor(BLACK);
        msituar(1, 200, 100); /*situar el mouse al iniciar el programa*/

        borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
         se borran, y la ventana queda en blanco.
         */

        /*
        WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
        INTERLEAVE_FILL Relleno con un patrón de puntos.
        XHATCH_FILL Relleno con líneas cruzadas.
        BKSLASH_FILL Relleno con líneas diagonales.
        HATCH_FILL Relleno con líneas horizontales.
        SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

        */
        setfillstyle(SOLID_FILL, LIGHTBLUE);

        bar(210, 350, 330, 400);

        setfillstyle(SOLID_FILL, BLACK); /*jaja*/
        bar(260, 170, 460, 200);

        /*Coordenada x del punto superior izquierdo: 210
        Coordenada y del punto superior izquierdo: 350
        Coordenada x del punto inferior derecho: 330
        Coordenada y del punto inferior derecho: 400
        */

        /*Borde del cuadoro*/
        setcolor(BROWN);
        line(210, 350, 210, 400);
        setcolor(RED);
        line(210, 350, 330, 350);
        line(330, 350, 330, 400);
        line(210, 400, 330, 400);

        setcolor(WHITE);
        /*            Fuente          texto horizontal    tamaño -> 5*/
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
        /*         X   Y  "string"*/
        outtextxy(250, 375, "Login");

        /*rectangulo de user*/
        setcolor(CYAN);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
        outtextxy(120, 90, "User: ");
        setcolor(WHITE);
        line(260, 90, 460, 90);   /* --- superior*/
        line(260, 90, 260, 125);  /*| izquierdo*/
        line(460, 90, 460, 125);  /*| derecho*/
        line(260, 123, 460, 123); /* --- inferior*/

        /*rectangulo de contrasena*/
        setcolor(CYAN);
        outtextxy(120, 170, "Contrasena: ");
        setcolor(WHITE);
        line(260, 170, 460, 170); /* --- superior*/
        line(260, 170, 260, 200); /*| izquierdo*/
        line(460, 170, 460, 200); /*| derecho*/
        line(260, 200, 460, 200); /* --- inferior*/

        /*cuadro de caracter ver contrasena*/
        setfillstyle(SOLID_FILL, BLACK);

        setfillstyle(SOLID_FILL, BLACK);
        /*cuadro de caracter no ver contrasena*/
        bar(310, 230, 340, 260);
        line(310, 230, 340, 230); /* --- superior*/
        line(310, 230, 310, 260); /*| izquierdo*/
        line(340, 230, 340, 260); /*| derecho*/
        line(310, 260, 340, 260); /* --- inferior*/

        bar(120, 230, 150, 260);
        line(120, 230, 150, 230); /* --- superior*/
        line(120, 230, 120, 260); /*| izquierdo*/
        line(150, 230, 150, 260); /*| derecho*/
        line(120, 260, 150, 260); /* --- inferior*/

        setcolor(LIGHTBLUE);
        outtextxy(170, 240, "Ver contrasena");
        setcolor(LIGHTBLUE);
        outtextxy(360, 240, "No ver contrasena");

        while (1)
        {
            setcolor(LIGHTGREEN);
            outtextxy(100, 280, "Ingrese su usuario minimo tres caracteres");
            setcolor(LIGHTGREEN);
            outtextxy(270, 110, usuario);
            datos.user = getch();

            if (contador < 0)
            {
                contador = 0;
            }

            if (datos.user >= '0' && datos.user <= '9')
            {
                continue;
            }
            else
            {
                if (datos.user == '!' || datos.user == '\"' || datos.user == '#' || datos.user == '$' || datos.user == '%' || datos.user == '&' || datos.user == '\'' || datos.user == '(' || datos.user == ')' || datos.user == '*' || datos.user == '+' || datos.user == ',' || datos.user == '-' || datos.user == '.' || datos.user == '/' || datos.user == ':' || datos.user == ';' || datos.user == '<' || datos.user == '=' || datos.user == '>' || datos.user == '?' || datos.user == '@' || datos.user == '[' || datos.user == '\\' || datos.user == ']' || datos.user == '^' || datos.user == '_' || datos.user == '`' || datos.user == '{' || datos.user == '|' || datos.user == '}' || datos.user == '~' || datos.user == '\t' || datos.user == ' ')
                {
                    continue;
                }
                if (datos.user == '\b' && contador > 0)
                {
                    usuario[contador - 1] = '\0';
                    contador--;
                    msituar(1, 200, 100); /*situar el mouse al iniciar el programa*/

                    borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
                     se borran, y la ventana queda en blanco.
                     */

                    /*
                    WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
                    INTERLEAVE_FILL Relleno con un patrón de puntos.
                    XHATCH_FILL Relleno con líneas cruzadas.
                    BKSLASH_FILL Relleno con líneas diagonales.
                    HATCH_FILL Relleno con líneas horizontales.
                    SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

                    */
                    setfillstyle(SOLID_FILL, LIGHTBLUE);

                    bar(210, 350, 330, 400);
                    /*Coordenada x del punto superior izquierdo: 210
                    Coordenada y del punto superior izquierdo: 350
                    Coordenada x del punto inferior derecho: 330
                    Coordenada y del punto inferior derecho: 400
                    */

                    /*Borde del cuadoro*/
                    setcolor(BROWN);
                    line(210, 350, 210, 400);
                    setcolor(RED);
                    line(210, 350, 330, 350);
                    line(330, 350, 330, 400);
                    line(210, 400, 330, 400);

                    setcolor(WHITE);
                    /*            Fuente          texto horizontal    tamaño -> 5*/
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
                    /*         X   Y  "string"*/
                    outtextxy(250, 375, "Login");

                    /*rectangulo de user*/
                    setcolor(CYAN);
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
                    outtextxy(120, 90, "User: ");
                    setcolor(WHITE);
                    line(260, 90, 460, 90);   /* --- superior*/
                    line(260, 90, 260, 125);  /*| izquierdo*/
                    line(460, 90, 460, 125);  /*| derecho*/
                    line(260, 123, 460, 123); /* --- inferior*/

                    /*rectangulo de contrasena*/
                    setcolor(CYAN);
                    outtextxy(120, 170, "Contrasena: ");
                    setcolor(WHITE);
                    line(260, 170, 460, 170); /* --- superior*/
                    line(260, 170, 260, 200); /*| izquierdo*/
                    line(460, 170, 460, 200); /*| derecho*/
                    line(260, 200, 460, 200); /* --- inferior*/

                    /*cuadro de caracter ver contrasena*/
                    setfillstyle(SOLID_FILL, BLACK);

                    setfillstyle(SOLID_FILL, BLACK);
                    /*cuadro de caracter no ver contrasena*/
                    bar(310, 230, 340, 260);
                    line(310, 230, 340, 230); /* --- superior*/
                    line(310, 230, 310, 260); /*| izquierdo*/
                    line(340, 230, 340, 260); /*| derecho*/
                    line(310, 260, 340, 260); /* --- inferior*/

                    bar(120, 230, 150, 260);
                    line(120, 230, 150, 230); /* --- superior*/
                    line(120, 230, 120, 260); /*| izquierdo*/
                    line(150, 230, 150, 260); /*| derecho*/
                    line(120, 260, 150, 260); /* --- inferior*/

                    setcolor(LIGHTBLUE);
                    outtextxy(170, 240, "Ver contrasena");
                    setcolor(LIGHTBLUE);
                    outtextxy(360, 240, "No ver contrasena");

                    setcolor(LIGHTGREEN);
                    outtextxy(270, 110, usuario);
                }
                else if (contador < 23 && datos.user != '\r')
                {
                    /*'\r' (retorno de carro) cuando solo capturas un caracter y
                    presionas enter no se guarda \n se guarda \r sepa dios porque*/
                    usuario[contador] = datos.user; /*concatenamos usando contador como indice*/
                    usuario[contador + 1] = '\0';   /*agregamos el caracter nulo para final de cadena siempre*/
                    contador++;
                    setcolor(LIGHTGREEN);
                    outtextxy(270, 110, usuario);
                }
            }

            if (contador > 2 && datos.user == '\r')
            {

                break;
            }
        }

        datos.len = strlen(usuario);
        for (iterable = 0; iterable < datos.len; iterable++)
        {
            usuario[iterable] = toupper(usuario[iterable]);
        }
        contador = 0;
        msituar(1, 200, 100); /*situar el mouse al iniciar el programa*/

        borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
         se borran, y la ventana queda en blanco.
         */

        /*
        WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
        INTERLEAVE_FILL Relleno con un patrón de puntos.
        XHATCH_FILL Relleno con líneas cruzadas.
        BKSLASH_FILL Relleno con líneas diagonales.
        HATCH_FILL Relleno con líneas horizontales.
        SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

        */

        setfillstyle(SOLID_FILL, LIGHTBLUE);

        bar(210, 350, 330, 400);
        /*Coordenada x del punto superior izquierdo: 210
        Coordenada y del punto superior izquierdo: 350
        Coordenada x del punto inferior derecho: 330
        Coordenada y del punto inferior derecho: 400
        */

        /*Borde del cuadoro*/
        setcolor(BROWN);
        line(210, 350, 210, 400);
        setcolor(RED);
        line(210, 350, 330, 350);
        line(330, 350, 330, 400);
        line(210, 400, 330, 400);

        setcolor(WHITE);
        /*            Fuente          texto horizontal    tamaño -> 5*/
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
        /*         X   Y  "string"*/
        outtextxy(250, 375, "Login");

        /*rectangulo de user*/
        setcolor(CYAN);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
        outtextxy(120, 90, "User: ");
        setcolor(LIGHTGREEN);
        outtextxy(270, 110, usuario);
        setcolor(WHITE);
        line(260, 90, 460, 90);   /* --- superior*/
        line(260, 90, 260, 125);  /*| izquierdo*/
        line(460, 90, 460, 125);  /*| derecho*/
        line(260, 123, 460, 123); /* --- inferior*/

        /*rectangulo de contrasena*/
        setcolor(CYAN);
        outtextxy(120, 170, "Contrasena: ");
        setcolor(WHITE);
        line(260, 170, 460, 170); /* --- superior*/
        line(260, 170, 260, 200); /*| izquierdo*/
        line(460, 170, 460, 200); /*| derecho*/
        line(260, 200, 460, 200); /* --- inferior*/

        /*cuadro de caracter ver contrasena*/
        setfillstyle(SOLID_FILL, BLACK);

        setfillstyle(SOLID_FILL, BLACK);
        /*cuadro de caracter no ver contrasena*/
        bar(310, 230, 340, 260);
        line(310, 230, 340, 230); /* --- superior*/
        line(310, 230, 310, 260); /*| izquierdo*/
        line(340, 230, 340, 260); /*| derecho*/
        line(310, 260, 340, 260); /* --- inferior*/

        bar(120, 230, 150, 260);
        line(120, 230, 150, 230); /* --- superior*/
        line(120, 230, 120, 260); /*| izquierdo*/
        line(150, 230, 150, 260); /*| derecho*/
        line(120, 260, 150, 260); /* --- inferior*/

        setcolor(LIGHTBLUE);
        outtextxy(170, 240, "Ver contrasena");
        setcolor(LIGHTBLUE);
        outtextxy(360, 240, "No ver contrasena");

        setcolor(LIGHTGREEN);
        outtextxy(100, 280, "Seleccione si desea ver o no ver su contrasena");

        while (1)
        {
            mver();
            if (minlimit(1, 120, 230, 150, 260) == 1 && mclick() == 1)
            {
                /*pintamos x de presionado*/

                line(120, 260, 150, 230); /* / */
                line(120, 230, 150, 260); /* \ */
                verificacion = 1;         /*boton ver contrasena presionado*/
                break;
            }
            if (minlimit(1, 310, 230, 340, 260) == 1 && mclick() == 1)
            {
                /*pintamos x de presionado*/

                line(310, 260, 340, 230); /* / */
                line(310, 230, 340, 260); /* \ */
                verificacion = 0;         /*boton no ver contrasena presionado*/
                break;
            }
            else
            {
                continue;
            }
        }

        borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
         se borran, y la ventana queda en blanco.
         */

        /*
        WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
        INTERLEAVE_FILL Relleno con un patrón de puntos.
        XHATCH_FILL Relleno con líneas cruzadas.
        BKSLASH_FILL Relleno con líneas diagonales.
        HATCH_FILL Relleno con líneas horizontales.
        SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

        */

        setfillstyle(SOLID_FILL, LIGHTBLUE);

        bar(210, 350, 330, 400);
        /*Coordenada x del punto superior izquierdo: 210
        Coordenada y del punto superior izquierdo: 350
        Coordenada x del punto inferior derecho: 330
        Coordenada y del punto inferior derecho: 400
        */

        /*Borde del cuadoro*/
        setcolor(BROWN);
        line(210, 350, 210, 400);
        setcolor(RED);
        line(210, 350, 330, 350);
        line(330, 350, 330, 400);
        line(210, 400, 330, 400);

        setcolor(WHITE);
        /*            Fuente          texto horizontal    tamaño -> 5*/
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
        /*         X   Y  "string"*/
        outtextxy(250, 375, "Login");

        /*rectangulo de user*/
        setcolor(CYAN);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
        outtextxy(120, 90, "User: ");
        setcolor(LIGHTGREEN);
        outtextxy(270, 110, usuario);
        setcolor(WHITE);
        line(260, 90, 460, 90);   /* --- superior*/
        line(260, 90, 260, 125);  /*| izquierdo*/
        line(460, 90, 460, 125);  /*| derecho*/
        line(260, 123, 460, 123); /* --- inferior*/

        /*rectangulo de contrasena*/
        setcolor(CYAN);
        outtextxy(120, 170, "Contrasena: ");
        setcolor(WHITE);
        line(260, 170, 460, 170); /* --- superior*/
        line(260, 170, 260, 200); /*| izquierdo*/
        line(460, 170, 460, 200); /*| derecho*/
        line(260, 200, 460, 200); /* --- inferior*/

        /*cuadro de caracter ver contrasena*/
        setfillstyle(SOLID_FILL, BLACK);

        setfillstyle(SOLID_FILL, BLACK);
        /*cuadro de caracter no ver contrasena*/
        bar(310, 230, 340, 260);
        line(310, 230, 340, 230); /* --- superior*/
        line(310, 230, 310, 260); /*| izquierdo*/
        line(340, 230, 340, 260); /*| derecho*/
        line(310, 260, 340, 260); /* --- inferior*/

        bar(120, 230, 150, 260);
        line(120, 230, 150, 230); /* --- superior*/
        line(120, 230, 120, 260); /*| izquierdo*/
        line(150, 230, 150, 260); /*| derecho*/
        line(120, 260, 150, 260); /* --- inferior*/

        setcolor(LIGHTBLUE);
        outtextxy(170, 240, "Ver contrasena");
        setcolor(LIGHTBLUE);
        outtextxy(360, 240, "No ver contrasena");

        while (1)
        {
            if (verificacion == 1)
            {
                setcolor(LIGHTGREEN);
                line(120, 260, 150, 230); /* / */
                line(120, 230, 150, 260); /* \ */
            }
            else
            {
                setcolor(LIGHTGREEN);
                line(310, 260, 340, 230); /* / */
                line(310, 230, 340, 260); /* \ */
            }
            setcolor(LIGHTGREEN);
            outtextxy(100, 280, "Ingrese su contrasena minimo tres caracteres");
            setcolor(LIGHTGREEN);

            if (verificacion == 1)
            {
                outtextxy(270, 190, password);
            }
            else
            {
                outtextxy(270, 190, password_no_ver);
            }

            datos.contrasena = getch();

            if (contador < 0)
            {
                contador = 0;
            }
            else
            {
                if (datos.contrasena == '!' || datos.contrasena == '\"' || datos.contrasena == '#' || datos.contrasena == '$' || datos.contrasena == '%' || datos.contrasena == '&' || datos.contrasena == '\'' || datos.contrasena == '(' || datos.contrasena == ')' || datos.contrasena == '*' || datos.contrasena == '+' || datos.contrasena == ',' || datos.contrasena == '-' || datos.contrasena == '.' || datos.contrasena == '/' || datos.contrasena == ':' || datos.contrasena == ';' || datos.contrasena == '<' || datos.contrasena == '=' || datos.contrasena == '>' || datos.user == '?' || datos.user == '@' || datos.contrasena == '[' || datos.contrasena == '\\' || datos.contrasena == ']' || datos.contrasena == '^' || datos.user == '_' || datos.contrasena == '`' || datos.contrasena == '{' || datos.contrasena == '|' || datos.contrasena == '}' || datos.contrasena == '~' || datos.contrasena == '\t' || datos.contrasena == ' ')
                {
                    continue;
                }
                if (datos.contrasena == '\b' && contador > 0)
                {
                    password[contador - 1] = '\0';
                    password_no_ver[contador - 1] = '\0';
                    contador--;
                    msituar(1, 200, 100); /*situar el mouse al iniciar el programa*/

                    borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
                     se borran, y la ventana queda en blanco.
                     */

                    /*
                    WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
                    INTERLEAVE_FILL Relleno con un patrón de puntos.
                    XHATCH_FILL Relleno con líneas cruzadas.
                    BKSLASH_FILL Relleno con líneas diagonales.
                    HATCH_FILL Relleno con líneas horizontales.
                    SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

                    */
                    setfillstyle(SOLID_FILL, LIGHTBLUE);

                    bar(210, 350, 330, 400);
                    /*Coordenada x del punto superior izquierdo: 210
                    Coordenada y del punto superior izquierdo: 350
                    Coordenada x del punto inferior derecho: 330
                    Coordenada y del punto inferior derecho: 400
                    */

                    /*Borde del cuadoro*/
                    setcolor(BROWN);
                    line(210, 350, 210, 400);
                    setcolor(RED);
                    line(210, 350, 330, 350);
                    line(330, 350, 330, 400);
                    line(210, 400, 330, 400);

                    setcolor(WHITE);
                    /*            Fuente          texto horizontal    tamaño -> 5*/
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
                    /*         X   Y  "string"*/
                    outtextxy(250, 375, "Login");

                    /*rectangulo de user*/
                    setcolor(CYAN);
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
                    outtextxy(120, 90, "User: ");
                    setcolor(LIGHTGREEN);
                    outtextxy(270, 110, usuario);

                    setcolor(WHITE);
                    line(260, 90, 460, 90);   /* --- superior*/
                    line(260, 90, 260, 125);  /*| izquierdo*/
                    line(460, 90, 460, 125);  /*| derecho*/
                    line(260, 123, 460, 123); /* --- inferior*/

                    /*rectangulo de contrasena*/
                    setcolor(CYAN);
                    outtextxy(120, 170, "Contrasena: ");
                    setcolor(WHITE);
                    line(260, 170, 460, 170); /* --- superior*/
                    line(260, 170, 260, 200); /*| izquierdo*/
                    line(460, 170, 460, 200); /*| derecho*/
                    line(260, 200, 460, 200); /* --- inferior*/

                    /*cuadro de caracter ver contrasena*/
                    setfillstyle(SOLID_FILL, BLACK);

                    setfillstyle(SOLID_FILL, BLACK);
                    /*cuadro de caracter no ver contrasena*/
                    bar(310, 230, 340, 260);
                    line(310, 230, 340, 230); /* --- superior*/
                    line(310, 230, 310, 260); /*| izquierdo*/
                    line(340, 230, 340, 260); /*| derecho*/
                    line(310, 260, 340, 260); /* --- inferior*/

                    bar(120, 230, 150, 260);
                    line(120, 230, 150, 230); /* --- superior*/
                    line(120, 230, 120, 260); /*| izquierdo*/
                    line(150, 230, 150, 260); /*| derecho*/
                    line(120, 260, 150, 260); /* --- inferior*/

                    setcolor(LIGHTBLUE);
                    outtextxy(170, 240, "Ver contrasena");
                    setcolor(LIGHTBLUE);
                    outtextxy(360, 240, "No ver contrasena");

                    setcolor(LIGHTGREEN);
                    if (verificacion == 1)
                    {
                        outtextxy(270, 190, password);
                    }
                    else
                    {
                        outtextxy(270, 190, password_no_ver);
                    }
                }
                else if (contador < 23 && datos.contrasena != '\r')
                {
                    /*'\r' (retorno de carro) cuando solo capturas un caracter y
                    presionas enter no se guarda \n se guarda \r sepa dios porque*/
                    password[contador] = datos.contrasena; /*concatenamos usando contador como indice*/
                    password[contador + 1] = '\0';         /*agregamos el caracter nulo para final de cadena siempre*/
                    password_no_ver[contador] = '*';
                    password_no_ver[contador + 1] = '\0';
                    contador++;
                    setcolor(LIGHTGREEN);
                    if (verificacion == 1)
                    {
                        outtextxy(270, 190, password);
                    }
                    else
                    {
                        outtextxy(270, 190, password_no_ver);
                    }
                }
            }

            if (contador > 2 && datos.contrasena == '\r')
            {
                break;
            }
        }

        mver();
        while (1)
        {
            mver(); /*para visualizar el mouse*/
            if (minlimit(1, 210, 350, 330, 400) == 1 && mclick() == 1)
            {
                /*minlimit sirve para saber si el usuario hizo click en esas cordenadas*/
                /*funcion mclick() que captura el click del mosuse derecho*/

                if (strcmp(usuario, "DANIEL") == 0 && strcmp(password, "123") == 0)
                {
                    msituar(1, 200, 100); /*situar el mouse al iniciar el programa*/

                    borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
                     se borran, y la ventana queda en blanco.
                     */

                    /*
                    WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
                    INTERLEAVE_FILL Relleno con un patrón de puntos.
                    XHATCH_FILL Relleno con líneas cruzadas.
                    BKSLASH_FILL Relleno con líneas diagonales.
                    HATCH_FILL Relleno con líneas horizontales.
                    SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

                    */
                    setfillstyle(SOLID_FILL, LIGHTBLUE);

                    bar(210, 350, 330, 400);
                    /*Coordenada x del punto superior izquierdo: 210
                    Coordenada y del punto superior izquierdo: 350
                    Coordenada x del punto inferior derecho: 330
                    Coordenada y del punto inferior derecho: 400
                    */

                    /*Borde del cuadoro*/
                    setcolor(BROWN);
                    line(210, 350, 210, 400);
                    setcolor(RED);
                    line(210, 350, 330, 350);
                    line(330, 350, 330, 400);
                    line(210, 400, 330, 400);

                    setcolor(WHITE);
                    /*            Fuente          texto horizontal    tamaño -> 5*/
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
                    /*         X   Y  "string"*/
                    outtextxy(250, 375, "Login");

                    /*rectangulo de user*/
                    setcolor(CYAN);
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
                    outtextxy(120, 90, "User: ");
                    setcolor(LIGHTGREEN);
                    outtextxy(270, 110, usuario);

                    setcolor(WHITE);
                    line(260, 90, 460, 90);   /* --- superior*/
                    line(260, 90, 260, 125);  /*| izquierdo*/
                    line(460, 90, 460, 125);  /*| derecho*/
                    line(260, 123, 460, 123); /* --- inferior*/

                    /*rectangulo de contrasena*/
                    setcolor(CYAN);
                    outtextxy(120, 170, "Contrasena: ");
                    setcolor(WHITE);
                    line(260, 170, 460, 170); /* --- superior*/
                    line(260, 170, 260, 200); /*| izquierdo*/
                    line(460, 170, 460, 200); /*| derecho*/
                    line(260, 200, 460, 200); /* --- inferior*/

                    /*cuadro de caracter ver contrasena*/
                    setfillstyle(SOLID_FILL, BLACK);

                    setfillstyle(SOLID_FILL, BLACK);
                    /*cuadro de caracter no ver contrasena*/
                    bar(310, 230, 340, 260);
                    line(310, 230, 340, 230); /* --- superior*/
                    line(310, 230, 310, 260); /*| izquierdo*/
                    line(340, 230, 340, 260); /*| derecho*/
                    line(310, 260, 340, 260); /* --- inferior*/

                    bar(120, 230, 150, 260);
                    line(120, 230, 150, 230); /* --- superior*/
                    line(120, 230, 120, 260); /*| izquierdo*/
                    line(150, 230, 150, 260); /*| derecho*/
                    line(120, 260, 150, 260); /* --- inferior*/

                    setcolor(LIGHTBLUE);
                    outtextxy(170, 240, "Ver contrasena");
                    setcolor(LIGHTBLUE);
                    outtextxy(360, 240, "No ver contrasena");

                    setcolor(LIGHTGREEN);
                    if (verificacion == 1)
                    {
                        outtextxy(270, 190, password);
                    }
                    else
                    {
                        outtextxy(270, 190, password_no_ver);
                    }
                    if (verificacion == 1)
                    {
                        setcolor(LIGHTGREEN);
                        line(120, 260, 150, 230); /* / */
                        line(120, 230, 150, 260); /* \ */
                    }
                    else
                    {
                        setcolor(LIGHTGREEN);
                        line(310, 260, 340, 230); /* / */
                        line(310, 230, 340, 260); /* \ */
                    }

                    setcolor(LIGHTGREEN);
                    outtextxy(250, 280, "CORRECTO");
                    getch();
                    return;
                }
                else if (strcmp(usuario, "ERNESTO") == 0 && strcmp(password, "000") == 0)
                {
                    msituar(1, 200, 100); /*situar el mouse al iniciar el programa*/

                    borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
                     se borran, y la ventana queda en blanco.
                     */

                    /*
                    WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
                    INTERLEAVE_FILL Relleno con un patrón de puntos.
                    XHATCH_FILL Relleno con líneas cruzadas.
                    BKSLASH_FILL Relleno con líneas diagonales.
                    HATCH_FILL Relleno con líneas horizontales.
                    SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

                    */
                    setfillstyle(SOLID_FILL, LIGHTBLUE);

                    bar(210, 350, 330, 400);
                    /*Coordenada x del punto superior izquierdo: 210
                    Coordenada y del punto superior izquierdo: 350
                    Coordenada x del punto inferior derecho: 330
                    Coordenada y del punto inferior derecho: 400
                    */

                    /*Borde del cuadoro*/
                    setcolor(BROWN);
                    line(210, 350, 210, 400);
                    setcolor(RED);
                    line(210, 350, 330, 350);
                    line(330, 350, 330, 400);
                    line(210, 400, 330, 400);

                    setcolor(WHITE);
                    /*            Fuente          texto horizontal    tamaño -> 5*/
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
                    /*         X   Y  "string"*/
                    outtextxy(250, 375, "Login");

                    /*rectangulo de user*/
                    setcolor(CYAN);
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
                    outtextxy(120, 90, "User: ");
                    setcolor(LIGHTGREEN);
                    outtextxy(270, 110, usuario);

                    setcolor(WHITE);
                    line(260, 90, 460, 90);   /* --- superior*/
                    line(260, 90, 260, 125);  /*| izquierdo*/
                    line(460, 90, 460, 125);  /*| derecho*/
                    line(260, 123, 460, 123); /* --- inferior*/

                    /*rectangulo de contrasena*/
                    setcolor(CYAN);
                    outtextxy(120, 170, "Contrasena: ");
                    setcolor(WHITE);
                    line(260, 170, 460, 170); /* --- superior*/
                    line(260, 170, 260, 200); /*| izquierdo*/
                    line(460, 170, 460, 200); /*| derecho*/
                    line(260, 200, 460, 200); /* --- inferior*/

                    /*cuadro de caracter ver contrasena*/
                    setfillstyle(SOLID_FILL, BLACK);

                    setfillstyle(SOLID_FILL, BLACK);
                    /*cuadro de caracter no ver contrasena*/
                    bar(310, 230, 340, 260);
                    line(310, 230, 340, 230); /* --- superior*/
                    line(310, 230, 310, 260); /*| izquierdo*/
                    line(340, 230, 340, 260); /*| derecho*/
                    line(310, 260, 340, 260); /* --- inferior*/

                    bar(120, 230, 150, 260);
                    line(120, 230, 150, 230); /* --- superior*/
                    line(120, 230, 120, 260); /*| izquierdo*/
                    line(150, 230, 150, 260); /*| derecho*/
                    line(120, 260, 150, 260); /* --- inferior*/

                    setcolor(LIGHTBLUE);
                    outtextxy(170, 240, "Ver contrasena");
                    setcolor(LIGHTBLUE);
                    outtextxy(360, 240, "No ver contrasena");

                    setcolor(LIGHTGREEN);
                    if (verificacion == 1)
                    {
                        outtextxy(270, 190, password);
                    }
                    else
                    {
                        outtextxy(270, 190, password_no_ver);
                    }

                    setcolor(LIGHTGREEN);
                    outtextxy(250, 280, "CORRECTO");
                    if (verificacion == 1)
                    {
                        setcolor(LIGHTGREEN);
                        line(120, 260, 150, 230); /* / */
                        line(120, 230, 150, 260); /* \ */
                    }
                    else
                    {
                        setcolor(LIGHTGREEN);
                        line(310, 260, 340, 230); /* / */
                        line(310, 230, 340, 260); /* \ */
                    }
                    getch();
                    return;
                }
                else
                {
                    msituar(1, 200, 100); /*situar el mouse al iniciar el programa*/

                    borrar_graficos(); /*todos los gráficos dibujados en la ventana gráfica
                     se borran, y la ventana queda en blanco.
                     */

                    /*
                    WIDE_DOT_FILL Relleno con líneas cruzadas diagonales.
                    INTERLEAVE_FILL Relleno con un patrón de puntos.
                    XHATCH_FILL Relleno con líneas cruzadas.
                    BKSLASH_FILL Relleno con líneas diagonales.
                    HATCH_FILL Relleno con líneas horizontales.
                    SOLID_FILL Relleno sólido. Pinta la forma con un color sólido.

                    */
                    setfillstyle(SOLID_FILL, LIGHTBLUE);

                    bar(210, 350, 330, 400);
                    /*Coordenada x del punto superior izquierdo: 210
                    Coordenada y del punto superior izquierdo: 350
                    Coordenada x del punto inferior derecho: 330
                    Coordenada y del punto inferior derecho: 400
                    */

                    /*Borde del cuadoro*/
                    setcolor(BROWN);
                    line(210, 350, 210, 400);
                    setcolor(RED);
                    line(210, 350, 330, 350);
                    line(330, 350, 330, 400);
                    line(210, 400, 330, 400);

                    setcolor(WHITE);
                    /*            Fuente          texto horizontal    tamaño -> 5*/
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
                    /*         X   Y  "string"*/
                    outtextxy(250, 375, "Login");

                    /*rectangulo de user*/
                    setcolor(CYAN);
                    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
                    outtextxy(120, 90, "User: ");
                    setcolor(LIGHTGREEN);
                    outtextxy(270, 110, usuario);

                    setcolor(WHITE);
                    line(260, 90, 460, 90);   /* --- superior*/
                    line(260, 90, 260, 125);  /*| izquierdo*/
                    line(460, 90, 460, 125);  /*| derecho*/
                    line(260, 123, 460, 123); /* --- inferior*/

                    /*rectangulo de contrasena*/
                    setcolor(CYAN);
                    outtextxy(120, 170, "Contrasena: ");
                    setcolor(WHITE);
                    line(260, 170, 460, 170); /* --- superior*/
                    line(260, 170, 260, 200); /*| izquierdo*/
                    line(460, 170, 460, 200); /*| derecho*/
                    line(260, 200, 460, 200); /* --- inferior*/

                    /*cuadro de caracter ver contrasena*/
                    setfillstyle(SOLID_FILL, BLACK);

                    setfillstyle(SOLID_FILL, BLACK);
                    /*cuadro de caracter no ver contrasena*/
                    bar(310, 230, 340, 260);
                    line(310, 230, 340, 230); /* --- superior*/
                    line(310, 230, 310, 260); /*| izquierdo*/
                    line(340, 230, 340, 260); /*| derecho*/
                    line(310, 260, 340, 260); /* --- inferior*/

                    bar(120, 230, 150, 260);
                    line(120, 230, 150, 230); /* --- superior*/
                    line(120, 230, 120, 260); /*| izquierdo*/
                    line(150, 230, 150, 260); /*| derecho*/
                    line(120, 260, 150, 260); /* --- inferior*/

                    setcolor(LIGHTBLUE);
                    outtextxy(170, 240, "Ver contrasena");
                    setcolor(LIGHTBLUE);
                    outtextxy(360, 240, "No ver contrasena");

                    setcolor(LIGHTGREEN);
                    if (verificacion == 1)
                    {
                        outtextxy(270, 190, password);
                    }
                    else
                    {
                        outtextxy(270, 190, password_no_ver);
                    }

                    setcolor(LIGHTRED);
                    outtextxy(250, 280, "INCORRECTO");
                    if (verificacion == 1)
                    {
                        setcolor(LIGHTGREEN);
                        line(120, 260, 150, 230); /* / */
                        line(120, 230, 150, 260); /* \ */
                    }
                    else
                    {
                        setcolor(LIGHTGREEN);
                        line(310, 260, 340, 230); /* / */
                        line(310, 230, 340, 260); /* \ */
                    }
                    getch();
                    borrar_graficos();
                    closegraph();
                    numero_de_intentos++;
                    login();
                    return;
                }
            }
            if (minlimit(1, 120, 230, 150, 260) == 1 && mclick() == 1)
            {
                borrar_graficos();
                /*pintamos x de presionado*/
                setfillstyle(SOLID_FILL, LIGHTBLUE);

                bar(210, 350, 330, 400);
                /*Coordenada x del punto superior izquierdo: 210
                Coordenada y del punto superior izquierdo: 350
                Coordenada x del punto inferior derecho: 330
                Coordenada y del punto inferior derecho: 400
                */

                /*Borde del cuadoro*/
                setcolor(BROWN);
                line(210, 350, 210, 400);
                setcolor(RED);
                line(210, 350, 330, 350);
                line(330, 350, 330, 400);
                line(210, 400, 330, 400);

                setcolor(WHITE);
                /*            Fuente          texto horizontal    tamaño -> 5*/
                settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
                /*         X   Y  "string"*/
                outtextxy(250, 375, "Login");

                /*rectangulo de user*/
                setcolor(CYAN);
                settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
                outtextxy(120, 90, "User: ");
                setcolor(LIGHTGREEN);
                outtextxy(270, 110, usuario);

                setcolor(WHITE);
                line(260, 90, 460, 90);   /* --- superior*/
                line(260, 90, 260, 125);  /*| izquierdo*/
                line(460, 90, 460, 125);  /*| derecho*/
                line(260, 123, 460, 123); /* --- inferior*/

                /*rectangulo de contrasena*/
                setcolor(CYAN);
                outtextxy(120, 170, "Contrasena: ");
                setcolor(WHITE);
                line(260, 170, 460, 170); /* --- superior*/
                line(260, 170, 260, 200); /*| izquierdo*/
                line(460, 170, 460, 200); /*| derecho*/
                line(260, 200, 460, 200); /* --- inferior*/

                /*cuadro de caracter ver contrasena*/
                setfillstyle(SOLID_FILL, BLACK);

                setfillstyle(SOLID_FILL, BLACK);
                /*cuadro de caracter no ver contrasena*/
                bar(310, 230, 340, 260);
                line(310, 230, 340, 230); /* --- superior*/
                line(310, 230, 310, 260); /*| izquierdo*/
                line(340, 230, 340, 260); /*| derecho*/
                line(310, 260, 340, 260); /* --- inferior*/

                bar(120, 230, 150, 260);
                line(120, 230, 150, 230); /* --- superior*/
                line(120, 230, 120, 260); /*| izquierdo*/
                line(150, 230, 150, 260); /*| derecho*/
                line(120, 260, 150, 260); /* --- inferior*/

                setcolor(LIGHTBLUE);
                outtextxy(170, 240, "Ver contrasena");
                setcolor(LIGHTBLUE);
                outtextxy(360, 240, "No ver contrasena");

                setcolor(LIGHTGREEN);
                outtextxy(270, 190, password);

                line(120, 260, 150, 230); /* / */
                line(120, 230, 150, 260); /* \ */

                setcolor(BLACK);
                line(310, 260, 340, 230); /* / */
                line(310, 230, 340, 260); /* \ */
                verificacion = 1;
            }
            if (minlimit(1, 310, 230, 340, 260) == 1 && mclick() == 1)
            {
                /*pintamos x de presionado*/
                verificacion = 0;
                borrar_graficos();
                /*pintamos x de presionado*/
                setfillstyle(SOLID_FILL, LIGHTBLUE);

                bar(210, 350, 330, 400);
                /*Coordenada x del punto superior izquierdo: 210
                Coordenada y del punto superior izquierdo: 350
                Coordenada x del punto inferior derecho: 330
                Coordenada y del punto inferior derecho: 400
                */

                /*Borde del cuadoro*/
                setcolor(BROWN);
                line(210, 350, 210, 400);
                setcolor(RED);
                line(210, 350, 330, 350);
                line(330, 350, 330, 400);
                line(210, 400, 330, 400);

                setcolor(WHITE);
                /*            Fuente          texto horizontal    tamaño -> 5*/
                settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 10);
                /*         X   Y  "string"*/
                outtextxy(250, 375, "Login");

                /*rectangulo de user*/
                setcolor(CYAN);
                settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
                outtextxy(120, 90, "User: ");
                setcolor(LIGHTGREEN);
                outtextxy(270, 110, usuario);

                setcolor(WHITE);
                line(260, 90, 460, 90);   /* --- superior*/
                line(260, 90, 260, 125);  /*| izquierdo*/
                line(460, 90, 460, 125);  /*| derecho*/
                line(260, 123, 460, 123); /* --- inferior*/

                /*rectangulo de contrasena*/
                setcolor(CYAN);
                outtextxy(120, 170, "Contrasena: ");
                setcolor(WHITE);
                line(260, 170, 460, 170); /* --- superior*/
                line(260, 170, 260, 200); /*| izquierdo*/
                line(460, 170, 460, 200); /*| derecho*/
                line(260, 200, 460, 200); /* --- inferior*/

                /*cuadro de caracter ver contrasena*/
                setfillstyle(SOLID_FILL, BLACK);

                setfillstyle(SOLID_FILL, BLACK);
                /*cuadro de caracter no ver contrasena*/
                bar(310, 230, 340, 260);
                line(310, 230, 340, 230); /* --- superior*/
                line(310, 230, 310, 260); /*| izquierdo*/
                line(340, 230, 340, 260); /*| derecho*/
                line(310, 260, 340, 260); /* --- inferior*/

                bar(120, 230, 150, 260);
                line(120, 230, 150, 230); /* --- superior*/
                line(120, 230, 120, 260); /*| izquierdo*/
                line(150, 230, 150, 260); /*| derecho*/
                line(120, 260, 150, 260); /* --- inferior*/

                setcolor(LIGHTBLUE);
                outtextxy(170, 240, "Ver contrasena");
                setcolor(LIGHTBLUE);
                outtextxy(360, 240, "No ver contrasena");

                setcolor(LIGHTGREEN);
                outtextxy(270, 190, password_no_ver);

                line(310, 260, 340, 230); /* / */
                line(310, 230, 340, 260); /* \ */

                setcolor(BLACK);
                line(120, 260, 150, 230); /* / */
                line(120, 230, 150, 260); /* \ */
            }
            else
            {
                continue;
            }
        }
        /*
        La función kbhit() es una función de la biblioteca de conio.h que
        se utiliza en programas en lenguaje C para verificar si se ha presionado
        una tecla en el teclado sin bloquear la ejecución del programa.
        La función kbhit() retorna un valor entero, que es diferente de
        cero si una tecla ha sido presionada y cero si no se ha
        presionado ninguna tecla.
        */
    }

    getch();
    return;
}

void animacion(void);
void animacion(void)
{
    srand(time(NULL));
    initgraph(&driver, &mode, "C:\\TC20\\BIN");
    nieve();

    return;
}
