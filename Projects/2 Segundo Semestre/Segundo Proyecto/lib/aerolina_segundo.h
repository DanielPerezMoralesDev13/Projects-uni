#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>

void verficacion(int nombre_de_boletos_comprado[10][13],int position)
{
	int iterable_two;
	for (iterable_two=position;iterable_two<position+1;iterable_two++)
	{
		gotoxy(3,19);
		if (nombre_de_boletos_comprado[iterable_two][0] == 0 && nombre_de_boletos_comprado[iterable_two][1] == 0 && nombre_de_boletos_comprado[iterable_two][2] == 0)
		{
			
			cprintf("Ingrese el numero del boleto. Boletos comprados ()");
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][1] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0 )
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][1], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][1] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][1]);
			
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][1] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][1], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][0]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][1] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][1]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][2]);
		}
	}
}

void verdadero(int nombre_de_boletos_comprado[10][13],int contador_del_nombre_del_comprador)
{
	int iterable_two;
	for (iterable_two=contador_del_nombre_del_comprador-1;iterable_two<contador_del_nombre_del_comprador;iterable_two++)
	{
		gotoxy(3,19);
		if (nombre_de_boletos_comprado[iterable_two][0] == 0 && nombre_de_boletos_comprado[iterable_two][1] == 0 && nombre_de_boletos_comprado[iterable_two][2] == 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados ()");
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][1] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0 )
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][1], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][1] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][1]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][1] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][1], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][0]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][1] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][1]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][2]);
		}
	}
}

void falso(int nombre_de_boletos_comprado[10][13],int contador_del_nombre_del_comprador)
{
	int iterable_two;
	contador_del_nombre_del_comprador--;
	for (iterable_two=contador_del_nombre_del_comprador;iterable_two<contador_del_nombre_del_comprador+1;iterable_two++)
	{
		gotoxy(3,19);
		if (nombre_de_boletos_comprado[iterable_two][0] == 0 && nombre_de_boletos_comprado[iterable_two][1] == 0 && nombre_de_boletos_comprado[iterable_two][2] == 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados ()");
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][1] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0 )
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][1], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][1] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][1]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][0], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][1] != 0 && nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d, A%d)",nombre_de_boletos_comprado[iterable_two][1], nombre_de_boletos_comprado[iterable_two][2]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][0] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][0]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][1] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][1]);
		}
		else if (nombre_de_boletos_comprado[iterable_two][2] != 0)
		{
			cprintf("Ingrese el numero del boleto. Boletos comprados (A%d)",nombre_de_boletos_comprado[iterable_two][2]);
		}
	}
}

