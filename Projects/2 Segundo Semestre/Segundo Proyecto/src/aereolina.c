#include <libreria.h>
#include <aereolina_segundo.h>

char lista_de_comprados[100][12];
char boleto_comprado[100][4],nombre_del_comprador[100][20];
int contador_numero_boleto_len=0,contador_para_boleto=0,contador_del_nombre_del_comprador=0,contador_del_comprador=0;
int position;
int verificar;
int numeros_de_boletos_comprado[100][1]=
{
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0},
	{0}
};
int nombre_de_boletos_comprado[100][13];

int ver_si_ya_compro(char *confirmacion)
{
	int iterable,iterable_two;
	strcpy(confirmacion," ");	
	for (iterable=0;iterable<contador_del_comprador;iterable++)
	{
		if (iterable == position)
		{
			for (iterable_two=0;iterable_two<1;iterable_two++)
			{
				if (numeros_de_boletos_comprado[position][iterable_two] > 2)
				{
					strcpy(confirmacion,"si");
					return 0;
				}
			} 
		}
		else
		{
			continue;
		}
		
	}
	strcpy(confirmacion,"no");
	return 0;
}

int ver_boleto_disponibles(char lista_boletos[10][4],char *confirmacion)
{
	int iterable;
	char ver_boleto_salir[10];
	strcpy(confirmacion," ");
	borrar();
	while (1)
	{
		
		borrar();
		
		
		
		gotoxy(31,3);
		textcolor(LIGHTCYAN);
		cprintf("Boletos disponibles");

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
		
		gotoxy(3,19);
		textcolor(LIGHTBLUE);
		cprintf("Los boletos disponibles estan en verdes");

		gotoxy(3,21);
		textcolor(LIGHTGREEN);
		cprintf(">                                                                   ");
		gotoxy(5,21);
		textcolor(LIGHTGREEN);
		input(&ver_boleto_salir,sizeof(ver_boleto_salir));
		if (strcmp(ver_boleto_salir,"\n") == 0)
		{
			gotoxy(30,23);
			textcolor(LIGHTRED);
			cprintf("Presione 'q' para salir");
			getch();
		}
		else
		{
			eliminar_enter(&ver_boleto_salir);
			mayuscula(&ver_boleto_salir);
			if (strcmp(ver_boleto_salir,"Q") == 0)
			{
				
				return 0;
			}
			else
			{
				gotoxy(30,23);
				textcolor(LIGHTRED);
				cprintf("Presione 'q' para salir");
				getch();		
			}
		}
	}
	
}

