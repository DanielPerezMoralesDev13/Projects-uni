#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include <ctype.h>

void borrar()
{
    system("cls");
}
void inicio()
{
    int iterable,barra,loading;
    loading = 0;
    clrscr();
    for (iterable = 0; iterable <2080; iterable++)
    {
      if (iterable >= 0)
      {
         textcolor(DARKGRAY);
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
                textcolor(DARKGRAY);
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
    getch();
}

int logo()
{  
    int i;
	clrscr();
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
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
			
	}
	getch();
    borrar();
   return 0;
}
void sueldos(double *sueldo_daniel, double *sueldo_ernesto) 
{
    /*El asterisco * en la declaración de parámetros de función,
    como en void sueldos(double *sueldo_daniel, double *sueldo_ernesto),
    indica que los parámetros son punteros. En C y otros lenguajes, 
    los punteros son variables que almacenan direcciones de memoria en lugar 
    de valores directos. Cuando pasas un puntero como parámetro, estás pasando 
    la dirección de memoria de una variable y, por lo tanto, puedes modificar 
    el contenido de esa variable a través del puntero. En tu función sueldos, 
    estás tomando dos punteros a double como parámetros: sueldo_daniel y sueldo_ernesto. 
    Esto permite que la función modifique los valores de las variables sueldo_daniel y 
    sueldo_ernesto en la función main.
    
    Es necesario pasar punteros a las variables en lugar de los valores directos cuando 
    deseas modificar esas variables dentro de una función y quieres que esos cambios sean
    visibles fuera de la función. Esto se debe a cómo funcionan los parámetros en C y 
    cómo se maneja la memoria. En C, los parámetros de función se pasan por valor. 
    Esto significa que cuando pasas una variable como argumento a una función, 
    en realidad estás pasando una copia del valor de esa variable, no la variable en sí.
    Esto implica que cualquier cambio que hagas en la copia dentro de la función 
    no afectará a la variable original fuera de la función. Cuando pasas un puntero a una 
    función, estás pasando la dirección de memoria de la variable original.
    Esto permite que la función acceda directamente a la memoria donde se almacena 
    la variable original y, por lo tanto, pueda modificar su contenido. En el contexto
    de tu código, al pasar punteros a las funciones, permites que las funciones 
    modifiquen los valores de las variables sueldo_daniel y sueldo_ernesto directamente
    en la memoria donde se almacenan. Si pasaras los valores directos, estarías 
    trabajando con copias locales de esos valores dentro de las funciones y no se 
    reflejarían fuera de ellas.
    */
    FILE *archivo; 
    char caracter[200];
    double sueldo_1 = 500,sueldo_2 = 500;
    archivo = fopen("C:\\TC20\\BIN\\saldo.txt","r");
    if (archivo == NULL)
    {
        /*printf("error ala abrir el archivo");*/
        *sueldo_daniel =  sueldo_1;
        *sueldo_ernesto = sueldo_2;
    }
    else
    {
       while (fgets(caracter,sizeof(caracter),archivo) != NULL)
        {
            if (sscanf(caracter,"sueldo_uno = %lf",&sueldo_1) == 1)
            {
                *sueldo_daniel = sueldo_1;
            }
            if (sscanf(caracter,"sueldo_dos = %lf",&sueldo_2) == 1)
            {
                *sueldo_ernesto = sueldo_2;
            }
        }
       
    }
    fclose(archivo);
}
void actualizar_sueldos(double *sueldo_daniel, double *sueldo_ernesto,char *user) 
{
    /*El asterisco * en la declaración de parámetros de función,
    como en void sueldos(double *sueldo_daniel, double *sueldo_ernesto),
    indica que los parámetros son punteros. En C y otros lenguajes, 
    los punteros son variables que almacenan direcciones de memoria en lugar 
    de valores directos. Cuando pasas un puntero como parámetro, estás pasando 
    la dirección de memoria de una variable y, por lo tanto, puedes modificar 
    el contenido de esa variable a través del puntero. En tu función sueldos, 
    estás tomando dos punteros a double como parámetros: sueldo_daniel y sueldo_ernesto. 
    Esto permite que la función modifique los valores de las variables sueldo_daniel y 
    sueldo_ernesto en la función main.
    
    Es necesario pasar punteros a las variables en lugar de los valores directos cuando 
    deseas modificar esas variables dentro de una función y quieres que esos cambios sean
    visibles fuera de la función. Esto se debe a cómo funcionan los parámetros en C y 
    cómo se maneja la memoria. En C, los parámetros de función se pasan por valor. 
    Esto significa que cuando pasas una variable como argumento a una función, 
    en realidad estás pasando una copia del valor de esa variable, no la variable en sí.
    Esto implica que cualquier cambio que hagas en la copia dentro de la función 
    no afectará a la variable original fuera de la función. Cuando pasas un puntero a una 
    función, estás pasando la dirección de memoria de la variable original.
    Esto permite que la función acceda directamente a la memoria donde se almacena 
    la variable original y, por lo tanto, pueda modificar su contenido. En el contexto
    de tu código, al pasar punteros a las funciones, permites que las funciones 
    modifiquen los valores de las variables sueldo_daniel y sueldo_ernesto directamente
    en la memoria donde se almacenan. Si pasaras los valores directos, estarías 
    trabajando con copias locales de esos valores dentro de las funciones y no se 
    reflejarían fuera de ellas.
    */
    FILE *archivo; 
    char caracter[200];
    double sueldo_1 = 500,sueldo_2 = 500;
    archivo = fopen("C:\\TC20\\BIN\\saldo.txt","w");
    if (archivo == NULL)
    {
        /*printf("error ala abrir el archivo\n");*/
    }
    else if (strcmp(user,"daniel") == 0)
    {
		fprintf(archivo,"sueldo_uno = %lf\n",*sueldo_daniel);
		fprintf(archivo,"sueldo_dos = %lf",*sueldo_ernesto);
    }
	else if (strcmp(user,"ernesto") == 0)
    {
		fprintf(archivo,"sueldo_uno = %lf\n",*sueldo_daniel);
		fprintf(archivo,"sueldo_dos = %lf",*sueldo_ernesto);
    }
    fclose(archivo);
}

char *usuario() 
{   char usuario[10];
    size_t len;
    int conteo = 3,iterable;
    while (conteo > 0) 
    {   
		borrar();
		for (iterable = 0; iterable <2059; iterable++)
		{
			if (iterable == 485)
			{
				textcolor(CYAN);
				cprintf("Pon tu nombre de usuario: ");
			}
			else if (iterable == 487)
			{
				textcolor(GREEN);
				cprintf("                            ");
			}
			else if (iterable == 993)
			{
				textcolor(CYAN);
				cprintf("Ingresa tu contrasena: ");
			}
			else if (iterable == 998)
			{
				textcolor(GREEN);
				cprintf("                            ");
			}
			else
			{
				textcolor(DARKGRAY);
				cprintf("%c",219);
			}
		}
		gotoxy(34,4);
		fgets(usuario, sizeof(usuario), stdin);
        /*printf("Pon tu nombre de usuario: ");*/
        len = strlen(usuario);
		if (strcmp(usuario,"\n") == 0)
		{
			borrar();
			continue;	
		}
		else
		{
			if (len > 0 && usuario[len - 1] == '\n')
        	{
            	usuario[len - 1] = '\0';
        	}
        
        	if (strcmp(usuario, "daniel") == 0 || strcmp(usuario, "ernesto") == 0)
        	{
            	return strdup(usuario); 
        	} 
        	else
        	{
            	conteo--;
				gotoxy(37,6);
				textcolor(RED);
            	cprintf("Te quedan %d intentos\n", conteo);
				getch();
        	}
		}    
    }
    return NULL;
}
char *contrasena(char *user)
{
    char contrasena[20];
    int conteo = 3,iterable;
    size_t len;
    while (conteo > 0)
    {
		borrar();
		for (iterable = 0; iterable <2051; iterable++)
		{
			if (iterable == 485)
			{
				textcolor(CYAN);
				cprintf("Pon tu nombre de usuario: ");
			}
			else if (iterable == 487)
			{
				textcolor(GREEN);
				cprintf(" %s                         ",user);
			}
			else if (iterable == 989)
			{
				textcolor(CYAN);
				cprintf("Ingresa tu contrasena: ");
			}
			else if (iterable == 994)
			{
				textcolor(GREEN);
				cprintf("                                ");
			}
			else
			{
				textcolor(DARKGRAY);
				cprintf("%c",219);
			}
		}
		gotoxy(35,11);
        fgets(contrasena, sizeof(contrasena), stdin);
        len = strlen(contrasena);
		if (strcmp(contrasena,"\n") == 0)
		{
			borrar();
			continue;
		}
		else
		{
			if (len > 0 && contrasena[len - 1] == '\n')
        	{
            	contrasena[len - 1] = '\0';
        	}

        	if (strcmp(user, "daniel") == 0)
        	{
           		if (strcmp(contrasena, "123") == 0) 
            	{
                	return strdup(contrasena);
            	}
            	else
            	{
                	conteo--;
					gotoxy(38,13);
					textcolor(RED);
					cprintf("Te quedan %d intentos\n", conteo);
					getch();
            	}
        	}
			else
			{
				if (strcmp(contrasena, "000") == 0)
				{
					return strdup(contrasena);
				}
				else
				{
					conteo--;
					gotoxy(38,13);
					textcolor(RED);
					cprintf("Te quedan %d intentos\n", conteo);
					getch();
				}
			}
		} 
    }
    return NULL;
}
void presentacion()
{
	int iterable;
	borrar();
	for (iterable = 0; iterable <2080; iterable++)
	{
		textcolor(DARKGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 4);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 5);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 6);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 7);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 8);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 9);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 10);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 11);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 12);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 13);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 14);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 15);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	for (iterable = 0; iterable <55; iterable++)
	{
	
		gotoxy(15+iterable, 16);
		textcolor(LIGHTGRAY);
		cprintf("%c", 219);
	}
	gotoxy(16,5);
	textcolor(CYAN);
	cprintf("Universidad: UNI-IES");
	delay(1000);

	gotoxy(16,7);
	textcolor(CYAN);
	cprintf("Carrera: Ingenieria en computacion");
	delay(1000);

	gotoxy(16,9);
	textcolor(CYAN);
	cprintf("Integrantes: Daniel Perez, Ernesto Artola");
	delay(1000);

	gotoxy(16,11);
	textcolor(CYAN);
	cprintf("Carnet: 2023-0798I, 2023-0798I");
	delay(1000);
	gotoxy(16,13);
	textcolor(CYAN);
	cprintf("Profesor: Heymer");
	delay(1000);

	gotoxy(16,15);
	textcolor(CYAN);
	cprintf("Fecha: 30-08-2023");
	delay(1000);
	getch();
}
void consultar_saldo(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	int iterable;
	if (strcmp(user,"daniel") == 0)
	{
		borrar();
		for (iterable = 0; iterable <2080; iterable++)
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 4);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 5);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 6);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		gotoxy(27, 5);
		textcolor(CYAN);
		cprintf("tu saldo actual es %lf\n",*sueldo_daniel);
		getch();
	}
	else if (strcmp(user,"ernesto") == 0)
	{
		borrar();
		for (iterable = 0; iterable <2080; iterable++)
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 4);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 5);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 6);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		gotoxy(27, 5);
		textcolor(CYAN);
		cprintf("tu saldo actual es %lf",*sueldo_ernesto);
		getch();
	}
	
}
void ingresar_saldo_ala_cuenta(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	double ingresar_saldo;
	int iterable;
	
	if (strcmp(user,"daniel") == 0)
	{
		while (1)
		{
			borrar();
			for (iterable = 0; iterable <2080; iterable++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 4);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 5);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 6);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 7);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			
			gotoxy(16, 5);
			textcolor(CYAN);
			cprintf("Ingresar saldo ala cuenta");
			gotoxy(16, 7);
			textcolor(CYAN);
			cprintf("> ");
			gotoxy(18, 7);
			
			
			scanf("%lf",&ingresar_saldo);
			if (ingresar_saldo <= 0 )
			{
				
				gotoxy(20, 11);
				textcolor(RED);
				cprintf("ingrese numeros validos y que sean mayor a 0");
				getch();
			}
			else if (ingresar_saldo > 10000)
			{
				gotoxy(20, 11);
				textcolor(RED);
				cprintf("no puede ingresar numero mayor a 10000");
				getch();
			}
			else if (ingresar_saldo >= 1 && ingresar_saldo <= 10000)
			{
				*sueldo_daniel = *sueldo_daniel + ingresar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}	
	}
	else if (strcmp(user,"ernesto") == 0)
	{
		while (1)
		{
			
			borrar();
			for (iterable = 0; iterable <2080; iterable++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 4);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 5);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 6);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <55; iterable++)
			{
			
				gotoxy(15+iterable, 7);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			
			gotoxy(16, 5);
			textcolor(CYAN);
			cprintf("Ingresar saldo ala cuenta");
			gotoxy(16, 7);
			cprintf("> ");
			textcolor(CYAN);
			gotoxy(18, 7);
			
			scanf("%lf",&ingresar_saldo);
			if (ingresar_saldo <= 0 )
			{
				gotoxy(20, 11);
				textcolor(RED);
				cprintf("ingrese numeros validos y que sean mayor a 0");
				getch();
				
			}
			else if (ingresar_saldo > 10000)
			{
				gotoxy(20, 11);
				textcolor(RED);
				cprintf("no puede ingresar numero mayor a 10000");
				getch();
			}
			else if (ingresar_saldo >= 1 && ingresar_saldo <= 10000)
			{
				*sueldo_ernesto = *sueldo_ernesto + ingresar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}	
	}
	
}