int cancelar_boletos(char lista_boletos[10][4],char *nombre,char *confirmacion,char boleto_comprado[100][4],char nombre_del_comprador[100][20],int contador_numero_boleto_len,int contador_del_nombre_del_comprador,int contador_del_comprador,int position, int verificar, int numeros_de_boletos_comprado[100][1],int nombre_de_boletos_comprado[100][13])
{
	size_t len;
	int i_two=0,pos;
	char lista_boletos_two[10][4] = 
	{
		"A1",
		"A2",
		"A3",
		"A4",
		"A5",
		"A6",
		"A7",
		"A8",
		"A9",
		"A10",
	};
	int iterable,contador=0,contador_nombre=0;
	int iterable_registro;
	int iterable_two,iterable_three,contador_de_disponibles=0;
	char boleto[4], concatenar_boleto[13]= "",segundo_concatenar_boleto[13],tercer_concatenar_boleto[13];
	contador_del_nombre_del_comprador++;
	contador_del_comprador++;
	
	for (iterable_two=contador_del_nombre_del_comprador-1;iterable_two<contador_del_comprador;iterable_two++)
	{
		strcpy(nombre_del_comprador[iterable_two],nombre);
	}
	strcpy(confirmacion," ");
	
	while (1)
	{
		for (iterable=0;iterable<10;iterable++)
		{
			if (strcmp(lista_boletos[iterable],lista_boletos_two[iterable]) == 0)
			{
				contador_de_disponibles++;
			}
			else
			{
				continue;
			}
		}
		if (contador_de_disponibles == 10)
		{
			gotoxy(25,21);
			textcolor(GREEN);
			cprintf("Ya no hay boletos para retirar");
			getch();
			return 0;
		}
		else
		{
			contador_de_disponibles=0;
		}
		strcpy(segundo_concatenar_boleto," ");
		strcpy(tercer_concatenar_boleto, " ");
		if (verificar == 1)
		{
			for (iterable_two=position;iterable_two<position+1;iterable_two++)
			{
				for (iterable_three=0;iterable_three<1;iterable_three++)
				{
					if (numeros_de_boletos_comprado[iterable_two][iterable_three] == 0)
					{
						gotoxy(25,21);
						textcolor(GREEN);
						cprintf("Ya no hay boletos que pueda retirar");
						getch();
						return 0;
					}
					else
					{
						break;
					}
				}
				break;
			}

		
		}


		system("cls");

		gotoxy(12,3);
		textcolor(CYAN);
		cprintf("Cancelar boletos (boletos comprado por %s #%d)",nombre,numeros_de_boletos_comprado[iterable_two][iterable_three]);

		gotoxy(6,5);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(22,5);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(38,5);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(54,5);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(70,5);
		textcolor(CYAN);
		cprintf("Boleto");

		
		gotoxy(6,12);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(22,12);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(38,12);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(54,12);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(70,12);
		textcolor(CYAN);
		cprintf("Boleto");

		gotoxy(2,25);
		textcolor(LIGHTGREEN);
		cprintf("Presione la letra q para regresar al menu principal");


		

		if (strcmp(lista_boletos[0], "A1") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(8,7);
			textcolor(CYAN);
			cprintf("A1");
			gotoxy(4,9);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(8,7);
			textcolor(CYAN);
			cprintf("A1");
			gotoxy(5,9);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}

		if (strcmp(lista_boletos[1], "A2") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(24,7);
			textcolor(CYAN);
			cprintf("A2");
			gotoxy(20,9);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(24,7);
			textcolor(CYAN);
			cprintf("A2");
			gotoxy(21,9);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}

		if (strcmp(lista_boletos[2], "A3") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(40,7);
			textcolor(CYAN);
			cprintf("A3");
			gotoxy(36,9);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(40,7);
			textcolor(CYAN);
			cprintf("A3");
			gotoxy(37,9);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}

		if (strcmp(lista_boletos[3], "A4") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(56,7);
			textcolor(CYAN);
			cprintf("A4");
			gotoxy(52,9);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(56,7);
			textcolor(CYAN);
			cprintf("A4");
			gotoxy(53,9);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}


		if (strcmp(lista_boletos[4], "A5") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(72,7);
			textcolor(CYAN);
			cprintf("A5");
			gotoxy(68,9);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 6);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 7);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 8);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(72,7);
			textcolor(CYAN);
			cprintf("A5");
			gotoxy(69,9);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}


		if (strcmp(lista_boletos[5], "A6") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(8,14);
			textcolor(CYAN);
			cprintf("A6");
			gotoxy(4,16);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(3+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(8,14);
			textcolor(CYAN);
			cprintf("A6");
			gotoxy(5,16);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}

		if (strcmp(lista_boletos[6], "A7") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(24,14);
			textcolor(CYAN);
			cprintf("A7");
			gotoxy(20,16);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(19+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(24,14);
			textcolor(CYAN);
			cprintf("A7");
			gotoxy(21,16);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}

		if (strcmp(lista_boletos[7], "A8") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(40,14);
			textcolor(CYAN);
			cprintf("A8");
			gotoxy(36,16);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(35+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(40,14);
			textcolor(CYAN);
			cprintf("A8");
			gotoxy(37,16);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}

		if (strcmp(lista_boletos[8], "A9") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(56,14);
			textcolor(CYAN);
			cprintf("A9");
			gotoxy(52,16);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(51+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(56,14);
			textcolor(CYAN);
			cprintf("A9");
			gotoxy(53,16);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}


		if (strcmp(lista_boletos[9], "A10") == 0)
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(72,14);
			textcolor(CYAN);
			cprintf("A10");
			gotoxy(68,16);
			textcolor(GREEN);
			cprintf("Disponible");
		}
		else
		{
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 13);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 14);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <12; iterable++)
			{

				gotoxy(67+iterable, 15);
				textcolor(WHITE);
				cprintf("%c", 219);
			}
			gotoxy(71,14);
			textcolor(CYAN);
			cprintf("A10");
			gotoxy(69,16);
			textcolor(LIGHTRED);
			cprintf("Comprado");
		}
		
		
		if (verificar == 1)
		{
			gotoxy(3,19);
			textcolor(LIGHTBLUE);
			/*(%s)",nombre_de_boletos_comprado[position]*/
			verficacion(nombre_de_boletos_comprado, position);
		}
		else
		{
			/*nada*/
		}		
		
		gotoxy(3,21);
		textcolor(LIGHTGREEN);
		cprintf(">                                                                   ");
		gotoxy(5,21);
		textcolor(LIGHTGREEN);
		fgets(boleto,sizeof(boleto),stdin);
		if (strcmp(boleto,"\n") == 0)
		{
			
		}
		else
		{
			len = strlen(boleto);
			if (len > 0 && boleto[len - 1] == '\n')
			{
				boleto[len - 1] = '\0'; 
			}
			len = strlen(boleto);
			for (iterable = 0; iterable < len; iterable++)
			{
				boleto[iterable] = toupper(boleto[iterable]);
			}
			if (strcmp(boleto,"Q") == 0)
			{
				strcpy(confirmacion,"salir");
				return 0;
			}
			else
			{
				/*comentar
				system("cls");
				for (iterable=0;iterable<10;iterable++)
				{
					
					printf("lista boletos #%d = %s\n",iterable,lista_boletos[iterable]);
					
				}
				printf("\n");
				for (iterable=0;iterable<10;iterable++)
				{
					
					printf("lista boleto_comprado #%d = %s\n",iterable,boleto_comprado[iterable]);
					
				}
				getch();*/
				for (iterable = 0;iterable < 10; iterable++)
				{
					if (strcmp(boleto, "A10") == 0) 
						{
							pos = 10;
							i_two += 1;
						} 
						else if (strcmp(boleto, "A9") == 0) 
						{
							pos = 9;
							i_two += 1;
						}
						else if (strcmp(boleto, "A8") == 0) 
						{
							pos = 8;
							i_two += 1;
						}
						else if (strcmp(boleto, "A7") == 0) 
						{
							pos = 7;
							i_two += 1;
						}
						else if (strcmp(boleto, "A6") == 0) 
						{
							pos = 6;
							i_two += 1;
						}
						else if (strcmp(boleto, "A5") == 0) 
						{
							pos = 5;
							i_two += 1;
						}
						else if (strcmp(boleto, "A4") == 0) 
						{
							pos = 4;
							i_two += 1;
						}
						else if (strcmp(boleto, "A3") == 0) 
						{
							pos = 3;
							i_two += 1;
						}
						else if (strcmp(boleto, "A2") == 0) 
						{
							pos = 2;
							i_two += 1;
						}
						else if (strcmp(boleto, "A1") == 0) 
						{
							pos = 1;
							i_two += 1;
						}
						
					if (strcmp(boleto_comprado[iterable],boleto) == 0 && nombre_de_boletos_comprado[position][0] == pos || nombre_de_boletos_comprado[position][1] == pos || nombre_de_boletos_comprado[position][2] == pos)
					{
						
						strcpy(lista_boletos[pos-1],boleto);
						/*$Aqui sobreescribimos el valor de lista boletos
						strcpy(variable_que_registra_boletos_comprados_por_usuario[iterable_two][iterable_registro],boleto);*/
						
						for (iterable_two=pos-1;iterable_two<pos;iterable_two++)
						{
							strcpy(boleto_comprado[iterable_two],"\0");
						}

						if (verificar == 1)
						{
							for (iterable_two=position;iterable_two<position+1;iterable_two++)
							{
								for (iterable_registro=0;iterable_registro<3;iterable_registro++)	
								{

									if (nombre_de_boletos_comprado[iterable_two][iterable_registro] == pos)
									{
										nombre_de_boletos_comprado[iterable_two][iterable_registro] = 0;
										gotoxy(24,23);
										textcolor(LIGHTBLUE);
										cprintf("Bien ha cancelado el boleto numero %s",boleto); 
										
										getch();
										break;
									}	
									
								}
								
							}
							for (iterable_two=position;iterable_two<position+1;iterable_two++)
							{
								for (iterable_three=0;iterable_three<1;iterable_three++)
								{
									numeros_de_boletos_comprado[iterable_two][iterable_three]--;
								}
								
							}
							/**/	
							
						}
						/*strcpy(nombre_de_boletos_comprado[iterable_two],concatenar_boleto);*/
						else
						{
							/*nada*/
						}
						
						
						contador = 0;
						break;
					}
					
					
					else
					{
						contador++;
						continue;
					}
				}
				if (contador > 0)
				{
					gotoxy(30,23);
					textcolor(LIGHTRED);
					/*Numero del boleto incorrecto*/
					cprintf("No puede cancelar ese boleto");
					getch();
				}				
			}
		}
	}

}
