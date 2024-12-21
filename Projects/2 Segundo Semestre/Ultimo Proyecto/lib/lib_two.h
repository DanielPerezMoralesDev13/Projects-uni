#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#include <ctype.h>


void mayuscula(char *palabra);
void mayuscula(char *palabra)
{
	size_t len;
	int iterable;
	len = strlen(palabra);
	for (iterable = 0; iterable < len; iterable++)
	{
		palabra[iterable] = toupper(palabra[iterable]);
	}
    return;
}

void input(char *palabra, size_t tamano);
void input(char *palabra, size_t tamano)
{
	/*El uso de sizeof(palabra) no proporcionará el 
	tamaño correcto del búfer al que apunta palabra.
	En su lugar, sizeof(palabra) dará el tamaño del puntero char*,
	que generalmente será 4 o 8 bytes en sistemas de 32 o 64 bits,
	respectivamente.*/
    fgets(palabra,tamano,stdin);
    return;
}

void eliminar_enter(char *palabra);
void eliminar_enter(char *palabra)
{   
    size_t len;
    len = strlen(palabra);
    if (len > 0 && palabra[len - 1] == '\n')
    {
       palabra[len - 1] = '\0'; 
    }
    return;
}

void borrar(void);
void borrar(void)
{
	system("cls");
    return;
}

void inicio(void);
void inicio(void)
{
    int iterable,barra,loading;
    loading = 0;
    borrar();
    for (iterable = 0; iterable <2080; iterable++)
    {
      if (iterable >= 0)
      {
         textcolor(BLACK);
         cprintf("%c", 219);
      }
    }
    for (iterable = 0; iterable <30; iterable++)
    {
        
      	gotoxy(25+iterable, 13);
        textcolor(LIGHTBLUE);
        cprintf("%c", 176);
      
    }
    for (iterable=0;iterable <30; iterable++)
    {
        loading ++;
        if (loading == 1)
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading .", 219);
            delay(100);
        }
        else if (loading  == 2)
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading ..", 219);
            delay(100);
        }
        else
        {
            gotoxy(34, 11);
            textcolor(LIGHTGREEN);
            cprintf("loading ...", 219);
            loading = 0;
            delay(100);
            if (loading == 0 && iterable < 28)
            {
                gotoxy(34, 11);
                textcolor(LIGHTGREEN);
                cprintf("loading", 219);
                delay(50);
                textcolor(BLACK);
                cprintf("    ", 219);
            }
            else
            {
                gotoxy(34, 11);
                textcolor(LIGHTGREEN);
                cprintf("loading ...", 219);
                loading = 0;
                delay(100);  
            }
            delay(50);
            
            
        }
        gotoxy(25+iterable, 13);
        textcolor(LIGHTGREEN);
        cprintf("%c", 219);
        barra = (int)((float)iterable / 29 * 100);
        gotoxy(38, 15);
        textcolor(GREEN);
        cprintf("%d %", barra);
        delay(200);
    }
    delay(1000);
    return;
}

void logo(void);
void logo(void)
{  
    int i;
	borrar();
	for (i = 0; i <2080; i++)
	{
		if (i > 498 && i < 506)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 507 && i < 534)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 535 && i < 544)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 578 && i < 586)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		
		else if (i > 587 && i < 614)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 615 && i < 624)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 658 && i < 666)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 667 && i < 694)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 695 && i < 704)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 738 && i < 746)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 747 && i < 774)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 775 && i < 784)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}

		else if (i > 818 && i < 826)
		{
			textcolor(BLUE);
			cprintf("%c", 219);
		}
		else if (i > 827 && i < 835)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 845 && i < 854)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 898 && i < 906)
		{	gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 907 && i < 915)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 916 && i < 924)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 925 && i < 934)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 935 && i < 944)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if(i > 978 && i < 986)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 987 && i < 995)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 996 && i < 1004)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1005 && i < 1014)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1015 && i < 1024)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1058 && i < 1066)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 1067 && i < 1075)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1076 && i < 1084)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1085 && i < 1094)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1095 && i < 1104)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1138 && i < 1146)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if (i > 1156 && i < 1164)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if (i > 1165 && i < 1174)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1175 && i < 1184)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		
		else if (i > 1218 && i < 1244)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 1245 && i < 1264)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1298 && i < 1324)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1325 && i < 1344)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);

		}
		else if (i > 1378 && i < 1404)
		{
			gotoxy(0,0);
			textcolor(BLUE);
			cprintf("%c",219);
		}
		else if (i > 1405 && i < 1424)
		{
    		textcolor(BLUE);
    		cprintf("%c", 219);
		}
		
		else
		{
			textcolor(BLACK);
			cprintf("%c", 219);
		}
			
	}
	getch();
    borrar();
   return;
}

void salir(void);
void salir(void)
{
	borrar();
	gotoxy(28,14);
	textcolor(GREEN);
	cprintf("El programa ha finalizado");
	gotoxy(31,15);
	textcolor(GREEN);
	cprintf("Gracias por usarlo");
	getch();
	exit(0);
}

void ver_si_hay_numero_y_signos(char *palabra);
void ver_si_hay_numero_y_signos(char *palabra)
{
    short int iterable,iterable_two;
    char numero[] = "0123456789!\"#$%&'()*+,-./:;<=>?@[\]^_`{|}~ ";
    size_t len = strlen(palabra),len_two = strlen(numero);
    for (iterable=0;iterable<len;iterable++)
    {
        for (iterable_two=0;iterable_two<len_two;iterable_two++)
        {   
            if (strcmp(palabra[iterable],numero[iterable_two]) == 0)
            {
                strcpy(palabra,"caracter");
                return;
            }
            else
            {
                continue;
            }
        }   
    }
    return;
}

void ver_si_hay_caracter(char *palabra);
void ver_si_hay_caracter(char *palabra)
{
    short int iterable,iterable_two;
    char caracteres[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&'()*+,-./:;<=>?@[\]^_`{|}~ ";
    size_t len = strlen(palabra),len_two = strlen(caracteres);
    for (iterable=0;iterable<len;iterable++)
    {
        for (iterable_two=0;iterable_two<len_two;iterable_two++)
        {   
            if (strcmp(palabra[iterable],caracteres[iterable_two]) == 0)
            {
                strcpy(palabra,"caracter");
                return;
            }
            else
            {
                continue;
            }
        }   
    }
    return;
}

void ver_largo(char *palabra);
void ver_largo(char *palabra)
{
    size_t len = strlen(palabra);
    if (len >= 3)
    {
        return;
    }
    else
    {  
        strcpy(palabra,"codigo corto");
        return;
    }
}

void ver_si_hay_flotante(char *palabra);
void ver_si_hay_flotante(char *palabra)
{
    short int iterable, iterable_two, contador = 0;
    char caracteres[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!\"#$%&'()*+,-/:;<=>?@[\]^_`{|}~ ";
    size_t len = strlen(palabra), len_two = strlen(caracteres);

    for (iterable = 0; iterable < len; iterable++)
    {
        if (palabra[iterable] == '.')
        {
            contador++;
            if (contador >= 2)
            {
                strcpy(palabra, "caracter");
                return;
            }
            else
            {
                continue;
            }
        }
    }

    for (iterable = 0; iterable < len; iterable++)
    {
        for (iterable_two = 0; iterable_two < len_two; iterable_two++)
        {
            if (palabra[iterable] == caracteres[iterable_two])
            {
                strcpy(palabra, "caracter");
                return;
            }
            else
            {
                continue;
            }
        }
    }
}