void retirar_saldo_cuenta(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	double retirar_saldo;
	int iterable;
	while (1)
	{
		borrar();
		for (iterable = 0; iterable <2080; iterable++)
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 4);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 5);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 6);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 7);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		gotoxy(16, 5);
		textcolor(CYAN);
		cprintf("Ingresar saldo a retirar cuenta");
		gotoxy(16, 7);
		cprintf("> ");
		gotoxy(18, 7);
		scanf("%lf",&retirar_saldo);
		if (strcmp(user,"daniel") == 0)
		{
			if (retirar_saldo <= 0 )
			{
				gotoxy(20, 11);
				textcolor(RED);
				cprintf("ingrese numeros validos y que sean mayor a 0");
				getch();
			}
			else if (retirar_saldo > *sueldo_daniel)
			{
				gotoxy(9, 11);
				textcolor(RED);
				cprintf("No puede cuenta con el saldo suficiente para realizar la transaccion");
				gotoxy(30, 13);
				textcolor(RED);
				cprintf("saldo actual :%lf",*sueldo_daniel);
				getch();
			}
			else if (retirar_saldo >= 1 && retirar_saldo <= 10000)
			{
				*sueldo_daniel = *sueldo_daniel - retirar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}
		else if (strcmp(user,"ernesto") == 0)
		{
			if (retirar_saldo <= 0 )
			{
				gotoxy(20, 11);
				textcolor(RED);
				cprintf("ingrese numeros validos y que sean mayor a 0");
				getch();
			}
			else if (retirar_saldo > *sueldo_ernesto)
			{
				gotoxy(9, 11);
				textcolor(RED);
				cprintf("No puede cuenta con el saldo suficiente para realizar la transaccion");
				gotoxy(30, 13);
				textcolor(RED);
				cprintf("saldo actual :%lf",*sueldo_ernesto);
				getch();
			}
			else if (retirar_saldo >= 1 && retirar_saldo <= 10000)
			{
				*sueldo_ernesto = *sueldo_ernesto - retirar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
		}	
	}
}