int adquirir_boleto(char lista_boletos[10][4],char *nombre,char *confirmacion)
{
	int iterable,contador=0,contador_nombre=0;
	int iterable_two,iterable_three,contador_de_disponibles=0;
	char boleto[4], concatenar_boleto[13]= "",segundo_concatenar_boleto[13],tercer_concatenar_boleto[13];
	int i_two=0,iterable_registro,pos;
	
	
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
			if (strcmp(lista_boletos[iterable],"\0") == 0)
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
			cprintf("Ya no hay boletos disponibles");
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
					if (numeros_de_boletos_comprado[iterable_two][iterable_three] >= 3)
					{
						gotoxy(24,23);
						textcolor(LIGHTBLUE);
						cprintf("Ha comprado el maximo numero de boletos");
						getch();
						menu_principal(lista_boletos,confirmacion);
					}
					break;
				}
				break;
			}
		
		}
		else
		{
			
			for (iterable_two=contador_del_nombre_del_comprador-1;iterable_two<contador_del_comprador;iterable_two++)
			{
				for (iterable_three=0;iterable_three<1;iterable_three++)
				{
					if (numeros_de_boletos_comprado[iterable_two][iterable_three] >= 3)
					{
						gotoxy(24,23);
						textcolor(LIGHTBLUE);
						cprintf("Ha comprado el maximo numero de boletos");
						getch();
						menu_principal(lista_boletos,confirmacion);
					}
					break;
				}
				break;
			}
		
		}

		borrar();

		gotoxy(12,3);
		textcolor(CYAN);
		cprintf("Adquirir boletos maximos #3 (boletos comprado por %s #%d)",nombre,numeros_de_boletos_comprado[iterable_two][iterable_three]);

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
		/*(cont_name_comprador) #%d ,contador_del_nombre_del_comprador*/
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
			if (contador_del_nombre_del_comprador == 1)
			{
				
				textcolor(LIGHTBLUE);
				/*(%s)",nombre_de_boletos_comprado[contador_del_nombre_del_comprador-1]
				for (iterable_two=contador_del_nombre_del_comprador-1;iterable_two<contador_del_nombre_del_comprador+1;iterable_two++)*/
				verdadero(nombre_de_boletos_comprado,contador_del_nombre_del_comprador);
				
			}
			else
			{
				gotoxy(3,19);
				textcolor(LIGHTBLUE);
				/*(%s)",nombre_de_boletos_comprado[contador_del_nombre_del_comprador]*/
				falso(nombre_de_boletos_comprado,contador_del_nombre_del_comprador);

			}
			
		}		
		
		gotoxy(3,21);
		textcolor(LIGHTGREEN);
		cprintf(">                                                                   ");
		gotoxy(5,21);
		textcolor(LIGHTGREEN);
		input(&boleto,sizeof(boleto));
		if (strcmp(boleto,"\n") == 0)
		{
			
		}
		else
		{
			eliminar_enter(&boleto);
			mayuscula(&boleto);
			if (strcmp(boleto,"Q") == 0)
			{
				strcpy(confirmacion,"salir");
				return 0;
			}
			else
			{
				for (iterable = 0;iterable < 10; iterable++)
				{
					if (strcmp(boleto,lista_boletos[iterable]) == 0)
					{
						strcpy(lista_boletos[iterable],"\0");
						gotoxy(24,23);
						textcolor(LIGHTBLUE);
						cprintf("Bien ha comprado el boleto numero %s",boleto); 
						
						
						getch();
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
						/*strcpy(tercer_concatenar_boleto,boleto);
						strcat(tercer_concatenar_boleto,". ");
						strcat(segundo_concatenar_boleto,tercer_concatenar_boleto);
						strcat(concatenar_boleto,segundo_concatenar_boleto);*/ 
						if (verificar == 1)
						{
							for (iterable_two=position;iterable_two<position+1;iterable_two++)
							{
								for (iterable_registro=0;iterable_registro<3;iterable_registro++)	
								{
									if (nombre_de_boletos_comprado[iterable_two][iterable_registro] == 0)
									{
										nombre_de_boletos_comprado[iterable_two][iterable_registro] = pos;
										
										break;
									}
									
								}
								
							}
						}
						/*strcpy(nombre_de_boletos_comprado[iterable_two],concatenar_boleto);*/
						else
						{
							for (iterable_two=contador_del_nombre_del_comprador-1;iterable_two<contador_del_nombre_del_comprador;iterable_two++)
							{
								for (iterable_registro=0;iterable_registro<3;iterable_registro++)	
								{
									if (nombre_de_boletos_comprado[iterable_two][iterable_registro] == 0)
									{
										nombre_de_boletos_comprado[iterable_two][iterable_registro] = pos;
										break;
									}
									
								}
								
							}
						}
						
						contador_numero_boleto_len++;
						for (iterable_two=pos-1;iterable_two<pos;iterable_two++)
						{
							strcpy(boleto_comprado[iterable_two],boleto);
						}
						
						
						if (verificar == 1)
						{
							


							for (iterable_two=position;iterable_two<position+1;iterable_two++)
							{
								for (iterable_three=0;iterable_three<1;iterable_three++)
								{
									numeros_de_boletos_comprado[iterable_two][iterable_three]++;
								}
								
							}
							
						}
						else
						{
							for (iterable_two=contador_del_nombre_del_comprador-1;iterable_two<contador_del_comprador;iterable_two++)
							{
								for (iterable_three=0;iterable_three<1;iterable_three++)
								{
									numeros_de_boletos_comprado[iterable_two][iterable_three]++;
								}
								
							}
						}
						
						
						contador_para_boleto++;
						
						
						contador = 0;
						break;
					}
					
					else if (strcmp(boleto,boleto_comprado[iterable]) == 0)
					{
						gotoxy(24,23);
						textcolor(LIGHTRED);
						cprintf("El boleto ya ha sido comprado");
						getch();
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
					cprintf("Numero del boleto incorrecto");
					getch();
				}				
			}
		}
	}
	
}

