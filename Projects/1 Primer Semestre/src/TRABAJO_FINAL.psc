Algoritmo Cajero
	Escribir "";
	Escribir "                      / ================/|";
	Escribir "                     /                 / |";
	Escribir "                    /     CAJERO      /  |";
	Escribir "                   /      UNI-IES    /   |";
	Escribir "                  /                 /    |";
	Escribir "                 | ================ |    |";
	Escribir "                 |                  |    |";
	Escribir "                 |                  |    |";
	Escribir "                 |                  |    |";
	Escribir "                 |                  |    |";
	Escribir "                 |                  |    |";
	Escribir "                 |                  |    /";
	Escribir "                 |                  |   /";
	Escribir "                 |                  |  /";
	Escribir "                 |                  | /";
	Escribir "                 | ================ |/";
	Escribir"";
	Esperar 2 Segundos;
	Escribir"Presion cualquier tecla";
	Esperar Tecla;
	Borrar Pantalla;
	Definir contador_de_usuarios,contador_de_contraseñas, Menu como real;
	Definir usuario, contraseña, contraseña_original_daniel,contraseña_original_ernesto,contraseña_original_zair, usuario_original_ernesto,usuario_original_daniel,usuario_original_zair como caracter;
	definir universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha,transaccion Como Caracter;
	Definir  Menu_de_saldo, saldo_de_la_cuenta,retirar_saldo_de_la_cuenta, ingresar_saldo_de_la_cuenta,saldo_a_recargar Como real;
	Definir recarga,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,numero_telefonico Como Caracter;
	definir confirmacion_si_hay_letra Como Caracter;
	Definir saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair como real;
	saldo_de_la_cuenta = 0;
	saldo_de_la_cuenta_daniel = 0;
    saldo_de_la_cuenta_ernesto = 0;
	saldo_de_la_cuenta_zair = 0;
	confirmacion_si_hay_letra = "";
	numero_telefonico = "";
	saldo_a_recargar = 10;
	numero_telefonico_daniel_tigo = "77889650";
	numero_telefonico_ernesto_tigo = "12345678";
	numero_telefonico_zair_tigo = "87654321";
	
	numero_telefonico_daniel_claro = "77889650";
	numero_telefonico_ernesto_claro = "12345678";
	numero_telefonico_zair_claro = "87654321";
	
	recarga = "TIGO";
	ingresar_saldo_de_la_cuenta = 10;
	retirar_saldo_de_la_cuenta = 10;
	//saldo_de_la_cuenta = 1000;
	Menu_de_saldo = 0;
	transaccion = "";
	universidad = "UNI-IES";
	carrera = "INGENIERIA EN COMPUTACION";
	nombre_daniel = "Daniel";
	nombre_ernesto = "Ernesto";
	nombre_zair = "Zair";
	carnet_daniel = "2023-0798I";
	carnet_ernesto = "2023-xxxxx";
	carnet_zair = "2023-xxxxxx";
	grupo = "1M2";
	nombre_del_profesor = "";
	Fecha = "08-06-2023";
	Menu = 0;
	contador_de_usuarios = 0; 
	contador_de_contraseñas = 0;
	usuario_original_daniel = "Daniel_Perez13";
	usuario_original_ernesto = "Ernesto";
	usuario_original_zair = "zair";
	contraseña_original_daniel = "Ingeniero_en_computacion";
	contraseña_original_ernesto = "ingeniero";
	contraseña_original_zair = "otro ingeniero";
	usuario = "";
	contraseña = "";
	//pedimos la contraseña al usuario
	usuario = Pedir_usuario(usuario,usuario_original_daniel,usuario_original_ernesto,usuario_original_zair,contador_de_usuarios);
	si usuario <> usuario_original_daniel y usuario <> usuario_original_ernesto y usuario <> usuario_original_zair Entonces  
		Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
		Escribir "*                                             *";
		Escribir "*                                             *";
		Escribir "*           Por motivos de seguridad          *";
		Escribir "*            el programa se bloqueara         *";
		Escribir "*                                             *";
		Escribir "*                                             *";
		Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
	FinSi
	si usuario = usuario_original_daniel o usuario = usuario_original_ernesto o usuario = usuario_original_zair Entonces  
		//En dado caso que el usuario sea valido hacemos la funcion Pedir_contraseña
		contraseña = Pedir_contraseña(contraseña,contador_de_contraseñas,contraseña_original_daniel,contraseña_original_ernesto,contraseña_original_zair,usuario,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair);
		si contraseña <> contraseña_original_daniel y contraseña <> contraseña_original_ernesto y contraseña <> contraseña_original_zair Entonces
			Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
			Escribir "*                                             *";
			Escribir "*                                             *";
			Escribir "*           Por motivos de seguridad          *";
			Escribir "*            el programa se bloqueara         *";
			Escribir "*                                             *";
			Escribir "*                                             *";
			Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
		FinSi
	FinSi
	si usuario = usuario_original_daniel y contraseña = contraseña_original_daniel Entonces
		//Si en dado caso usuario y contraseña sean validos vamos a preguntarle al usuario que desea hacer
		Menu = Menu_principal(Menu,universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha, transaccion,Menu_de_saldo,saldo_de_la_cuenta,retirar_saldo_de_la_cuenta,ingresar_saldo_de_la_cuenta,recarga,saldo_a_recargar,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair,usuario,numero_telefonico,confirmacion_si_hay_letra, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
	sino si usuario = usuario_original_ernesto y contraseña = contraseña_original_ernesto Entonces
		Menu = Menu_principal(Menu,universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha, transaccion,Menu_de_saldo,saldo_de_la_cuenta,retirar_saldo_de_la_cuenta,ingresar_saldo_de_la_cuenta,recarga,saldo_a_recargar,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair,usuario,numero_telefonico,confirmacion_si_hay_letra, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
	sino si usuario = usuario_original_zair y contraseña = contraseña_original_zair
		Menu = Menu_principal(Menu,universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha, transaccion,Menu_de_saldo,saldo_de_la_cuenta,retirar_saldo_de_la_cuenta,ingresar_saldo_de_la_cuenta,recarga,saldo_a_recargar,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair,usuario,numero_telefonico,confirmacion_si_hay_letra, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
	FinSi
	FinSi	
	FinSi
FinAlgoritmo
SubAlgoritmo transaccion = preguntar_al_usuario(transaccion)
	Repetir
		Escribir "Desea realizar otra transaccion (SI/NO) ";
		leer transaccion;
		transaccion = Mayusculas(transaccion);	
		si transaccion <> "SI" y  transaccion <> "NO" Entonces
			escribir "LA OPCION QUE ELIGIO NO ES VALIDA (SI/NO)";
			Esperar 2 Segundos;
			Borrar Pantalla;
		FinSi
	Hasta Que transaccion = "SI" O  transaccion = "NO"	
Fin SubAlgoritmo
SubAlgoritmo otra_transaccion (saldo_de_la_cuenta, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair)
	Esperar 2 Segundos;
	Borrar Pantalla;
	Definir contador_de_usuarios,contador_de_contraseñas, Menu como real;
	Definir usuario, contraseña, contraseña_original_daniel,contraseña_original_ernesto,contraseña_original_zair, usuario_original_ernesto,usuario_original_daniel,usuario_original_zair como caracter;
	definir universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha,transaccion Como Caracter;
	Definir  Menu_de_saldo, retirar_saldo_de_la_cuenta, ingresar_saldo_de_la_cuenta,saldo_a_recargar Como real;
	Definir recarga,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,numero_telefonico Como Caracter;
	definir confirmacion_si_hay_letra Como Caracter;
	saldo_de_la_cuenta = 0;
	confirmacion_si_hay_letra = "";
	numero_telefonico = "";
	saldo_a_recargar = 10;
	numero_telefonico_daniel_tigo = "77889650";
	numero_telefonico_ernesto_tigo = "12345678";
	numero_telefonico_zair_tigo = "87654321";
	
	numero_telefonico_daniel_claro = "77889650";
	numero_telefonico_ernesto_claro = "12345678";
	numero_telefonico_zair_claro = "87654321";
	
	recarga = "TIGO";
	ingresar_saldo_de_la_cuenta = 10;
	retirar_saldo_de_la_cuenta = 10;
	//	saldo_de_la_cuenta = 1000;
	Menu_de_saldo = 0;
	transaccion = "";
	universidad = "UNI-IES";
	carrera = "INGENIERIA EN COMPUTACION";
	nombre_daniel = "Daniel";
	nombre_ernesto = "Ernesto";
	nombre_zair = "Zair";
	carnet_daniel = "2023-0798I";
	carnet_ernesto = "2023-xxxxx";
	carnet_zair = "2023-xxxxxx";
	grupo = "1M2";
	nombre_del_profesor = "";
	Fecha = "08-06-2023";
	Menu = 0;
	contador_de_usuarios = 0; 
	contador_de_contraseñas = 0;
	usuario_original_daniel = "Daniel_Perez13";
	usuario_original_ernesto = "Ernesto";
	usuario_original_zair = "zair";
	contraseña_original_daniel = "Ingeniero_en_computacion";
	contraseña_original_ernesto = "ingeniero";
	contraseña_original_zair = "otro ingeniero";
	usuario = "";
	contraseña = "";
	//pedimos el nombre al usuario
	usuario = Pedir_usuario(usuario,usuario_original_daniel,usuario_original_ernesto,usuario_original_zair,contador_de_usuarios);
	si usuario <> usuario_original_daniel y usuario <> usuario_original_ernesto y usuario <> usuario_original_zair Entonces  
		Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
		Escribir "*                                             *";
		Escribir "*                                             *";
		Escribir "*           Por motivos de seguridad          *";
		Escribir "*            el programa se bloqueara         *";
		Escribir "*                                             *";
		Escribir "*                                             *";
		Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
	FinSi
	si usuario = usuario_original_daniel o usuario = usuario_original_ernesto o usuario = usuario_original_zair Entonces  
		//En dado caso que el usuario sea valido hacemos la funcion Pedir_contraseña
		contraseña = Pedir_contraseña(contraseña,contador_de_contraseñas,contraseña_original_daniel,contraseña_original_ernesto,contraseña_original_zair,usuario,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair);
		si contraseña <> contraseña_original_daniel y contraseña <> contraseña_original_ernesto y contraseña <> contraseña_original_zair Entonces
			Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
			Escribir "*                                             *";
			Escribir "*                                             *";
			Escribir "*           Por motivos de seguridad          *";
			Escribir "*            el programa se bloqueara         *";
			Escribir "*                                             *";
			Escribir "*                                             *";
			Escribir "* * * * * * * * * * * * * * * * * * * * * * * *";
		FinSi
	FinSi
	si usuario = usuario_original_daniel y contraseña = contraseña_original_daniel Entonces
		//Si en dado caso usuario y contraseña sean validos vamos a preguntarle al usuario que desea hacer
		Menu = Menu_principal(Menu,universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha, transaccion,Menu_de_saldo,saldo_de_la_cuenta,retirar_saldo_de_la_cuenta,ingresar_saldo_de_la_cuenta,recarga,saldo_a_recargar,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair,usuario,numero_telefonico,confirmacion_si_hay_letra, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
	sino si usuario = usuario_original_ernesto y contraseña = contraseña_original_ernesto Entonces
		Menu = Menu_principal(Menu,universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha, transaccion,Menu_de_saldo,saldo_de_la_cuenta,retirar_saldo_de_la_cuenta,ingresar_saldo_de_la_cuenta,recarga,saldo_a_recargar,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair,usuario,numero_telefonico,confirmacion_si_hay_letra, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
	sino si usuario = usuario_original_zair y contraseña = contraseña_original_zair
		Menu = Menu_principal(Menu,universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha, transaccion,Menu_de_saldo,saldo_de_la_cuenta,retirar_saldo_de_la_cuenta,ingresar_saldo_de_la_cuenta,recarga,saldo_a_recargar,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair,usuario,numero_telefonico,confirmacion_si_hay_letra, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
	FinSi
	FinSi	
	FinSi
Fin SubAlgoritmo

subalgoritmo Menu = Menu_principal(Menu,universidad, carrera, nombre_daniel,nombre_ernesto,nombre_zair, carnet_daniel,carnet_ernesto,carnet_zair, grupo, nombre_del_profesor, fecha,transaccion,Menu_de_saldo,saldo_de_la_cuenta,retirar_saldo_de_la_cuenta,ingresar_saldo_de_la_cuenta,recarga,saldo_a_recargar,numero_telefonico_daniel_tigo,numero_telefonico_ernesto_tigo,numero_telefonico_zair_tigo,numero_telefonico_daniel_claro,numero_telefonico_ernesto_claro,numero_telefonico_zair_claro,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair,usuario,numero_telefonico,confirmacion_si_hay_letra, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair)
	Repetir
		borrar pantalla;
		Escribir "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
		Escribir "*                    MENU PRINCIPAL                       *";
		Escribir "*                                                         *";
		Escribir "*                    1. PRESENTACION                      *";
		Escribir "*                                                         *";
		Escribir "*                    2. CAJERO ATM-UNI                    *";
		Escribir "*                                                         *";
		Escribir "*                    3. RECARGA                           *";
		Escribir "*                                                         *";
		Escribir "*                    4.SALIR                              *";
		Escribir "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
		esperar 1 Segundos;
		Escribir "";
		Escribir "Ingrese solamente un numero de las opciones disponibles";
		leer Menu;
		si Menu < 1 o Menu > 4 Entonces
			borrar pantalla;
			error();
			Esperar 3 Segundos;
		FinSi
	Hasta Que Menu >= 1 y Menu <= 4
	Borrar Pantalla;
	Segun Menu Hacer
		caso 1:
			Escribir "Haz el elgido la opcion #",Menu;
			Escribir "Ingresa el nombre del profesor o profesora"Sin Saltar;
			leer nombre_del_profesor;
			nombre_del_profesor = Mayusculas(nombre_del_profesor);
			Borrar Pantalla;
			Esperar 1 segundos;
			Escribir "Universidad: ",universidad;
			Esperar 1 segundos;
			Escribir "Carrera: ",carrera;
			Esperar 1 segundos;
			Escribir "Integrantes:";
			Escribir "Nombre: ",nombre_daniel;
			Esperar 1 segundos;
			Escribir "Carnet: ",carnet_daniel;
			Esperar 1 Segundos;
			Escribir "Nombre: ",nombre_zair;
			Esperar 1 segundos;
			Escribir "Carnet: ",carnet_zair;
			Esperar 1 Segundos;
			Escribir "Nombre: ",nombre_ernesto;
			Esperar 1 segundos;
			Escribir "Carnet: ",carnet_ernesto;
			
			Esperar 1 segundos;
			Escribir "Grupo: ",grupo;
			Esperar 1 segundos;
			Escribir "Profesor/Profesora: ",nombre_del_profesor;
			esperar 1 segundos;
			escribir "Fecha: ",Fecha;
			esperar 1 segundos;
			Escribir "";
			transaccion = preguntar_al_usuario(transaccion);
			si transaccion = "SI" Entonces
				otra_transaccion(saldo_de_la_cuenta, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
			SiNo
				Esperar 1 Segundos;
				Borrar Pantalla;
				Escribir "* * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                     *";
				Escribir "*              FINAL                  *";
				Escribir "*                                     *";
				Escribir "* * * * * * * * * * * * * * * * * * * *";
			FinSi
			
		caso 2:
			Escribir "Haz el elgido la opcion #",Menu;
			Escribir "Cajero ATM-UNI";
			Esperar 1 Segundos;
			Borrar Pantalla;
			Repetir
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                               *";
				Escribir "*                   MENU DE SALDO               *";
				Escribir "*                                               *";
				Escribir "*           1. INGRESAR SALDO DE CUENTA         *";
				Escribir "*                                               *";
				Escribir "*           2. RETIRAR SALDO DE CUENTA          *";
				Escribir "*                                               *";
				Escribir "*           3. CONSULTAR SALDO DE CUENTA        *";
				Escribir "*                                               *";
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
				esperar 1 Segundos;
				Escribir "";
				Escribir "Ingrese solamente un numero de las opciones disponibles";
				leer Menu_de_saldo;
				si Menu_de_saldo < 1 y Menu_de_saldo > 3 entonces
					borrar pantalla;
					error();
				FinSi
				Esperar 2 Segundos;
				Borrar Pantalla;
			Hasta Que Menu_de_saldo >= 1 y Menu_de_saldo <= 3
			
			
			usuario = ver_usuario_cuenta ( saldo_de_la_cuenta,usuario,saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair,usuario_original_daniel,usuario_original_ernesto,usuario_original_zair );
			si usuario = usuario_original_daniel Entonces
				saldo_de_la_cuenta = ver_saldo_daniel ( saldo_de_la_cuenta,saldo_de_la_cuenta_daniel );
				
			sino si usuario = usuario_original_ernesto Entonces
				saldo_de_la_cuenta = ver_saldo_ernesto ( saldo_de_la_cuenta,saldo_de_la_cuenta_ernesto );
			sino si usuario = usuario_original_zair Entonces
					saldo_de_la_cuenta = ver_saldo_zair ( saldo_de_la_cuenta,saldo_de_la_cuenta_zair );
				FinSi
			FinSi
			FinSi
			
			
			Segun Menu_de_saldo Hacer
				caso 1:
					Escribir "Haz el elgido la opcion #",Menu_de_saldo;
					Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
					Escribir "*                                               *";
					Escribir "*           1. INGRESAR SALDO DE CUENTA         *";
					Escribir "*                                               *";
					Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
					Esperar 2 Segundos;
					Borrar Pantalla;
					Repetir
						si ingresar_saldo_de_la_cuenta < 0 Entonces
							Escribir "El numero que ingreso para ingresar es negativo ", ingresar_saldo_de_la_cuenta," su saldo actual es de ",saldo_de_la_cuenta," $";
							Esperar 2 Segundos;
							Borrar Pantalla;
						sino si ingresar_saldo_de_la_cuenta = 0 Entonces
								Escribir "La cantidad a ingresar debe ser mayor a ",ingresar_saldo_de_la_cuenta," $";
								Esperar 2 Segundos;
								Borrar Pantalla;
							sino si ingresar_saldo_de_la_cuenta > 10000 Entonces
									Escribir "La cantidad que ingreso ", ingresar_saldo_de_la_cuenta," $ para retirar es mayor que el limite permitido";
									Esperar 2 Segundos;
									Borrar Pantalla;
								FinSi		
							FinSi
						FinSi
						Escribir "Recuerde que el limite de dinero a ingresar es de 10000 $";
						Escribir "Recuerde que el de dinero a ingresar debe ser mayor a 0 $";
						Escribir "No se permite valores negativos";
						Esperar 5 Segundos;
						Escribir "";
						Escribir "Presione cualquier tecla";
						Esperar Tecla;
						Borrar Pantalla;
						Escribir "Cuando desea ingresar su saldo actual es de ",saldo_de_la_cuenta," $ "Sin Saltar;
						leer ingresar_saldo_de_la_cuenta;
						Borrar Pantalla;
					Hasta Que ingresar_saldo_de_la_cuenta > 0 y ingresar_saldo_de_la_cuenta <= 10000 
					saldo_de_la_cuenta = saldo_de_la_cuenta + ingresar_saldo_de_la_cuenta;
					si usuario = usuario_original_daniel Entonces
						saldo_de_la_cuenta_daniel = saldo_de_la_cuenta_daniel + saldo_de_la_cuenta;
					
					sino si usuario = usuario_original_ernesto entonces
							saldo_de_la_cuenta_ernesto = saldo_de_la_cuenta_ernesto + saldo_de_la_cuenta;
					
					sino si usuario = usuario_original_zair Entonces
							saldo_de_la_cuenta_zair = saldo_de_la_cuenta_zair + saldo_de_la_cuenta;
					FinSi
					FinSi
					FinSi
					Escribir "Su saldo actual es de ",saldo_de_la_cuenta," $";
					Esperar 3 Segundos;
				caso 2:
					
					Escribir "Haz el elgido la opcion #",Menu_de_saldo;
					Esperar 1 Segundos;
					Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
					Escribir "*                                               *";
					Escribir "*           2. RETIRAR SALDO DE CUENTA          *";
					Escribir "*                                               *";
					Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
					esperar 1 Segundos;
					Borrar Pantalla;
					si saldo_de_la_cuenta <= 0 Entonces
						Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
						Escribir "*                                               *";
						Escribir "*           NO TIENES DINERO SUFICIENTE         *";
						Escribir "*                                               *";
						Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
						
					sino 
						Escribir"";
					
					Repetir						
						si retirar_saldo_de_la_cuenta < 0 Entonces
							Escribir "Los numero que ingreso para retirar es negativo ", retirar_saldo_de_la_cuenta," su saldo actual es de ",saldo_de_la_cuenta," $";
							Esperar 2 Segundos;
							Borrar Pantalla;
							
						sino si retirar_saldo_de_la_cuenta = 0 Entonces
								Escribir "La cantidad a retirar debe ser mayor a ",retirar_saldo_de_la_cuenta," $";
								Esperar 2 Segundos;
								Borrar Pantalla;
							sino si retirar_saldo_de_la_cuenta > saldo_de_la_cuenta Entonces
									Escribir "La cantidad que ingreso ", retirar_saldo_de_la_cuenta," $ para retirar es mayor que su saldo actual que es de ",saldo_de_la_cuenta," $";
									Esperar 2 Segundos;
									Borrar Pantalla;
								FinSi	
							FinSi
						FinSi
						Escribir "Recuerde que el limite de dinero a ingresar es de 10000 $";
						Escribir "Recuerde que el de dinero a ingresar debe ser mayor a 0 $";
						Escribir "No se permite valores negativos";
						Esperar 5 Segundos;
						Escribir "";
						Escribir "Presione cualquier tecla";
						Esperar Tecla;
						Borrar Pantalla;
						Escribir "Cuando desea retirar su saldo actual es de ",saldo_de_la_cuenta," $ ",Sin Saltar;
						leer retirar_saldo_de_la_cuenta;
						Borrar Pantalla;
					Hasta Que retirar_saldo_de_la_cuenta >= 0 y retirar_saldo_de_la_cuenta <= 10000 y retirar_saldo_de_la_cuenta <= saldo_de_la_cuenta
					saldo_de_la_cuenta = saldo_de_la_cuenta - retirar_saldo_de_la_cuenta;
					Escribir "Su saldo actual es de ",saldo_de_la_cuenta," $";
					Esperar 3 Segundos;
					si usuario = usuario_original_daniel Entonces
						saldo_de_la_cuenta_daniel = saldo_de_la_cuenta_daniel - saldo_de_la_cuenta;
						
					sino si usuario = usuario_original_ernesto entonces
							saldo_de_la_cuenta_ernesto = saldo_de_la_cuenta_ernesto - saldo_de_la_cuenta;
							
						sino si usuario = usuario_original_zair Entonces
								saldo_de_la_cuenta_zair = saldo_de_la_cuenta_zair - saldo_de_la_cuenta;
							FinSi
						FinSi
					FinSi
					
				FinSi
				caso 3:
					Escribir "Haz el elgido la opcion #",Menu_de_saldo;
					Esperar 1 Segundos;
					Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
					Escribir "*                                               *";
					Escribir "*           3. CONSULTAR SALDO DE CUENTA        *";
					Escribir "*                                               *";
					Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
					Esperar 2 Segundos;
					Borrar Pantalla;
					Escribir "Su saldo actual es de ",saldo_de_la_cuenta," $";
					
			Fin Segun
			transaccion = preguntar_al_usuario(transaccion);
			si transaccion = "SI" Entonces
				otra_transaccion(saldo_de_la_cuenta, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
			SiNo
				Esperar 1 Segundos;
				Escribir "* * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                     *";
				Escribir "*              FINAL                  *";
				Escribir "*                                     *";
				Escribir "* * * * * * * * * * * * * * * * * * * *";
			FinSi
		caso 3:
			
			Escribir "Haz el elgido la opcion #",Menu;
			Escribir "* * * * * * * * * * * * * * * * * * *";
			Escribir "*                                   *";
			Escribir "*               RECARGA             *";
			Escribir "*                                   *";
			Escribir "* * * * * * * * * * * * * * * * * * *";
			Esperar 2 Segundos;
			Borrar Pantalla;
			usuario = ver_usuario_cuenta ( saldo_de_la_cuenta,usuario,saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair,usuario_original_daniel,usuario_original_ernesto,usuario_original_zair );
			si usuario = usuario_original_daniel Entonces
				saldo_de_la_cuenta = ver_saldo_daniel ( saldo_de_la_cuenta,saldo_de_la_cuenta_daniel );
				
			sino si usuario = usuario_original_ernesto Entonces
					saldo_de_la_cuenta = ver_saldo_ernesto ( saldo_de_la_cuenta,saldo_de_la_cuenta_ernesto );
				sino si usuario = usuario_original_zair Entonces
						saldo_de_la_cuenta = ver_saldo_zair ( saldo_de_la_cuenta,saldo_de_la_cuenta_zair );
					FinSi
				FinSi
			FinSi
			Repetir
				si recarga <> "TIGO" Y recarga <> "CLARO" Entonces
					error();
					Esperar 2 Segundos;
					Borrar Pantalla;
				FinSi
				Escribir "Recuerde ingresar el nombre del operador no el numero";
				Esperar 3 Segundos;
				Escribir "Presione cualquier tecla";
				Esperar Tecla;
				Borrar Pantalla;
				Escribir "* * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                     *";
				Escribir "*              MENU OPERADOR          *";
				Escribir "*                                     *";
				Escribir "*              1. TIGO                *";
				Escribir "*                                     *";
				Escribir "*              2. CLARO               *";
				Escribir "*                                     *";
				Escribir "* * * * * * * * * * * * * * * * * * * *";
				Escribir "Ingresa " Sin Saltar;
				leer recarga; 
				recarga = Mayusculas(recarga);
				Borrar Pantalla;
			Hasta Que recarga = "TIGO" o recarga = "CLARO"
			Si recarga = "TIGO" Entonces
				Escribir"*************     *************       * * * * *        ******   ";
				Escribir"      *                 *            *               **      ** ";
				Escribir"      *                 *          *                 *        * ";
				Escribir"      *                 *          *                *          *";
				Escribir"      *                 *          *                *          *";
				Escribir"      *                 *          *                *          *";
				Escribir"      *                 *          *    * * * *     *          *";
				Escribir"      *                 *          *           *    *          *";
				Escribir"      *                 *          *           *    *          *";
				Escribir"      *                 *          *           *    *          *";
				Escribir"      *                 *          *          *     *          *";
				Escribir"      *                 *          *         *       *        * ";
				Escribir"      *                 *          *        *        **      ** ";
				Escribir"      *           *************    * * * *             ******   ";
				Esperar 2 Segundos;
				escribir "";
				Escribir "Ingrese cualquier tecla";
				Esperar Tecla;
				Borrar Pantalla;
				si usuario = usuario_original_daniel entonces
					repetir 
						Escribir "               * * * * * * * * * * * * * * * * * * *";
						Escribir "               *                                   *";
						Escribir "               *        Ingrese su numero          *";
						Escribir "               *              Tigo                 *";
						Escribir "               *                                   *";
						Escribir "               * * * * * * * * * * * * * * * * * * *";
						Escribir "+505 " Sin Saltar;
						leer numero_telefonico;
						Borrar Pantalla;
						confirmacion_si_hay_letra = ver_si_hay_letra ( numero_telefonico );
						Esperar 2 Segundos;
						Escribir "Presione cualquier tecla";
						Esperar Tecla;
						
						Borrar Pantalla;
						si confirmacion_si_hay_letra <> "" Entonces
							error();
							Esperar 2 Segundos;
							Borrar Pantalla;
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Escribir "               *                                   *";
							Escribir "               *        Ingreseo un caracter       *";
							Escribir "               *      solo se permiten numeros     *";
							Escribir "               *                                   *";
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Esperar 2 Segundos;
							Borrar Pantalla;
						sino si Longitud(numero_telefonico) > 8 y Longitud(numero_telefonico) < 8 Entonces
								error();
								Esperar 2 Segundos;
								Borrar Pantalla;
							sino si numero_telefonico <> numero_telefonico_daniel_tigo
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Escribir "               *                                   *";
									Escribir "               *        Ingreseo el numero         *";
									Escribir "               *          de otro usuario          *";
									Escribir "               *                                   *";
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Esperar 2 Segundos;
									Borrar Pantalla;
								finSi			
						FinSi
							
						FinSi
					Hasta Que numero_telefonico = numero_telefonico_daniel_tigo
				sino si usuario = usuario_original_ernesto entonces
						repetir 
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Escribir "               *                                   *";
							Escribir "               *        Ingrese su numero          *";
							Escribir "               *              Tigo                 *";
							Escribir "               *                                   *";
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Escribir "+505 " Sin Saltar;
							leer numero_telefonico;
							Borrar Pantalla;
							confirmacion_si_hay_letra = ver_si_hay_letra ( numero_telefonico );
							Esperar 2 Segundos;
							Escribir "Presione cualquier tecla";
							Esperar Tecla;
							
							Borrar Pantalla;
							si confirmacion_si_hay_letra <> "" Entonces
								error();
								Esperar 2 Segundos;
								Borrar Pantalla;
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Escribir "               *                                   *";
								Escribir "               *        Ingreseo un caracter       *";
								Escribir "               *      solo se permiten numeros     *";
								Escribir "               *                                   *";
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Esperar 2 Segundos;
								Borrar Pantalla;
							sino si Longitud(numero_telefonico) > 8 y Longitud(numero_telefonico) < 8 Entonces
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
								sino si numero_telefonico <> numero_telefonico_ernesto_tigo
										error();
										Esperar 2 Segundos;
										Borrar Pantalla;
										Escribir "               * * * * * * * * * * * * * * * * * * *";
										Escribir "               *                                   *";
										Escribir "               *        Ingreseo el numero         *";
										Escribir "               *          de otro usuario          *";
										Escribir "               *                                   *";
										Escribir "               * * * * * * * * * * * * * * * * * * *";
										Esperar 2 Segundos;
										Borrar Pantalla;
									finSi	
							FinSi		
							
							FinSi
						Hasta Que numero_telefonico = numero_telefonico_ernesto_tigo
					sino si usuario = usuario_original_zair entonces
							repetir 
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Escribir "               *                                   *";
								Escribir "               *        Ingrese su numero          *";
								Escribir "               *              Tigo                 *";
								Escribir "               *                                   *";
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Escribir "+505 " Sin Saltar;
								leer numero_telefonico;
								Borrar Pantalla;
								confirmacion_si_hay_letra = ver_si_hay_letra ( numero_telefonico );
								Esperar 2 Segundos;
								Escribir "Presione cualquier tecla";
								Esperar Tecla;
								
								Borrar Pantalla;
								si confirmacion_si_hay_letra <> "" Entonces
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Escribir "               *                                   *";
									Escribir "               *        Ingreseo un caracter       *";
									Escribir "               *      solo se permiten numeros     *";
									Escribir "               *                                   *";
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Esperar 2 Segundos;
									Borrar Pantalla;
								sino si Longitud(numero_telefonico) > 8 y Longitud(numero_telefonico) < 8 Entonces
										error();
										Esperar 2 Segundos;
										Borrar Pantalla;
								sino si numero_telefonico <> numero_telefonico_zair_tigo
										error();
										Esperar 2 Segundos;
										Borrar Pantalla;
										Escribir "               * * * * * * * * * * * * * * * * * * *";
										Escribir "               *                                   *";
										Escribir "               *        Ingreseo el numero         *";
										Escribir "               *          de otro usuario          *";
										Escribir "               *                                   *";
										Escribir "               * * * * * * * * * * * * * * * * * * *";
										Esperar 2 Segundos;
										Borrar Pantalla;
								finSi	
								FinSi
									
								FinSi
							Hasta Que numero_telefonico = numero_telefonico_zair_tigo
						finsi
					FinSi
				Fin Si
					Escribir "+505 " Sin Saltar;
					leer numero_telefonico;
				SiNo
					Escribir "  ***     *                *          * * * *            ******";
					Escribir " *   *    *               * *         *       *        **       ** ";
					Escribir "*         *              *   *        *       *       *           *";
					Escribir "*         *             * * * *       *       *       *           *";
					Escribir "*         *            *       *      *       *       *           *";
					Escribir "*         *           *         *     *       *       *           *";
					Escribir "*         *          *           *    *       *       *           *";
					Escribir "*         *          *           *    *       *       *           *";
					Escribir "*         *          * * * * * * *    * * * *         *           *";
					Escribir "*         *          *           *    *    *          *           *";
					Escribir "*         *          *           *    *      *        *           *";
					Escribir "*         *          *           *    *       *       *           *";
					Escribir "*         *          *           *    *        *      *           *";
					Escribir "*         *          *           *    *         *     *           *";
					Escribir "*         *          *           *    *         *     *           *";
					Escribir "*         *          *           *    *         *     *           *";
					Escribir " *   *    *          *           *    *         *      **       **";
					Escribir "  ***     * * * *    *           *    *         *         ******";
					Esperar 2 Segundos;
					escribir "";
					Escribir "Ingrese cualquier tecla";
					Esperar Tecla;
					
					Borrar Pantalla;
					si usuario = usuario_original_daniel entonces
						repetir 
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Escribir "               *                                   *";
							Escribir "               *        Ingrese su numero          *";
							Escribir "               *              Claro                *";
							Escribir "               *                                   *";
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Escribir "+505 " Sin Saltar;
							leer numero_telefonico;
							Borrar Pantalla;
							confirmacion_si_hay_letra = ver_si_hay_letra ( numero_telefonico );
							Esperar 2 Segundos;
							Escribir "Presione cualquier tecla";
							Esperar Tecla;
							
							Borrar Pantalla;
							si confirmacion_si_hay_letra <> "" Entonces
								error();
								Esperar 2 Segundos;
								Borrar Pantalla;
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Escribir "               *                                   *";
								Escribir "               *        Ingreseo un caracter       *";
								Escribir "               *      solo se permiten numeros     *";
								Escribir "               *                                   *";
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Esperar 2 Segundos;
								Borrar Pantalla;
							sino si Longitud(numero_telefonico) > 8 y Longitud(numero_telefonico) < 8 Entonces
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
								sino si numero_telefonico <> numero_telefonico_daniel_claro
										error();
										Esperar 2 Segundos;
										Borrar Pantalla;
										Escribir "               * * * * * * * * * * * * * * * * * * *";
										Escribir "               *                                   *";
										Escribir "               *        Ingreseo el numero         *";
										Escribir "               *          de otro usuario          *";
										Escribir "               *                                   *";
										Escribir "               * * * * * * * * * * * * * * * * * * *";
										Esperar 2 Segundos;
										Borrar Pantalla;
									finSi		
							FinSi
								
							FinSi
						Hasta Que numero_telefonico = numero_telefonico_daniel_claro
					sino si usuario = usuario_original_ernesto entonces
						repetir 
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Escribir "               *                                   *";
							Escribir "               *        Ingrese su numero          *";
							Escribir "               *              Claro                *";
							Escribir "               *                                   *";
							Escribir "               * * * * * * * * * * * * * * * * * * *";
							Escribir "+505 " Sin Saltar;
							leer numero_telefonico;
							Borrar Pantalla;
							confirmacion_si_hay_letra = ver_si_hay_letra ( numero_telefonico );
							Esperar 2 Segundos;
							Escribir "Presione cualquier tecla";
							Esperar Tecla;
							
							Borrar Pantalla;
							si confirmacion_si_hay_letra <> "" Entonces
								error();
								Esperar 2 Segundos;
								Borrar Pantalla;
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Escribir "               *                                   *";
								Escribir "               *        Ingreseo un caracter       *";
								Escribir "               *      solo se permiten numeros     *";
								Escribir "               *                                   *";
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Esperar 2 Segundos;
								Borrar Pantalla;
							sino si Longitud(numero_telefonico) > 8 y Longitud(numero_telefonico) < 8 Entonces
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
							sino si numero_telefonico <> numero_telefonico_ernesto_claro
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Escribir "               *                                   *";
									Escribir "               *        Ingreseo el numero         *";
									Escribir "               *          de otro usuario          *";
									Escribir "               *                                   *";
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Esperar 2 Segundos;
									Borrar Pantalla;
								finSi
							FinSi
								
							FinSi
						Hasta Que numero_telefonico = numero_telefonico_ernesto_claro
					sino si usuario = usuario_original_zair entonces
							repetir 
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Escribir "               *                                   *";
								Escribir "               *        Ingrese su numero          *";
								Escribir "               *              Claro                *";
								Escribir "               *                                   *";
								Escribir "               * * * * * * * * * * * * * * * * * * *";
								Escribir "+505 " Sin Saltar;
								leer numero_telefonico;
								Borrar Pantalla;
								confirmacion_si_hay_letra = ver_si_hay_letra ( numero_telefonico );
								Esperar 2 Segundos;
								Escribir "Presione cualquier tecla";
								Esperar Tecla;
								
								Borrar Pantalla;
								si confirmacion_si_hay_letra <> "" Entonces
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Escribir "               *                                   *";
									Escribir "               *        Ingreseo un caracter       *";
									Escribir "               *      solo se permiten numeros     *";
									Escribir "               *                                   *";
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Esperar 2 Segundos;
									Borrar Pantalla;
									Esperar 2 Segundos;
									Borrar Pantalla;
								sino si Longitud(numero_telefonico) > 8 y Longitud(numero_telefonico) < 8 Entonces
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
								sino si numero_telefonico <> numero_telefonico_zair_claro
									error();
									Esperar 2 Segundos;
									Borrar Pantalla;
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Escribir "               *                                   *";
									Escribir "               *        Ingreseo el numero         *";
									Escribir "               *          de otro usuario          *";
									Escribir "               *                                   *";
									Escribir "               * * * * * * * * * * * * * * * * * * *";
									Esperar 2 Segundos;
									Borrar Pantalla;
								finSi
									
								FinSi
								
								FinSi
								
							Hasta Que numero_telefonico = numero_telefonico_zair_claro
					finsi
					FinSi
					Fin Si
				Fin Si
			//saldo_a_recargar
			si saldo_de_la_cuenta <= 0 Entonces
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                               *";
				Escribir "*           NO TIENES DINERO SUFICIENTE         *";
				Escribir "*                                               *";
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * *";
				Esperar 2 Segundos;
				Borrar Pantalla;
				transaccion = preguntar_al_usuario(transaccion);
				si transaccion = "SI" Entonces
					otra_transaccion(saldo_de_la_cuenta, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
				SiNo
					Borrar Pantalla;
					Esperar 1 Segundos;
					Escribir "* * * * * * * * * * * * * * * * * * * *";
					Escribir "*                                     *";
					Escribir "*              FINAL                  *";
					Escribir "*                                     *";
					Escribir "* * * * * * * * * * * * * * * * * * * *";
					
				FinSi
			sino 
			
			Repetir
				si saldo_a_recargar < 0 Entonces
					error();
					Escribir "El saldo a recargar es negativo ", saldo_a_recargar," su saldo actual es de ",saldo_de_la_cuenta," $";
					Esperar 2 Segundos;
					Borrar Pantalla;
					
				sino si saldo_a_recargar = 0 Entonces
						error();
						Escribir "La cantidad de saldo a recargar debe ser mayor a ",saldo_a_recargar," $";
						Esperar 2 Segundos;
						Borrar Pantalla;
					sino si saldo_a_recargar > saldo_de_la_cuenta Entonces
							Escribir "La cantidad que ingreso ", saldo_a_recargar," $ para recargar saldo es mayor que su saldo actual que es de ",saldo_de_la_cuenta," $";
							Esperar 2 Segundos;
							Borrar Pantalla;
						FinSi	
					FinSi
				FinSi
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                                                                 *";
				Escribir "*              Recuerde que el limite de saldo a recargar es de 10000 $           *";
				Escribir "*                                                                                 *";
				Escribir "*              Recuerde que el saldo a recargar debe ser mayor a 0 $              *";
				Escribir "*                                                                                 *";
				Escribir "*              No se permite valores negativos                                    *";
				Escribir "*                                                                                 *";
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
				Escribir "";
				Esperar 5 Segundos;
				Escribir "Presione cualquier tecla";
				Esperar Tecla;
				Borrar Pantalla;
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                                                 *";
				Escribir "*              Ingrese la cantidad de saldo a recargar            *";
				Escribir "*                                                                 *";
				Escribir "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
				Escribir "Su saldo actual es de ",saldo_de_la_cuenta," $";
				Escribir "Ingrese"Sin Saltar;
				leer saldo_a_recargar;
			Hasta Que saldo_a_recargar <= saldo_de_la_cuenta y saldo_a_recargar > 0
			saldo_de_la_cuenta = saldo_de_la_cuenta - saldo_a_recargar;
			si usuario = usuario_original_daniel Entonces
				saldo_de_la_cuenta_daniel = saldo_de_la_cuenta_daniel - saldo_de_la_cuenta;
				
			sino si usuario = usuario_original_ernesto entonces
					saldo_de_la_cuenta_ernesto = saldo_de_la_cuenta_ernesto - saldo_de_la_cuenta;
					
				sino si usuario = usuario_original_zair Entonces
						saldo_de_la_cuenta_zair = saldo_de_la_cuenta_zair - saldo_de_la_cuenta;
					FinSi
				FinSi
			FinSi
			Escribir "La recarga ",recarga," que hizo fue de ",saldo_a_recargar ," $";
			Escribir "Su saldo actual es de ",saldo_de_la_cuenta," $";
			Esperar 3 Segundos;
			Borrar Pantalla;
			transaccion = preguntar_al_usuario(transaccion);
			si transaccion = "SI" Entonces
				otra_transaccion(saldo_de_la_cuenta, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
			SiNo
				Esperar 1 Segundos;
				Borrar Pantalla;
				Esperar 1 Segundos;
				Escribir "* * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                     *";
				Escribir "*              FINAL                  *";
				Escribir "*                                     *";
				Escribir "* * * * * * * * * * * * * * * * * * * *";
			FinSi
		FinSi
		caso 4:
			Escribir "Haz el elgido la opcion #",Menu;
			Escribir "Salir";
			Esperar 1 segundos;
			Borrar Pantalla;
			transaccion = preguntar_al_usuario(transaccion);
			si transaccion = "SI" Entonces
				otra_transaccion(saldo_de_la_cuenta, saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair);
			SiNo
				Esperar 1 Segundos;
				Escribir "* * * * * * * * * * * * * * * * * * * *";
				Escribir "*                                     *";
				Escribir "*              FINAL                  *";
				Escribir "*                                     *";
				Escribir "* * * * * * * * * * * * * * * * * * * *";
			FinSi
	Fin Segun
	
FinSubAlgoritmo



SubAlgoritmo usuario = pedir_usuario (usuario,usuario_original_daniel,usuario_original_ernesto,usuario_original_zair,contador_de_usuarios)
	Repetir
		Escribir "* * * * * * * * * * * * * * * * * * * * *";
		Escribir "*                                       *";
		Escribir "*                                       *";
		Escribir "*     INGRESA TU NOMBRE DE USUARIO      *";
		Escribir "*                                       *";
		Escribir "*                                       *";
		Escribir "* * * * * * * * * * * * * * * * * * * * *";
		Escribir ""Sin Saltar;
		leer usuario;
		Borrar Pantalla;
		si usuario <> usuario_original_daniel y usuario <> usuario_original_ernesto y usuario <> usuario_original_zair entonces
			error();
			Escribir "                El nombre de usuario que ingreso es incorrecto";
			Escribir "                          Le quedan #",2 - contador_de_usuarios, " intentos";
			esperar 3 segundos;
			contador_de_usuarios = contador_de_usuarios + 1;
			Borrar Pantalla;
		FinSi
	Hasta Que usuario = usuario_original_daniel o usuario = usuario_original_ernesto o usuario = usuario_original_zair o contador_de_usuarios = 3
	contador_de_usuarios = 0;
Fin SubAlgoritmo

SubAlgoritmo contraseña = Pedir_contraseña(contraseña,contador_de_contraseñas,contraseña_original_daniel,contraseña_original_ernesto,contraseña_original_zair,usuario,usuario_original_ernesto,usuario_original_daniel,usuario_original_zair)
	Repetir
		Escribir "* * * * * * * * * * * * * * * * * * * * *";
		Escribir "*                                       *";
		Escribir "*                                       *";
		Escribir "*          INGRESA TU CONTRASEÑA        *";
		Escribir "*                                       *";
		Escribir "*                                       *";
		Escribir "* * * * * * * * * * * * * * * * * * * * *";
		si usuario = usuario_original_daniel entonces
			Escribir "Usuario-Daniel";
			Escribir ""Sin Saltar;
			leer contraseña;
			Borrar Pantalla;
			si contraseña <> contraseña_original_daniel entonces
				error();
				Escribir "                La contraseña que ingreso es incorrecto";
				Escribir "                        Le quedan #",2 - contador_de_contraseñas, " intentos";
				esperar 3 segundos;
				contador_de_contraseñas = contador_de_contraseñas + 1;
				Borrar Pantalla;
			FinSi	
		sino si usuario = usuario_original_ernesto entonces
			Escribir "Usuario-Ernesto";
			Escribir ""Sin Saltar;
			leer contraseña;
			Borrar Pantalla;
			si contraseña <> contraseña_original_ernesto entonces
				error();
				Escribir "                La contraseña que ingreso es incorrecto";
				Escribir "                        Le quedan #",2 - contador_de_contraseñas, " intentos";
				esperar 3 segundos;
				contador_de_contraseñas = contador_de_contraseñas + 1;
				Borrar Pantalla;
			FinSi	
		sino si usuario = usuario_original_zair entonces
			Escribir "Usuario-Zair";
			Escribir ""Sin Saltar;
			leer contraseña;
			Borrar Pantalla;
			si contraseña <> contraseña_original_zair entonces
				error();
				Escribir "                La contraseña que ingreso es incorrecto";
				Escribir "                        Le quedan #",2 - contador_de_contraseñas, " intentos";
				esperar 3 segundos;
				contador_de_contraseñas = contador_de_contraseñas + 1;
				Borrar Pantalla;
			FinSi	
				
		FinSi
	FinSi
	FinSi

	Hasta Que contraseña = contraseña_original_daniel o contraseña = contraseña_original_ernesto o contraseña = contraseña_original_zair o contador_de_contraseñas = 3
	Fin SubAlgoritmo
	
SubAlgoritmo error()
	Escribir "                                                  ";
	Escribir "                     * * * * * * * * * * * * * * *";
	Escribir "                     *                           *";
	Escribir "                     *            ERROR          *";
	Escribir "                     *      OPCION NO VALIDA     *";
	Escribir "                     *                           *";
	Escribir "                     * * * * * * * * * * * * * * *";
	
Fin SubAlgoritmo



SubAlgoritmo confirmacion_si_hay_letra = ver_si_hay_letra ( numero_telefonico )
	Definir palabra,converticion,confirmacion_si_hay_letra Como Caracter;
	Definir largo,iterable,otro_iterable Como real;
	confirmacion_si_hay_letra = "";
	numero_telefonico = Mayusculas(numero_telefonico);
	largo = Longitud(numero_telefonico);
	otro_iterable = 0;
	Para iterable = 0 Hasta largo Con Paso 1 Hacer
		si iterable <> largo Entonces
			Para otro_iterable = iterable Hasta iterable Con Paso 1 Hacer
				converticion = SubCadena(numero_telefonico,iterable,otro_iterable);
				Si converticion = "A" o converticion = "B" O converticion = "C" O converticion = "D" o converticion = "E" o converticion = "F" o converticion = "G" o converticion = "H" o converticion = "I" o converticion = "J" o converticion = "K" o converticion = "L"o converticion = "M" o converticion = "N" o converticion = "S"o converticion = "Ñ" o converticion = "O" o converticion = "P" o converticion = "Q" o converticion = "R" o converticion = "S" o converticion = "T" o converticion = "U" o converticion = "V" o converticion = "W" o converticion = "X" o converticion = "Y" o converticion = "Z" o converticion = "*" o converticion = "/" o converticion = "+" o converticion = "-" o converticion = "." o converticion = "-" O  converticion = "," O  converticion = ";" O  converticion = ":" O  converticion = ":" O  converticion = "_" O  converticion = "!" O  converticion = " " O converticion = "" O  converticion = "#" O  converticion = "$" O  converticion = "%" O  converticion = "/" o converticion = "(" O  converticion = ")" O  converticion = "=" O  converticion = "?" O  converticion = "¡" O  converticion = "¿" O  converticion = "<" O  converticion = ">" O  converticion = "{" O  converticion = "}" O  converticion = "[" O  converticion = "]" O  converticion = "´´" O  converticion = "´" O  converticion = "|" O  converticion = "°" Entonces
					confirmacion_si_hay_letra = "hay letra";
					confirmacion_si_hay_letra = Mayusculas(confirmacion_si_hay_letra);
					iterable  = largo;
				SiNo
					//Escribir converticion;	
				FinSi	
			Fin Para
		SiNo
			Escribir "";
		FinSi
		
		
	Fin Para
	
	si confirmacion_si_hay_letra = "HAY LETRA" Entonces
		Escribir "";
	SiNo
		confirmacion_si_hay_letra = "";
		//Escribir "No hay letra";
	FinSi
	
Fin SubAlgoritmo
	
	
SubAlgoritmo usuario = ver_usuario_cuenta ( saldo_de_la_cuenta,usuario,saldo_de_la_cuenta_daniel,saldo_de_la_cuenta_ernesto, saldo_de_la_cuenta_zair,usuario_original_daniel,usuario_original_ernesto,usuario_original_zair )
	si usuario = usuario_original_daniel Entonces
		usuario = usuario_original_daniel;
	sino si usuario = usuario_original_ernesto entonces
			usuario = usuario_original_ernesto;
	sino si usuario = usuario_original_zair entonces	
			usuario = usuario_original_zair;	
	FinSi
	FinSi
	FinSi
	
Fin SubAlgoritmo





SubAlgoritmo saldo_de_la_cuenta = ver_saldo_zair ( saldo_de_la_cuenta,saldo_de_la_cuenta_zair )
		saldo_de_la_cuenta = saldo_de_la_cuenta + saldo_de_la_cuenta_zair;
	
Fin SubAlgoritmo

SubAlgoritmo saldo_de_la_cuenta = ver_saldo_daniel ( saldo_de_la_cuenta,saldo_de_la_cuenta_daniel )
	saldo_de_la_cuenta = saldo_de_la_cuenta + saldo_de_la_cuenta_daniel;
Fin SubAlgoritmo

SubAlgoritmo saldo_de_la_cuenta = ver_saldo_ernesto ( saldo_de_la_cuenta,saldo_de_la_cuenta_ernesto )
	saldo_de_la_cuenta = saldo_de_la_cuenta + saldo_de_la_cuenta_ernesto;
	
Fin SubAlgoritmo