void recarga_saldo(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	double retirar_saldo;
	int iterables;
	if (strcmp(user,"daniel") == 0)
	{
		while (1)
		{
			borrar();
			for (iterables = 0; iterables <2080; iterables++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 4);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 5);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 6);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 7);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			gotoxy(16, 5);
			textcolor(CYAN);
			cprintf("Ingresa la cantidad de saldo a recargar");
			gotoxy(16, 7);
			textcolor(CYAN);
			printf("> ");
			gotoxy(18, 7);
			
			scanf("%lf",&retirar_saldo);
			if (retirar_saldo <= 0 )
			{
				gotoxy(20, 11);
				textcolor(RED);
				cprintf("ingrese numeros validos y que sean mayor a 0");
				getch();
			}
			else if (retirar_saldo > *sueldo_daniel)
			{
				gotoxy(9, 11);
				textcolor(RED);
				cprintf("No puede cuenta con el saldo suficiente para realizar la transaccion");
				gotoxy(30, 13);
				textcolor(RED);
				cprintf("saldo actual :%lf",*sueldo_daniel);
				getch();
			}
			else if (retirar_saldo >= 1 && retirar_saldo <= 10000)
			{

				*sueldo_daniel = *sueldo_daniel - retirar_saldo;
				actualizar_sueldos(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
				
			
		}
		
	}
	else if (strcmp(user,"ernesto") == 0)
	{
		while (1)
		{
			borrar();
			for (iterables = 0; iterables <2080; iterables++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 4);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 5);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 6);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 7);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			gotoxy(16, 5);
			textcolor(CYAN);
			cprintf("Ingresa la cantidad de saldo a recargar");
			gotoxy(16, 7);
			textcolor(CYAN);
			printf("> ");
			gotoxy(18, 7);
			
			scanf("%lf",&retirar_saldo);
			if (retirar_saldo <= 0)
			{
				gotoxy(16, 11);
				textcolor(RED);
				cprintf("ingrese un numero valido y que sea mayor a 0");
				getch();
			}
			else if (retirar_saldo > *sueldo_ernesto) 
			{
				gotoxy(9, 11);
				textcolor(RED);
				cprintf("No puede cuenta con el saldo suficiente para realizar la transaccion");
				gotoxy(30, 13);
				textcolor(RED);
				cprintf("saldo actual :%lf",*sueldo_ernesto);
				getch();
			}
			else if (retirar_saldo > 0 && retirar_saldo <= 10000)
			{
				*sueldo_ernesto = *sueldo_ernesto - retirar_saldo;
				actualizar_sueldos(sueldo_daniel, sueldo_ernesto,user);
				break;
			}
		}
	}
}
void recarga(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	char operador[9],telefono[9],iterable;
	size_t len;
	int iterables;
	if (strcmp(user,"daniel") == 0)
	{
		while (1)
		{
			borrar();
			for (iterables = 0; iterables <2080; iterables++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 4);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 5);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 6);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 7);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 8);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 9);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 10);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 11);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 12);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 13);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
	
			gotoxy(16,5);
			textcolor(CYAN);
			cprintf("Elige tu operador");

			gotoxy(16,7);
			textcolor(CYAN);
			cprintf("1. Tigo");

			gotoxy(16,9);
			textcolor(CYAN);
			cprintf("2. Claro");


			gotoxy(16,11);
			textcolor(CYAN);
			cprintf("Ingrese un el nombre del operador que uses");

			gotoxy(16,13);
			textcolor(CYAN);
			cprintf("> ");
			gotoxy(18,13);
			
		
			fgets(operador,sizeof(operador),stdin);
			len = strlen(operador);
			if (len > 0 && operador[len - 1] == '\n')
			{
				operador[len - 1] = '\0';
				for (iterable = 0; len - 1>= iterable; iterable++)
				{
					operador[iterable] = toupper(operador[iterable]);
				}
			}
			if (strcmp(operador,"TIGO") == 0)
			{
				
				while (1)
				{
					borrar();
					for (iterables = 0; iterables <2080; iterables++)
					{
						textcolor(DARKGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 4);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 5);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 6);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 7);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					gotoxy(16, 5);
					textcolor(CYAN);
					cprintf("Ingrese su numero telefonico");
					gotoxy(16, 7);
					textcolor(CYAN);
					printf("> ");
					gotoxy(18, 7);
					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"77889650") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else if (strcmp(operador,"CLARO") == 0)
			{
				while (1)
				{
					borrar();
					for (iterables = 0; iterables <2080; iterables++)
					{
						textcolor(DARKGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 4);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 5);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 6);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 7);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					gotoxy(16, 5);
					textcolor(CYAN);
					cprintf("Ingrese su numero telefonico");
					gotoxy(16, 7);
					textcolor(CYAN);
					printf("> ");
					gotoxy(18, 7);

					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"12345678") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else
			{
				continue;
			}
		}

	}
	else if (strcmp(user,"ernesto") == 0)
	{
		
		while (1)
		{
			borrar();
			for (iterables = 0; iterables <2080; iterables++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 4);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 5);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 6);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 7);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 8);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 9);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 10);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 11);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 12);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterables = 0; iterables <55; iterables++)
			{
			
				gotoxy(15+iterables, 13);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
	
			gotoxy(16,5);
			textcolor(CYAN);
			cprintf("Elige tu operador");

			gotoxy(16,7);
			textcolor(CYAN);
			cprintf("1. Tigo");

			gotoxy(16,9);
			textcolor(CYAN);
			cprintf("2. Claro");


			gotoxy(16,11);
			textcolor(CYAN);
			cprintf("Ingrese un el nombre del operador que uses");

			gotoxy(16,13);
			textcolor(CYAN);
			cprintf("> ");
			gotoxy(18,13);
			fgets(operador,sizeof(operador),stdin);
			len = strlen(operador);
			if (len > 0 && operador[len - 1] == '\n')
			{
				operador[len - 1] = '\0';
				for (iterable = 0; len - 1>= iterable; iterable++)
				{
					operador[iterable] = toupper(operador[iterable]);
				}
			}
			if (strcmp(operador,"TIGO") == 0)
			{
				while (1)
				{
					borrar();
					for (iterables = 0; iterables <2080; iterables++)
					{
						textcolor(DARKGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 4);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 5);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 6);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 7);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					gotoxy(16, 5);
					textcolor(CYAN);
					cprintf("Ingrese su numero telefonico");
					gotoxy(16, 7);
					textcolor(CYAN);
					printf("> ");
					gotoxy(18, 7);
					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"77889650") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else if (strcmp(operador,"CLARO") == 0)
			{
				while (1)
				{
					borrar();
					for (iterables = 0; iterables <2080; iterables++)
					{
						textcolor(DARKGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 4);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 5);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 6);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					for (iterables = 0; iterables <55; iterables++)
					{
					
						gotoxy(15+iterables, 7);
						textcolor(LIGHTGRAY);
						cprintf("%c", 219);
					}
					gotoxy(16, 5);
					textcolor(CYAN);
					cprintf("Ingrese su numero telefonico");
					gotoxy(16, 7);
					textcolor(CYAN);
					printf("> ");
					gotoxy(18, 7);
					fgets(telefono,sizeof(telefono),stdin);
					len = strlen(telefono);
					if (len > 0 && telefono[len - 1] == '\n')
					{
						telefono[len - 1] = '\0'; 
					}
					if (strcmp(telefono,"12345678") == 0)
					{
						break;
					}
					else
					{
						continue;
					}
				}
				recarga_saldo(sueldo_daniel,sueldo_ernesto,user);
				break;
			}
			else
			{
				continue;
			}
		}		
	}
}
void menu_principal(double *sueldo_daniel, double *sueldo_ernesto,char *user)
{
	char opcion[2] = "0",opciones[2] = "0";
	size_t len;
	int iterable;
	borrar();
	/*if (strcmp(user, "daniel") == 0)
	{
		printf("hola\n");
		getch();
		exit(0);
	}*/

	while (1)
	{
		borrar();
		for (iterable = 0; iterable <2080; iterable++)
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 4);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 5);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 6);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 7);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 8);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 9);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 10);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 11);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 12);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 13);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 14);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 15);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		gotoxy(16,5);
		textcolor(CYAN);
		cprintf("1. presentacion");

		gotoxy(16,7);
		textcolor(CYAN);
		cprintf("2. Cajero ATM-UNI");

		gotoxy(16,9);
		textcolor(CYAN);
		cprintf("3. Recarga");

		gotoxy(16,11);
		textcolor(CYAN);
		cprintf("4. salir");

		gotoxy(16,13);
		textcolor(CYAN);
		cprintf("Ingrese un numero segun la accion que desea realizar");

		gotoxy(16,15);
		textcolor(CYAN);
		cprintf("> ");

		fgets(opcion,sizeof(opcion),stdin);
		len = strlen(opcion);
		if (len > 0 && opcion[len - 1] == '\n')
        {
            opcion[len - 1] = '\0';
        }
		if (strcmp(opcion,"1") == 0 || strcmp(opcion,"2") == 0 ||strcmp(opcion,"3") == 0 || strcmp(opcion,"4") == 0)
		{
			break;
		}
	} 
	borrar();
	switch (opcion[0])
	{
		/*
		La función ya espera un puntero, por lo que no necesitas tomar la 
		dirección nuevamente. Aquí tienes cómo debería ser la llamada a 
		la función
		*/
		case '1':
			presentacion();
			break;
		case '2':	
			while (1)
			{
				
				borrar();
				for (iterable = 0; iterable <2080; iterable++)
				{
					textcolor(DARKGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 4);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 5);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 6);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 7);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 8);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 9);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 10);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 11);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 12);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
				for (iterable = 0; iterable <55; iterable++)
				{
				
					gotoxy(15+iterable, 13);
					textcolor(LIGHTGRAY);
					cprintf("%c", 219);
				}
		
				gotoxy(16,5);
				textcolor(CYAN);
				cprintf("1. ingresar saldo ala cuenta");

				gotoxy(16,7);
				textcolor(CYAN);
				cprintf("2. retirar saldo cuenta");

				gotoxy(16,9);
				textcolor(CYAN);
				cprintf("3. consultar saldo");


				gotoxy(16,11);
				textcolor(CYAN);
				cprintf("Ingrese un numero segun la accion que desea realizar");

				gotoxy(16,13);
				textcolor(CYAN);
				cprintf("> ");
				gotoxy(18,13);
				
				fgets(opciones,sizeof(opciones),stdin);
				len = strlen(opciones);
				if (len > 0 && opciones[len - 1] == '\n')
				{
					opciones[len - 1] = '\0';
				}
				if (strcmp(opciones,"1") == 0 || strcmp(opciones,"2") == 0 ||strcmp(opciones,"3") == 0)
				{
					break;
				}
			}
			borrar();
			switch(opciones[0])
			{
			case '1':
				ingresar_saldo_ala_cuenta(sueldo_daniel, sueldo_ernesto,user);
				break;
			case '2':
				retirar_saldo_cuenta(sueldo_daniel,sueldo_ernesto,user);
				break;
			case '3':
				consultar_saldo(sueldo_daniel, sueldo_ernesto,user);
				break;
			}
			break;
		case '3':
			recarga(sueldo_daniel, sueldo_ernesto,user);
			break;
			
		default:
			break;
	}
}