int adquirir_numero(char lista_boletos[10][4],char *nombre,char *apellido,char *correo,char *confirmacion)
{
	char numero[10],letra;
    int iterable;
	strcpy(confirmacion," ");
    borrar();
    for (iterable = 0; iterable <2059; iterable++)
    {
		if (iterable == -1)
		{
			
		}
        
		else if (iterable == 432)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 565)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 698)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 831)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		
		else if (iterable > 2051 && iterable < 2059)
		{
			
		}
        else
        {
            textcolor(BLACK);
            cprintf("%c",219);
        }
    }
	textcolor(WHITE);
	gotoxy(6,3);
	cprintf("Pon tus dos nombres aqui: ");

	textcolor(WHITE);
	gotoxy(6,5);
    cprintf("Ingresa tu apellido: ");

	textcolor(WHITE);
	gotoxy(6,7);
	cprintf("Correo electronico: ");

	textcolor(GREEN);
	gotoxy(34,3);
	cprintf("%s",nombre);

	textcolor(GREEN);
	gotoxy(34,5);
	cprintf("%s",apellido);

	textcolor(GREEN);
	gotoxy(34,7);
	cprintf("%s",correo);


	textcolor(WHITE);
	gotoxy(6,9);
	cprintf("Numero telefonico: ");
	
	gotoxy(2,25);
	textcolor(LIGHTGREEN);
	cprintf("Presione la letra q para regresar al menu principal");
	
	textcolor(CYAN);
	gotoxy(34,9);
    scanf("%s",numero);
	if (strcmp(numero,"\n") == 0)
	{
		gotoxy(15,13);
		textcolor(GREEN);
		strcpy(numero,"Enter");
		cprintf("Caracter invalido: '%s'. Ingrese nuevamente su numero",numero);
		getch();
		adquirir_numero(lista_boletos,nombre,apellido,correo,confirmacion);
	}
	else
	{
		eliminar_enter(&numero);
		mayuscula(&numero);
		if (strcmp(numero,"Q") == 0)
		{
				
			strcpy(confirmacion,"salir");
			return 0;
		}
		validacion_numero_telefonico(&numero);
		if (strcmp(numero,"numero") == 0)
		{
			gotoxy(12,13);
			textcolor(GREEN);
			if (letra == ' ')
			{
				strcpy(numero,"Espacio");
				cprintf("Caracter invalido: '%s'. Ingrese nuevamente su numero",numero);
			}
			else
			{
				gotoxy(15,13);
				textcolor(GREEN);
				cprintf("Error. Recuerde ingresar correctamente 8 numeros.");
				gotoxy(24,14);
				textcolor(GREEN);
				cprintf("Ingrese nuevamente su numero");
			}
			
			getch();
			adquirir_numero(lista_boletos,nombre,apellido,correo,confirmacion);
		}
		else
		{
			verificar = 0;
			adquirir_boleto(lista_boletos,nombre,confirmacion);
			
			if (strcmp(confirmacion,"salir") == 0)
			{
				menu_principal(lista_boletos,confirmacion);
			}
			

		}
	}
	
    	
}

