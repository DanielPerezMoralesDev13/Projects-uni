#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>
#include <ctype.h>

void borrar()
{
	system("cls");
}
void presentacion()
{
	int iterable;
	borrar();
	
	gotoxy(16,5);
	textcolor(WHITE);
	cprintf("Universidad: ");
	textcolor(CYAN);
	cprintf("UNI-IES");
	delay(1000);

	gotoxy(16,7);
	textcolor(WHITE);
	cprintf("Carrera: ");
	textcolor(CYAN);
	cprintf("Ingenieria en computacion");
	delay(1000);

	gotoxy(16,9);
	textcolor(WHITE);
	cprintf("Integrantes: ");
	textcolor(CYAN);
	cprintf("Daniel ,Ernesto ,Juan ,El pana Serch");
	delay(1000);

	gotoxy(16,11);
	textcolor(WHITE);
	cprintf("Carnet: ");
	textcolor(CYAN);
	cprintf("2023-0798I, 2023-0798I, 2023-0798I, 2023-0798I");
	delay(1000);

	gotoxy(16,13);
	textcolor(WHITE);
	cprintf("Profesor: ");
	textcolor(CYAN);
	cprintf("Heymer");
	delay(1000);

    gotoxy(16,15);
	textcolor(WHITE);
	cprintf("Fecha: ");
	textcolor(CYAN);
	cprintf("30-08-2023");
	delay(1000);
    /*25 = -5*/
    for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(20+iterable,17);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(20+iterable,18);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(20+iterable,19);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(20+iterable,20);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(20+iterable,21);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<19;iterable++)
	{
		textcolor(BLUE);
		gotoxy(20+iterable,22);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<19;iterable++)
	{
		textcolor(BLUE);
		gotoxy(20+iterable,23);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(27+iterable,20);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(27+iterable,19);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<20;iterable++)
	{
		textcolor(BLUE);
		gotoxy(27+iterable,17);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(34+iterable,20);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(41+iterable,19);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(41+iterable,20);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(41+iterable,21);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(49+iterable,21);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(49+iterable,20);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(49+iterable,18);
		cprintf("%c",219);	
	}
     for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(49+iterable,17);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<6;iterable++)
	{
		textcolor(BLUE);
		gotoxy(41+iterable,22);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<14;iterable++)
	{
		textcolor(BLUE);
		gotoxy(41+iterable,22);
		cprintf("%c",219);	
	}
    for (iterable=0;iterable<5;iterable++)
	{
		textcolor(BLUE);
		gotoxy(34+iterable,21);
		cprintf("%c",219);	
	}
	for (iterable=0;iterable<20;iterable++)
	{
		textcolor(BLUE);
		gotoxy(27+iterable,18);
		cprintf("%c",219);	
	}
	 for (iterable=0;iterable<14;iterable++)
	{
		textcolor(BLUE);
		gotoxy(41+iterable,23);
		cprintf("%c",219);	
	}
	getch();
}
void inicio()
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
			textcolor(BLACK);
			cprintf("%c", 219);
		}
			
	}
	getch();
    borrar();
   return 0;
}