void preguntar_al_usuario(double *sueldo_daniel,double *sueldo_ernesto,char *user)
{
	char preguntar[10];
	int iterable;
	size_t len;
	while (1)
	{
		borrar();
		for (iterable = 0; iterable <2080; iterable++)
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 4);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 5);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 6);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 7);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 8);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 9);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 10);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 11);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		gotoxy(16, 5);
		textcolor(CYAN);
		cprintf("Quieres continuar usando el mismo usuario");

		gotoxy(16, 7);
		textcolor(CYAN);
		cprintf("1. si");

		gotoxy(16, 9);
		textcolor(CYAN);
		cprintf("2. no");

		gotoxy(16, 11);
		textcolor(CYAN);
		cprintf("> ");

		fgets(preguntar,sizeof(preguntar),stdin);
		len = strlen(preguntar);
		if (len > 0 && preguntar[len - 1] == '\n')
		{
			preguntar[len - 1] = '\0';
		}
		for (iterable = 0;len - 1 > iterable;iterable ++)
		{
			preguntar[iterable] = toupper(preguntar[iterable]);
		}
		if (strcmp(preguntar,"SI") == 0)
		{
			menu_principal(sueldo_daniel,sueldo_ernesto,user);
			break;
		}
		else if (strcmp(preguntar,"NO") == 0)
		{
			main();
			break;
		}
		else
		{
			continue;
		}
	}
}