void adquirir_correo(char lista_boletos[10][4],char *nombre,char *apellido,char *confirmacion)
{
	char correo[25],letra;
    int iterable;
	strcpy(confirmacion," ");
    borrar();
    for (iterable = 0; iterable <2059; iterable++)
    {
		if (iterable == -1)
		{
			
		}
        
		else if (iterable == 432)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 565)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 698)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 831)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable > 2051 && iterable < 2059)
		{
			
		}
        else
        {
            textcolor(BLACK);
            cprintf("%c",219);
        }
    }
	textcolor(WHITE);
	gotoxy(6,3);
	cprintf("Pon tus dos nombres aqui: ");

	textcolor(WHITE);
	gotoxy(6,5);
    cprintf("Ingresa tu apellido: ");

	textcolor(WHITE);
	gotoxy(6,7);
	cprintf("Correo electronico: ");

	textcolor(GREEN);
	gotoxy(34,3);
	cprintf("%s",nombre);

	textcolor(GREEN);
	gotoxy(34,5);
	cprintf("%s",apellido);

	textcolor(WHITE);
	gotoxy(6,9);
	cprintf("Numero telefonico: ");
	
	gotoxy(2,25);
	textcolor(LIGHTGREEN);
	cprintf("Presione la letra q para regresar al menu");

	textcolor(CYAN);
	gotoxy(34,7);
    input(&correo,sizeof(correo));
	if (strcmp(correo,"\n") == 0)
	{
		gotoxy(15,13);
		textcolor(GREEN);
		strcpy(correo,"Enter");
		cprintf("Caracter invalido: '%s'. Ingrese nuevamente su correo",correo);
		getch();
		adquirir_correo(lista_boletos,nombre,apellido,confirmacion);
	}
	else
	{
		
		eliminar_enter(&correo);
		mayuscula(&correo);
		if (strcmp(correo,"Q") == 0)
		{
				
			strcpy(confirmacion,"salir");
			return 0;
		}
		
		ver_si_hay_correo(&correo,&letra);
		if (strcmp(correo,"numero") == 0)
		{
			gotoxy(12,13);
			textcolor(GREEN);
			if (letra == ' ')
			{
				strcpy(correo,"Espacio");
				cprintf("Caracter invalido: '%s'. Ingrese nuevamente su correo",correo);
			}
			else
			{
				gotoxy(5,13);
				textcolor(GREEN);
				cprintf("Correo incorrecto: Recuerde ingresar el '@' + dominio + .com o .edu o .ni");
						
				gotoxy(5,14);
				textcolor(GREEN);
				cprintf("Ingrese nuevamente su correo las extension de dominio son .com, .edu, .ni");
			}
			
			getch();
			adquirir_correo(lista_boletos,nombre,apellido,confirmacion);
		}
		else
		{
			adquirir_numero(lista_boletos,nombre,apellido,correo,confirmacion);
			if (strcmp(confirmacion,"salir") == 0 || strcmp(confirmacion,"SALIR") == 0  )
			{
				adquirir_correo(lista_boletos,nombre,apellido,confirmacion);
			}
		}
	}
	
    	
}

int adquirir_apellido(char lista_boletos[10][4],char *nombre,char *confirmacion)
{
	char apellido[20],letra;
    int iterable;
	strcpy(confirmacion," ");
    borrar();
    for (iterable = 0; iterable <2059; iterable++)
    {
		if (iterable == -1)
		{
			
		}
        
		else if (iterable == 432)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 565)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 698)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 831)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		
		else if (iterable > 2051 && iterable < 2059)
		{
			
		}
        else
        {
            textcolor(BLACK);
            cprintf("%c",219);
        }
    }
	textcolor(WHITE);
	gotoxy(6,3);
	cprintf("Pon tus dos nombres aqui: ");

	textcolor(WHITE);
	gotoxy(6,5);
    cprintf("Ingresa tu apellido: ");

	textcolor(WHITE);
	gotoxy(6,7);
	cprintf("Correo electronico: ");

	textcolor(GREEN);
	gotoxy(34,3);
	cprintf("%s",nombre);

	textcolor(WHITE);
	gotoxy(6,9);
	cprintf("Numero telefonico: ");
	
	gotoxy(2,25);
	textcolor(LIGHTGREEN);
	cprintf("Presione la letra q para regresar al menu");

	textcolor(CYAN);
	gotoxy(34,5);
    input(&apellido,sizeof(apellido));

	if (strcmp(apellido,"\n") == 0)
	{
		gotoxy(15,13);
		textcolor(GREEN);
		strcpy(apellido,"Enter");
		cprintf("Caracter invalido: '%s'. Ingrese nuevamente su apellido",apellido);
		getch();
		adquirir_apellido(lista_boletos,nombre,confirmacion);
	}
	else
	{
		
		eliminar_enter(&apellido);
		mayuscula(&apellido);
		if (strcmp(apellido,"Q") == 0)
		{
				
			strcpy(confirmacion,"salir");
			return 0;
		}
		ver_si_hay_numeros(&apellido,&letra);
		ver_si_hay_signos(&apellido,&letra);
		largo(&apellido,&letra);
		if (strcmp(apellido,"numero") == 0)
		{
			gotoxy(12,13);
			textcolor(GREEN);
			if (letra == ' ')
			{
				strcpy(apellido,"Espacio");
				cprintf("Caracter invalido: '%s'. Ingrese nuevamente su apellido",apellido);
			}
			else if (letra == 'c')
			{
				gotoxy(15,13);
				textcolor(GREEN);
				cprintf("Apellido muy corto. Ingrese minimo tres caracteres");
				gotoxy(24,14);
				textcolor(GREEN);
				cprintf("Ingrese nuevamente su Apellido");
			}
			else
			{
				gotoxy(15,13);
				textcolor(GREEN);
				cprintf("Caracter invalido: Evite ingresar numeros (0-9).");
				gotoxy(24,14);
				textcolor(GREEN);
				cprintf("Ingrese nuevamente su apellido");
			}
			
			getch();
			adquirir_apellido(lista_boletos,nombre,confirmacion);
		}
		else
		{
			adquirir_correo(lista_boletos,nombre,apellido,confirmacion);
			if (strcmp(confirmacion,"salir") == 0 || strcmp(confirmacion,"SALIR") == 0 )
			{
				adquirir_apellido(lista_boletos,nombre,confirmacion);
			}
			

		}
	}
	
    	
}