void input(char *palabra, size_t tamano)
{
	/*El uso de sizeof(palabra) no proporcionará el 
	tamaño correcto del búfer al que apunta palabra.
	En su lugar, sizeof(palabra) dará el tamaño del puntero char*,
	que generalmente será 4 o 8 bytes en sistemas de 32 o 64 bits,
	respectivamente.*/
    fgets(palabra,tamano,stdin);
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
				textcolor(BLACK);
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
        
        	if (strcmp(usuario, "daniel") == 0 || strcmp(usuario, "DANIEL") == 0 || strcmp(usuario, "ernesto") == 0 || strcmp(usuario, "ERNESTO") == 0)
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
				textcolor(BLACK);
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

        	if (strcmp(user, "daniel") == 0 || strcmp(user, "DANIEL") == 0)
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

void mayuscula(char *palabra)
{
	size_t len;
	int iterable;
	len = strlen(palabra);
	for (iterable = 0; iterable < len; iterable++)
	{
		palabra[iterable] = toupper(palabra[iterable]);
	}
}

void eliminar_enter(char *palabra)
{   
    size_t len;
    len = strlen(palabra);
    if (len > 0 && palabra[len - 1] == '\n')
    {
       palabra[len - 1] = '\0'; 
    }

}

void ver_si_hay_numeros(char *palabra, char *letra)
{
	char numeros[] = "0123456789";
	size_t len,len_two = strlen(numeros);
	int iterable,iterable_two;
	len = strlen(palabra);
	for (iterable = 0; iterable < len; iterable++)
	{
		if (isdigit(palabra[iterable]))
		{
			/*La función isdigit y la función strcpy son funciones estándar 
			de la biblioteca estándar de C (<ctype.h> y <string.h>, respectivamente) 
			que se utilizan para realizar tareas específicas:

			isdigit:

			isdigit es una función que se utiliza para verificar si un carácter dado es un dígito decimal 
			(es decir, un número del 0 al 9). Devuelve un valor distinto de cero (verdadero) si el carácter
			 es un dígito y 0 (falso) en caso contrario.
			Ejemplo de uso:



			if (isdigit(palabra[iterable]))
			{
			// El carácter en palabra[iterable] es un dígito.
			}*/


			/*strcpy:

			strcpy es una función que se utiliza para copiar una cadena de caracteres 
			(una cadena de tipo char*) desde una fuente a un destino. Toma dos argumentos: el destino 
			(donde se copiará la cadena) y la fuente (la cadena que se copiará). Copia la cadena de la fuente 
			al destino, incluido el carácter nulo \0 que indica el final de la cadena.

			Ejemplo de uso:

			char destino[20];
			char fuente[] = "Hola, mundo!";
			strcpy(destino, fuente); // Copia "Hola, mundo!" desde fuente a destino
			*/
			strcpy(palabra, "numero");
			for (iterable_two = 0;iterable_two < len_two;iterable_two++)
			{
				if (palabra[iterable] == numeros[iterable_two])
				{
					*letra = numeros[iterable_two];
				}
			}
			break;	
		}
		else
		{
			continue;
		}
	}
}

void ver_si_hay_signos(char *palabra, char *letra)
{
	/*Para declarar un arreglo de caracteres en C que contenga todos los 
	caracteres de puntuación mencionados, debes escapar algunos de estos 
	caracteres usando una barra invertida \ antes de ellos.*/
	char caracter[] = "Ññ!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
	size_t len = strlen(palabra),len_two = strlen(caracter);
	int iterable,iterable_two;
	for (iterable = 0; iterable < len; iterable++)
	{
		if (palabra[0] == ' ')
		{
			strcpy(palabra,"numero");
			*letra = ' ';
			break;
		}
		for (iterable_two = 0; iterable_two < len_two; iterable_two++)
			if (palabra[iterable] == caracter[iterable_two])
			{
				/*En este código, hemos corregido palabra[iterable] == "'" 
				para usar comillas simples escapadas '\'', que es la forma 
				correcta de verificar si palabra[iterable] es una comilla simple en C.*/

				strcpy(palabra,"numero");
				/*El error está relacionado con la asignación de 
				un carácter a la variable letra. Estás intentando asignar un 
				carácter (caracter[iterable_two]) directamente a letra, que es 
				un puntero a un carácter (chsar *letra). Esto causará un error de 
				asignación incorrecta de tipos, ya que no puedes asignar 
				directamente un carácter a un puntero a un carácter.*/
				*letra = caracter[iterable_two];
				break;
			}
			else
			{
				continue;
			}
		if (strcmp(palabra,"numero") == 0)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	
}

int ver_si_hay_correo(char *palabra, char *letra)
{
	/*Para declarar un arreglo de caracteres en C que contenga todos los 
	caracteres de puntuación mencionados, debes escapar algunos de estos 
	caracteres usando una barra invertida \ antes de ellos.
	
	abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
	*/
	char caracter[] = "ñÑ!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ ";
	char caracter_two[] = "ñÑ!\"#$%&'()*+,-./:;<=>?[\\]^_`{|}~ ";
	size_t len = strlen(palabra),len_two = strlen(caracter);
	int iterable,iterable_two,numero = 0,arroba = 0,puntos = 0;
	for (iterable = 0; iterable < len; iterable++)
	{
		if (palabra[iterable] == ' ')
		{
			strcpy(palabra,"numero");
			*letra = ' ';
			return 0;
		}

	}
	if (palabra[0] == '@')
	{
		strcpy(palabra,"numero");
		return 0;
	}
	for (iterable = 0; iterable < len; iterable++)
	{
		if (palabra[iterable] == '@')
		{
			
			arroba++;
			if (palabra[iterable+1] == '.')
			{
				strcpy(palabra,"numero");
				return 0;
			}
		}
		else if (palabra[iterable] == '.')
		{
			
			puntos++;
		}
	}
	if (arroba == 0)
	{
		strcpy(palabra,"numero");
		return 0;
	}
	else if (arroba >= 2)
	{
		strcpy(palabra,"numero");
		return 0;
	}
	else if (puntos >= 2)
	{
		strcpy(palabra,"numero");
		return 0;
	}
	if (palabra[len-1] == 'I'&& palabra[len-2] == 'N' && palabra[len-3] == '.')
	{
		/*Los ultimo patrones coinciden con => .NI*/
		for (iterable = len-5; iterable < len-len; iterable--)
		{
			numero++;
			if (palabra[0] == ' ')
			{
				strcpy(palabra,"numero");
				*letra = ' ';
				break;
			}
			else if (palabra[0] == '@')
			{
				strcpy(palabra,"numero");
				*letra = '@';
				break;
			}
			if (iterable == len-5)
			{
				for (iterable_two = 0; iterable_two < len_two; iterable_two++)
				{
					if (palabra[iterable] == caracter[iterable_two])
					{
						/*En este código, hemos corregido palabra[iterable] == "'" 
						para usar comillas simples escapadas '\'', que es la forma 
						correcta de verificar si palabra[iterable] es una comilla simple en C.*/

						strcpy(palabra,"numero");
						/*El error está relacionado con la asignación de 
						un carácter a la variable letra. Estás intentando asignar un 
						carácter (caracter[iterable_two]) directamente a letra, que es 
						un puntero a un carácter (char *letra). Esto causará un error de 
						asignación incorrecta de tipos, ya que no puedes asignar 
						directamente un carácter a un puntero a un carácter.*/
						*letra = caracter[iterable_two];
						break;
					}
					else
					{
						continue;
					}
				}
				

			}
			else
			{
				if (palabra[iterable] == '@' )
				{
					if (len-1 >= 5 && palabra[iterable+1] == 'A'|| palabra[iterable+1] == 'B' ||
					palabra[iterable+1] == 'C' || palabra[iterable+1] == 'D' || palabra[iterable+1] == 'E' ||
					palabra[iterable+1] == 'F' || palabra[iterable+1] == 'G' || palabra[iterable+1] == 'H' ||
					palabra[iterable+1] == 'I' || palabra[iterable+1] == 'J' || palabra[iterable+1] == 'K' ||
					palabra[iterable+1] == 'L' || palabra[iterable+1] == 'M' || palabra[iterable+1] == 'N' ||
					palabra[iterable+1] == 'O' || palabra[iterable+1] == 'P' || palabra[iterable+1] == 'Q' ||
					palabra[iterable+1] == 'R' || palabra[iterable+1] == 'S' || palabra[iterable+1] == 'T' ||
					palabra[iterable+1] == 'U' || palabra[iterable+1] == 'V' || palabra[iterable+1] == 'W' || 
					palabra[iterable+1] == 'X' || palabra[iterable+1] == 'Y' || palabra[iterable+1] == 'Z') 
					{ 
						break;	
					}
					else
					{
						strcpy(palabra,"numero");
						break;
					}
						
				}
				else
				{
					for (iterable_two = 0; iterable_two < len_two; iterable_two++)
					{
					
						if (palabra[iterable] == caracter_two[iterable_two])
						{
							/*En este código, hemos corregido palabra[iterable] == "'" 
							para usar comillas simples escapadas '\'', que es la forma 
							correcta de verificar si palabra[iterable] es una comilla simple en C.*/

							strcpy(palabra,"numero");
							/*El error está relacionado con la asignación de 
							un carácter a la variable letra. Estás intentando asignar un 
							carácter (caracter[iterable_two]) directamente a letra, que es 
							un puntero a un carácter (char *letra). Esto causará un error de 
							asignación incorrecta de tipos, ya que no puedes asignar 
							directamente un carácter a un puntero a un carácter.*/
							*letra = caracter_two[iterable_two];
							break;
						}
						else
						{
							continue;
						}
					}
				}	
				
				
			}
			if (palabra[iterable] == '@')
			{
				break;
			}
			if (strcmp(palabra,"numero") == 0)
			{
				break;
			}
			else
			{
				continue;
			}
		
	
		}
	}
	else if (palabra[len-1] == 'U' && palabra[len-2] == 'D' && palabra[len-3] == 'E' && palabra[len-4] == '.')
	{
		/*Los ultimo patrones coinciden con => .EDU*/
		for (iterable = len-5; iterable < len-len; iterable--)
		{
			numero++;
			if (palabra[0] == ' ')
			{
				strcpy(palabra,"numero");
				*letra = ' ';
				break;
			}
			else if (palabra[0] == '@')
			{
				strcpy(palabra,"numero");
				*letra = '@';
				break;
			}
			if (iterable == len-5)
			{
				for (iterable_two = 0; iterable_two < len_two; iterable_two++)
				{
					if (palabra[iterable] == caracter[iterable_two])
					{
						/*En este código, hemos corregido palabra[iterable] == "'" 
						para usar comillas simples escapadas '\'', que es la forma 
						correcta de verificar si palabra[iterable] es una comilla simple en C.*/

						strcpy(palabra,"numero");
						/*El error está relacionado con la asignación de 
						un carácter a la variable letra. Estás intentando asignar un 
						carácter (caracter[iterable_two]) directamente a letra, que es 
						un puntero a un carácter (chsar *letra). Esto causará un error de 
						asignación incorrecta de tipos, ya que no puedes asignar 
						directamente un carácter a un puntero a un carácter.*/
						*letra = caracter[iterable_two];
						break;
					}
					else
					{
						continue;
					}
				}
				

			}
			else
			{
				if (palabra[iterable] == '@' )
				{
					if (len-1 >= 6 && palabra[iterable+1] == 'A'|| palabra[iterable+1] == 'B' ||
					palabra[iterable+1] == 'C' || palabra[iterable+1] == 'D' || palabra[iterable+1] == 'E' ||
					palabra[iterable+1] == 'F' || palabra[iterable+1] == 'G' || palabra[iterable+1] == 'H' ||
					palabra[iterable+1] == 'I' || palabra[iterable+1] == 'J' || palabra[iterable+1] == 'K' ||
					palabra[iterable+1] == 'L' || palabra[iterable+1] == 'M' || palabra[iterable+1] == 'N' ||
					palabra[iterable+1] == 'O' || palabra[iterable+1] == 'P' || palabra[iterable+1] == 'Q' ||
					palabra[iterable+1] == 'R' || palabra[iterable+1] == 'S' || palabra[iterable+1] == 'T' ||
					palabra[iterable+1] == 'U' || palabra[iterable+1] == 'V' || palabra[iterable+1] == 'W' || 
					palabra[iterable+1] == 'X' || palabra[iterable+1] == 'Y' || palabra[iterable+1] == 'Z') 
					{ 
						break;	
					}
					else
					{
						strcpy(palabra,"numero");
						break;
					}
						
				}
				else
				{
					for (iterable_two = 0; iterable_two < len_two; iterable_two++)
					{
					
						if (palabra[iterable] == caracter_two[iterable_two])
						{
							/*En este código, hemos corregido palabra[iterable] == "'" 
							para usar comillas simples escapadas '\'', que es la forma 
							correcta de verificar si palabra[iterable] es una comilla simple en C.*/

							strcpy(palabra,"numero");
							/*El error está relacionado con la asignación de 
							un carácter a la variable letra. Estás intentando asignar un 
							carácter (caracter[iterable_two]) directamente a letra, que es 
							un puntero a un carácter (char *letra). Esto causará un error de 
							asignación incorrecta de tipos, ya que no puedes asignar 
							directamente un carácter a un puntero a un carácter.*/
							*letra = caracter_two[iterable_two];
							break;
						}
						else
						{
							continue;
						}
					}
				}	
				
				
			}
			if (palabra[iterable] == '@')
			{
				break;
			}
			if (strcmp(palabra,"numero") == 0)
			{
				break;
			}
			else
			{
				continue;
			}
		
	
		}

	}
	else if (palabra[len-1] == 'M' && palabra[len-2] == 'O' && palabra[len-3] == 'C' && palabra[len-4] == '.')
	{
		/*Los ultimo patrones coinciden con => .COM*/
		for (iterable = len-5; iterable < len-len; iterable--)
		{
			numero++;
			if (palabra[0] == ' ')
			{
				strcpy(palabra,"numero");
				*letra = ' ';
				break;
			}
			else if (palabra[0] == '@')
			{
				strcpy(palabra,"numero");
				*letra = '@';
				break;
			}
			if (iterable == len-5)
			{
				for (iterable_two = 0; iterable_two < len_two; iterable_two++)
				{
					if (palabra[iterable] == caracter[iterable_two])
					{
						/*En este código, hemos corregido palabra[iterable] == "'" 
						para usar comillas simples escapadas '\'', que es la forma 
						correcta de verificar si palabra[iterable] es una comilla simple en C.*/

						strcpy(palabra,"numero");
						/*El error está relacionado con la asignación de 
						un carácter a la variable letra. Estás intentando asignar un 
						carácter (caracter[iterable_two]) directamente a letra, que es 
						un puntero a un carácter (chsar *letra). Esto causará un error de 
						asignación incorrecta de tipos, ya que no puedes asignar 
						directamente un carácter a un puntero a un carácter.*/
						*letra = caracter[iterable_two];
						break;
					}
					else
					{
						continue;
					}
				}
				

			}
			else
			{
				if (palabra[iterable] == '@' )
				{
					
					if (len-1 >= 6 && palabra[iterable+1] == 'A'|| palabra[iterable+1] == 'B' ||
					palabra[iterable+1] == 'C' || palabra[iterable+1] == 'D' || palabra[iterable+1] == 'E' ||
					palabra[iterable+1] == 'F' || palabra[iterable+1] == 'G' || palabra[iterable+1] == 'H' ||
					palabra[iterable+1] == 'I' || palabra[iterable+1] == 'J' || palabra[iterable+1] == 'K' ||
					palabra[iterable+1] == 'L' || palabra[iterable+1] == 'M' || palabra[iterable+1] == 'N' ||
					palabra[iterable+1] == 'O' || palabra[iterable+1] == 'P' || palabra[iterable+1] == 'Q' ||
					palabra[iterable+1] == 'R' || palabra[iterable+1] == 'S' || palabra[iterable+1] == 'T' ||
					palabra[iterable+1] == 'U' || palabra[iterable+1] == 'V' || palabra[iterable+1] == 'W' || 
					palabra[iterable+1] == 'X' || palabra[iterable+1] == 'Y' || palabra[iterable+1] == 'Z') 
					{ 
						break;	
					}
					else
					{
						strcpy(palabra,"numero");
						break;
					}
						
				}
				else
				{
					for (iterable_two = 0; iterable_two < len_two; iterable_two++)
					{
					
						if (palabra[iterable] == caracter_two[iterable_two])
						{
							/*En este código, hemos corregido palabra[iterable] == "'" 
							para usar comillas simples escapadas '\'', que es la forma 
							correcta de verificar si palabra[iterable] es una comilla simple en C.*/

							strcpy(palabra,"numero");
							/*El error está relacionado con la asignación de 
							un carácter a la variable letra. Estás intentando asignar un 
							carácter (caracter[iterable_two]) directamente a letra, que es 
							un puntero a un carácter (char *letra). Esto causará un error de 
							asignación incorrecta de tipos, ya que no puedes asignar 
							directamente un carácter a un puntero a un carácter.*/
							*letra = caracter_two[iterable_two];
							break;
						}
						else
						{
							continue;
						}
					}
				}	
				
				
			}
			if (palabra[iterable] == '@')
			{
				break;
			}
			if (strcmp(palabra,"numero") == 0)
			{
				break;
			}
			else
			{
				continue;
			}
		
	
		}

	}
	else
	{
		strcpy(palabra,"numero");
	}
}

void validacion_numero_telefonico(char *palabra)
{

	int iterable,numero=0;
	size_t len,len_two;
	
	len = strlen(palabra);
	if (len == 8)
	{
		for (iterable=0;iterable< len;iterable++)
		{
			if (isdigit(palabra[iterable]))
			{
				numero++;
				/*No hacemos nada*/
			}
			else
			{
				numero=0;
				break;
			}
		}
	}
	if (numero < 8)
	{
		strcpy(palabra,"numero");
	}


}

void largo(char *palabra, char *letra)
{
	size_t len=strlen(palabra);
	if (len >= 3) 
	{
		/*No hacemos nada por que tiene la longitud suficiente*/  
	}
	else
	{
		strcpy(palabra,"numero");
		*letra = 'c';
		/*c abrevacion de nombre corto*/  
	}

}

void ver_si_hay_palabras(char *palabra, char *letra)
{
	/*Para declarar un arreglo de caracteres en C que contenga todos los 
	caracteres de puntuación mencionados, debes escapar algunos de estos 
	caracteres usando una barra invertida \ antes de ellos.*/
	char caracter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZñÑ!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
	size_t len = strlen(palabra),len_two = strlen(caracter);
	int iterable,iterable_two;
	for (iterable = 0; iterable < len; iterable++)
	{
		if (palabra[0] == ' ')
		{
			strcpy(palabra,"numero");
			*letra = ' ';
			break;
		}
		for (iterable_two = 0; iterable_two < len_two; iterable_two++)
		{
			if (palabra[iterable] == caracter[iterable_two])
			{
				/*En este código, hemos corregido palabra[iterable] == "'" 
				para usar comillas simples escapadas '\'', que es la forma 
				correcta de verificar si palabra[iterable] es una comilla simple en C.*/

				strcpy(palabra,"numero");
				/*El error está relacionado con la asignación de 
				un carácter a la variable letra. Estás intentando asignar un 
				carácter (caracter[iterable_two]) directamente a letra, que es 
				un puntero a un carácter (chsar *letra). Esto causará un error de 
				asignación incorrecta de tipos, ya que no puedes asignar 
				directamente un carácter a un puntero a un carácter.*/
				*letra = caracter[iterable_two];
				break;
			}
			else
			{
				continue;
			}
		}
		if (strcmp(palabra,"numero") == 0)
		{
			break;
		}
		else
		{
			continue;
		}
	}
}

void salir()
{
	int iterable;
	
	borrar();
	
	/*printf("por seguridad cerraremos este programa");*/
	gotoxy(28,14);
	textcolor(GREEN);
	cprintf("El programa ha finalizado");
	gotoxy(31,15);
	textcolor(GREEN);
	cprintf("Gracias por usarlo");
	getch();
	exit(0);
}