int main() 
{   
    double sueldo_daniel, sueldo_ernesto;
    char *user, *password,preguntar[10];
	int iterable;
	size_t len;
	logo();
	/*inicio();*/
    borrar();
    sueldos(&sueldo_daniel, &sueldo_ernesto);
    /*printf("1 = %lf, 2 = %lf\n", sueldo_daniel, sueldo_ernesto);*/
    user = usuario();
    if (user != NULL)
    {
        borrar();
        password = contrasena(user);
        if (strcmp(user, "daniel") == 0 && strcmp(password, "123") == 0)
        {
            printf("%s: %s ", user,password);
			
			menu_principal(&sueldo_daniel,&sueldo_ernesto,user);
        }
        else if (strcmp(user, "ernesto") == 0 && strcmp(password, "000") == 0)
        {
            printf("%s: %s ", user,password);
			menu_principal(&sueldo_daniel,&sueldo_ernesto,user);
        }
        else
        {
			borrar();
			for (iterable = 0; iterable <2080; iterable++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}

			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 13);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 14);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
		
			}
			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 15);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
		
			}
			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 16);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
		
			}
			/*printf("por seguridad cerraremos este programa");*/
			gotoxy(28,14);
			textcolor(RED);
			cprintf("por seguridad cerraremos");
			gotoxy(34,15);
			textcolor(RED);
			cprintf("este programa");
			getch();
			exit(0);
            
        }      
    }
    else
    {
		borrar();
		for (iterable = 0; iterable <2080; iterable++)
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}

		for (iterable = 0; iterable <30; iterable++)
    	{
        
			gotoxy(25+iterable, 13);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
      
    	}
		for (iterable = 0; iterable <30; iterable++)
    	{
        
			gotoxy(25+iterable, 14);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
      
    	}
		for (iterable = 0; iterable <30; iterable++)
    	{
        
			gotoxy(25+iterable, 15);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
      
    	}
		for (iterable = 0; iterable <30; iterable++)
    	{
        
			gotoxy(25+iterable, 16);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
      
    	}
        /*printf("por seguridad cerraremos este programa");*/
        gotoxy(28,14);
		textcolor(RED);
		cprintf("por seguridad cerraremos");
		gotoxy(34,15);
		textcolor(RED);
		cprintf("este programa");
		getch();
        exit(0);
    }
	while (1)
	{
		borrar();
		for (iterable = 0; iterable <2080; iterable++)
		{
			textcolor(DARKGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 4);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 5);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 6);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 7);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 8);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 9);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 10);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		for (iterable = 0; iterable <55; iterable++)
		{
		
			gotoxy(15+iterable, 11);
			textcolor(LIGHTGRAY);
			cprintf("%c", 219);
		}
		gotoxy(16, 5);
		textcolor(CYAN);
		cprintf("Quieres salir");
		gotoxy(16, 7);
		textcolor(CYAN);
		cprintf("1. si");
		gotoxy(16, 9);
		textcolor(CYAN);
		cprintf("2. no");
		gotoxy(16, 11);
		textcolor(CYAN);
		cprintf("> ");
		fgets(preguntar,sizeof(preguntar),stdin);
		len = strlen(preguntar);
		if (len > 0 && preguntar[len - 1] == '\n')
		{
			preguntar[len - 1] = '\0';
		}
		for (iterable = 0;len - 1 > iterable;iterable ++)
		{
			preguntar[iterable] = toupper(preguntar[iterable]);
		}
		if (strcmp(preguntar,"SI") == 0)
		{
			borrar();
			for (iterable = 0; iterable <2080; iterable++)
			{
				textcolor(DARKGRAY);
				cprintf("%c", 219);
			}

			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 13);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
		
			}
			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 14);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
		
			}
			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 15);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
		
			}
			for (iterable = 0; iterable <30; iterable++)
			{
			
				gotoxy(25+iterable, 16);
				textcolor(LIGHTGRAY);
				cprintf("%c", 219);
		
			}
			/*printf("por seguridad cerraremos este programa");*/
			gotoxy(28,14);
			textcolor(CYAN);
			cprintf("Has salido del programa");
			gotoxy(36,15);
			textcolor(CYAN);
			cprintf("cajero");
			getch();
			exit(0);
		}
		else if (strcmp(preguntar,"NO") == 0)
		{
			
			preguntar_al_usuario(&sueldo_daniel,&sueldo_ernesto,user);
		}
		else
		{
			continue;
		}
	}
    getch();
    return 0;
}