int adquirir_nombre(char lista_boletos[10][4],char *confirmacion)
{
	char usuario[20],letra;
    int iterable;
	strcpy(confirmacion," ");
    borrar();
    for (iterable = 0; iterable <2059; iterable++)
    {
        if (iterable == 485)
        {
            textcolor(WHITE);
            cprintf("Pon tus dos nombres aqui: ");
        }
        else if (iterable == 487)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
        else if (iterable == 593)
        {
            textcolor(WHITE);
            cprintf("Ingresa tu apellido: ");
        }
        else if (iterable == 600)
        {
            textcolor(GREEN);
            cprintf("                            ");
        }
		else if (iterable == 706)
		{
			textcolor(WHITE);
            cprintf("Correo electronico: ");
		}
		else if (iterable == 714)
		{	textcolor(GREEN);
			cprintf("                            ");
		}
		else if (iterable == 820)
		{
			textcolor(WHITE);
            cprintf("Numero telefonico: ");
		}
		else if (iterable == 829)
		{	textcolor(GREEN);
			cprintf("                            ");
		}
		else if (iterable > 2049 && iterable < 2059)
		{
			
		}
        else
        {
            textcolor(BLACK);
            cprintf("%c",219);
        }
    }
	gotoxy(2,25);
	textcolor(LIGHTGREEN);
	cprintf("Presione la letra q para regresar al menu");

    gotoxy(34,3);
    input(&usuario,sizeof(usuario));
	
	
	if (strcmp(usuario,"\n") == 0)
	{
		gotoxy(15,13);
		textcolor(GREEN);
		strcpy(usuario,"Enter");
		cprintf("Caracter invalido: '%s'. Ingrese nuevamente su nombre",usuario);
		getch();
		adquirir_nombre(lista_boletos,confirmacion);
	}
	else
	{
		
		eliminar_enter(&usuario);
		mayuscula(&usuario);
		if (strcmp(usuario,"Q") == 0)
		{
				
			strcpy(confirmacion,"salir");
			return 0;
		}
		ver_si_hay_numeros(&usuario,&letra);
		ver_si_hay_signos(&usuario,&letra);
		largo(&usuario,&letra);
		if (strcmp(usuario,"numero") == 0)
		{
			gotoxy(12,13);
			textcolor(GREEN);
			if (letra == ' ')
			{
				strcpy(usuario,"Espacio");
				cprintf("Caracter invalido: '%s'. Ingrese nuevamente su nombre",usuario);
			}
			else if (letra == 'c')
			{
				gotoxy(15,13);
				textcolor(GREEN);
				cprintf("Nombre muy corto. Ingrese minimo tres caracteres");
				gotoxy(24,14);
				textcolor(GREEN);
				cprintf("Ingrese nuevamente su nombre");
			}
			else
			{
				gotoxy(15,13);
				textcolor(GREEN);
				cprintf("Caracter invalido: Evite ingresar numeros (0-9).");
				gotoxy(24,14);
				textcolor(GREEN);
				cprintf("Ingrese nuevamente su nombre");
			}
			
			getch();
			adquirir_nombre(lista_boletos,confirmacion);
		}
		else
		{

			for (iterable=0;iterable<contador_del_comprador;iterable++)
			{
				
				if (strcmp(usuario,nombre_del_comprador[iterable]) == 0)
				{
					gotoxy(10,13);
					textcolor(LIGHTRED);
					cprintf("Ya hay un usuario con ese nombre en el sistema ingrese otro nombre");
					getch();
					adquirir_nombre(lista_boletos,confirmacion);
					return 0;
				}
				else
				{
					continue;
				}
			}
			adquirir_apellido(lista_boletos,usuario,confirmacion);
			
			
			if (strcmp(confirmacion,"salir") == 0 || strcmp(confirmacion,"SALIR") == 0 )
			{
				adquirir_nombre(lista_boletos,confirmacion);
			}
			else
			{
				/*Nada*/
			}
			

		}
	}
	
    	
}

int dquirir_usuario(char *nombre,char *confirmacion)
{
	char opcion[20];
	/*size_t len;*/
	int iterable;
	strcpy(confirmacion," ");
	
	if (contador_del_nombre_del_comprador == 0)
	{
		gotoxy(21,13);
		textcolor(LIGHTRED);
		cprintf("El sistema no tiene registro de clientes aun");
		getch();
		return 0;
	}
	borrar();
	while (1)
	{
		borrar();

		gotoxy(16,5);
		textcolor(CYAN);
		cprintf("Ingresa tu ID (Nombre) de usuario ");

		gotoxy(2,25);
		textcolor(LIGHTGREEN);
		cprintf("Presione la letra q para regresar al menu principal");

		gotoxy(16,7);
		textcolor(LIGHTGREEN);
		cprintf(">                                                                   ");
		gotoxy(18,7);
		textcolor(LIGHTGREEN);
		input(&opcion,sizeof(opcion));
		eliminar_enter(&opcion);
		mayuscula(&opcion);

		if (strcmp(opcion,"Q") == 0)
		{
			return 0;
		}
		for (iterable=0;iterable<contador_del_comprador;iterable++)
		{
			/*Lo que hacemos aqui es aqui es asignarle al
			array nombre_del_comprador el nombre xd*/
			if (strcmp(opcion,nombre_del_comprador[iterable]) == 0)
			{
				position = iterable;
				ver_si_ya_compro(&confirmacion);
				if (strcmp(confirmacion,"si") == 0)
				{
				}
				else
				{
					strcpy(nombre,opcion);
					gotoxy(31,13);
					textcolor(LIGHTBLUE);
					cprintf("ID correcto");
					getch();
					verificar = 1;
					return 0;
				}
				
			}
			else
			{
				continue;
			}
		}
		gotoxy(31,13);
		textcolor(LIGHTRED);
		cprintf("ID incorrecto");
	
	getch();
		

	}
}

int adquirir_cliente(char *nombre,char *confirmacion)
{
	char opcion;
	/*size_t len;*/
	int iterable;
	strcpy(confirmacion," ");
	borrar();
	while (1)
	{
		borrar();
		
		
		gotoxy(16,5);
		textcolor(WHITE);
		cprintf("1. ");
		textcolor(CYAN);
		cprintf("Crear ID para usuario");

		gotoxy(16,7);
		textcolor(WHITE);
		cprintf("2. ");
		textcolor(CYAN);
		cprintf("Si ya tienes ID selecciona esta opcion");
		
		gotoxy(16,9);
		textcolor(CYAN);
		cprintf("Ingrese un numero segun la accion que desea realizar");
		
		gotoxy(2,25);
		textcolor(LIGHTGREEN);
		cprintf("Presione la letra q para regresar al menu principal");

		gotoxy(16,11);
		textcolor(LIGHTGREEN);
		cprintf("> ");

		opcion = getch();

		textcolor(LIGHTGREEN);
		cprintf("%c",opcion);
		getch();

		switch (opcion)
		{
		case 'q':
			return 0;
			break;
		case '1':
			strcpy(confirmacion,"for");
			/*adquirir_nombre sirve para llevarlo
			al formulario*/
			return 0;
			break;
		case '2':
			strcpy(confirmacion,"lo");
			/*login sirve para logearlo*/
			return 0;
			break;
		default:
			gotoxy(19,13);
			textcolor(GREEN);
			cprintf("Error Recuerde ingresar un opcion del 1 al 2");
			getch();
			break;
		}
	}
}

int menu_principal(char lista_boletos[10][4],char *confirmacion)
{
	char opcion,nombre[20];
	/*size_t len;*/
	int iterable,contador = 0;
	strcpy(confirmacion," ");
	borrar();
	while (1)
	{
		borrar();
		
		
		gotoxy(16,5);
		
		textcolor(WHITE);
		cprintf("1. ");
		textcolor(CYAN);
		cprintf("Presentacion");

		gotoxy(16,7);
		textcolor(WHITE);
		cprintf("2. ");
		textcolor(CYAN);
		cprintf("Adquirir boletos");

		gotoxy(16,9);
		textcolor(WHITE);
		cprintf("3. ");
		textcolor(CYAN);
		cprintf("Cancelar boletos");

		gotoxy(16,11);
		textcolor(WHITE);
		cprintf("4. ");
		textcolor(CYAN);
		cprintf("Ver boletos disponibles");

		gotoxy(16,13);
		textcolor(WHITE);
		cprintf("5. ");
		textcolor(CYAN);
		cprintf("Salir");

		gotoxy(16,15);
		textcolor(CYAN);
		cprintf("Ingrese un numero segun la accion que desea realizar");
		
		gotoxy(16,17);
		textcolor(LIGHTGREEN);
		cprintf("> ");

		opcion = getch();

		textcolor(LIGHTGREEN);
		cprintf("%c",opcion);
		getch();
		
		
		switch (opcion)
		{
			/*
			La función ya espera un puntero, por lo que no necesitas tomar la
			dirección nuevamente. Aquí tienes cómo debería ser la llamada a
			la función */
			case '1':
				presentacion();
				break;
			case '2':
				contador = 0;
				for (iterable=0;iterable<10;iterable++)
				{
					if (strcmp(lista_boletos[iterable],"\0") == 0)
					{
						contador++;
					}
					else
					{
						continue;
					}
				}
				if (contador == 10)
				{
					gotoxy(25,21);
					textcolor(GREEN);
					cprintf("Ya no hay boletos disponibles");
					getch();
					contador = 0;
					break;
				}
				
				adquirir_cliente(nombre,confirmacion);
				if (strcmp(confirmacion,"for") == 0)
				/*For-formulario*/
				{
					adquirir_nombre(lista_boletos,confirmacion);
				}
				else if (strcmp(confirmacion,"lo") == 0)
				/*Lo-login*/
				{
					dquirir_usuario(nombre,confirmacion);
					for (iterable=0;iterable<contador_del_comprador;iterable++)
					{
						/*Lo que hacemos aqui es aqui es asignarle al
						array nombre_del_comprador el nombre xd*/
						if (strcmp(nombre,nombre_del_comprador[iterable]) == 0)
						{
							adquirir_boleto(lista_boletos,nombre,confirmacion);
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
					/*No hacemos nada presiono q el usuario*/
				}
					
				
				break;
			case '3':
				/*cancelar_boletos();*/
				contador = 0;
				for (iterable=0;iterable<10;iterable++)
				{
					if (strcmp(lista_boletos[iterable],"\0") == 0)
					{
						
					}
					else
					{
						contador++;
						continue;
					}
				}
				if (contador == 10)
				{
					gotoxy(25,21);
					textcolor(GREEN);
					cprintf("No hay boletos para retirar aun");
					getch();
					contador = 0;
					break;
				}
				dquirir_usuario(nombre,confirmacion);
				for (iterable=0;iterable<contador_del_comprador;iterable++)
				{
					
					if (strcmp(nombre,nombre_del_comprador[iterable]) == 0)
					{
						cancelar_boletos(lista_boletos,nombre,confirmacion,boleto_comprado,nombre_del_comprador,contador_numero_boleto_len,contador_del_nombre_del_comprador,contador_del_comprador,position, verificar, numeros_de_boletos_comprado,nombre_de_boletos_comprado);
						break;
					}
					else
					{
						continue;
					}
				}
				
				break;
			case '4':
				/*ver_boletos_disponibles();*/
				contador = 0;
				for (iterable=0;iterable<10;iterable++)
				{
					if (strcmp(lista_boletos[iterable],"\0") == 0)
					{
						contador++;
					}
					else
					{
						continue;
					}
				}
				if (contador == 10)
				{
					gotoxy(25,21);
					textcolor(GREEN);
					cprintf("Ya no hay boletos disponibles");
					getch();
					contador = 0;
					break;
				}
				ver_boleto_disponibles(lista_boletos,confirmacion);
				break;
			case '5':
				salir();
			default:
				gotoxy(13,21);
				textcolor(GREEN);
				cprintf("Error Recuerde ingresar un dato dentro del rango del 1 al 5");
				getch();
				break;
		}


	}
		
}

int main()
{
    char *user, *password,preguntar[10],name[]="daniel benjamin",apellido[]="perez morales",correo[]="daniel@gmail.com",numero[]="12345678",confirmacion[5];
	int iterable;
	char lista_boletos[10][4] = 
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
	/*size_t len;
	logo();
	inicio();
    borrar();
    printf("1 = %lf, 2 = %lf\n", sueldo_daniel, sueldo_ernesto);*/
	borrar();

	menu_principal(lista_boletos,confirmacion);
	
	
    user = usuario();
    if (user != NULL)
    {
        borrar();
        password = contrasena(user);
        if (strcmp(user, "daniel") == 0 && strcmp(password, "123") == 0)
        {
            printf("%s: %s ", user,password);

			menu_principal(&lista_boletos,confirmacion);
			if (confirmacion == '6')
			{
				main();
			}
        }
        else if (strcmp(user, "ernesto") == 0 && strcmp(password, "000") == 0)
        {
            printf("%s: %s ", user,password);
			menu_principal(&lista_boletos,confirmacion);
			if (confirmacion == '6')
			{
				main();
			}

			
        }
        else
        {
			borrar();
			for (iterable = 0; iterable <2080; iterable++)
			{
				textcolor(BLACK);
				cprintf("%c", 219);
			}

			for (iterable = 0; iterable <30; iterable++)
			{

				gotoxy(25+iterable, 13);
				textcolor(BLACK);
				cprintf("%c", 219);
			}
			for (iterable = 0; iterable <30; iterable++)
			{

				gotoxy(25+iterable, 14);
				textcolor(BLACK);
				cprintf("%c", 219);

			}
			for (iterable = 0; iterable <30; iterable++)
			{

				gotoxy(25+iterable, 15);
				textcolor(BLACK);
				cprintf("%c", 219);

			}
			for (iterable = 0; iterable <30; iterable++)
			{

				gotoxy(25+iterable, 16);
				textcolor(BLACK);
				cprintf("%c", 219);

			}
			/*printf("por seguridad cerraremos este programa");*/
			gotoxy(28,14);
			textcolor(GREEN);
			cprintf("por seguridad cerraremos");
			gotoxy(34,15);
			textcolor(GREEN);
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
			textcolor(BLACK);
			cprintf("%c", 219);
		}

		for (iterable = 0; iterable <30; iterable++)
    	{

			gotoxy(25+iterable, 13);
			textcolor(BLACK);
			cprintf("%c", 219);

    	}
		for (iterable = 0; iterable <30; iterable++)
    	{

			gotoxy(25+iterable, 14);
			textcolor(BLACK);
			cprintf("%c", 219);

    	}
		for (iterable = 0; iterable <30; iterable++)
    	{

			gotoxy(25+iterable, 15);
			textcolor(BLACK);
			cprintf("%c", 219);

    	}
		for (iterable = 0; iterable <30; iterable++)
    	{

			gotoxy(25+iterable, 16);
			textcolor(BLACK);
			cprintf("%c", 219);

    	}
        /*printf("por seguridad cerraremos este programa");*/
        gotoxy(28,14);
		textcolor(GREEN);
		cprintf("por seguridad cerraremos");
		gotoxy(34,15);
		textcolor(GREEN);
		cprintf("este programa");
		getch();
        exit(0);
    }
	if (strcmp(confirmacion,"salir") == 0)
	{
		main();
	}
	
}