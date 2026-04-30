/*

 ACLARACION: Este programa (y todos en realidad) fueron programados en Linux, por lo que
                tuve que agregar modificaciones posiblemente sacadas de internet para poder
                hacer uso de cls, y otros comandos de terminal cmd que obviamente
                no funcionan en linux, de ah� en fuera, todo el codigo fue hecho por mi

        opciones: 1) Una tabla de valores para la funcion seno coseno tangente donde el usuario ingresa
                     los limites de la tabla
                  2) Calcular exponencial de euler (e^x)
                  3) Problema 1 pero con funciones inversas (arcoseno, arcocoseno, arcotangente)
                  4) Nos permita mostrar la serie de ullman
                  5) Dise�ar un codigo fuente  que nos permita mostrar cuadros cosentricos con colores
                  6) cuadrado de arriba pero con dibujos en los 4 cuadrantes
                  7) Crear tres arreglos con 10 elementos cada uno
				  	 El vector 4 deber� de ordenar por el metodo de la burbuja los elementos del arreglo 1
					 El arreglo 5 deber� almacenar la raiz cuadrada de todos los elementos del arreglo 2
					 El arreglo 6 deber� de mostrar unicamente los elementos que sean +50 y -100 
                  8) Salir
					
*/

/*

Negro: \033[30m
Rojo: \033[31m
Verde: \033[32m
Amarillo: \033[33m
Azul: \033[34m
Magenta: \033[35m
Cian: \033[36m
Blanco: \033[37m

*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#ifdef _WIN32
#include <windows.h>
#endif

void gotoxy(int x, int y)
{
#ifdef _WIN32
    HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwpos;
    dwpos.X = x;
    dwpos.Y = y;
    SetConsoleCursorPosition(hconsole, dwpos);
#else
    // ANSI usa coordenadas 1-based: fila, columna
    printf("\033[%d;%dH", y + 1, x + 1);
    fflush(stdout);
#endif
}

void setColor(int color) {
    #ifdef _WIN32
        HANDLE hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hconsole, color);
    #else
        // ANSI escape codes para colores
        switch(color) {
            case 1: { std::cout << "\033[31m"; break; }// rojo
            case 2: { std::cout << "\033[32m"; break; } // verde
            case 3: { std::cout << "\033[33m"; break; } // amarillo
            case 4: { std::cout << "\033[34m"; break; } // azul
            case 5: { std::cout << "\033[35m"; break; } // magenta
            case 6: { std::cout << "\033[36m"; break; } // cian
            case 7: { std::cout << "\033[37m"; break; } // blanco
            default: { std::cout << "\033[0m"; break; } // reset
        }
    #endif

    // forma de usar: setColor(1) para rojo, setColor(2) para verde, etc. y setColor(0) para resetear al color por defecto
}

// espero neta q esto funcione fok
void burbujeo(int array[], int n) {
	
	// dpmde array[] es el arreglo a ordenar, y n es el tama�o de este mismo
		int longitud = n;
		for(int j = 1; j < longitud - 1; j++) {
			for(int k = 0; k < longitud - j + 1; k++) {
				if(array[k] > array[k + 1]) {
					int aux = array[k];
					array[k] = array[k + 1];
					array[k + 1] = aux;
				// Linea de codigo que ya no es necesaria pq cumplió su función: 
                // std::cout << longitud  << " en funcion" << std::endl;  // Valida si se está ejecutando la función
			}
		}
	}

    // resumen: si funcionó
		
}


void limpiarPantalla()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    // habilitarColor();
    char opcion;
    bool seguir = true;
    do
    {

        limpiarPantalla();
        std::cout << "Bienvenido de nuevo al menu de opciones. Elige alguna de las siguientes opciones:\n"
                  << "1) Una tabla de valores para la funcion seno coseno tangente donde el usuario ingresa los limites de la tabla.\n"
                  << "2) Calcular exponencial de euler (e^x).\n"
                  << "3) Una tabla de valores para la funcion secante cosecante y cotangente (funciones trigonometricas inversas).\n"
                  << "4) Programa donde se muestra la serie de ullman (conjetura de collatz).\n"
                  << "5) Cuadros concentricos con colores.\n"
                  << "6) Cuadrado concentrico con dibujos en los 4 cuadrantes.\n"
                  << "7) Operaciones con arreglos.\n"
                  << "n) Salir.\n";
        std::cin >> opcion;

        switch (opcion)
        {

        case '1':
        {

            /* FUNCIONES TRIGONOMETRICAS */

            limpiarPantalla();

            int limite;

            std::cout << "Excelente! Ingresa el limite de la tabla:";
            std::cin >> limite;

            std::cout << "-------------------- Seno --------------------\n";
            for (int i = 0; i <= limite; i++)
            {
                std::cout << "Seno(" << i << ") = " << sin(i) << std::endl;
            }

            std::cout << "-------------------- Coseno --------------------\n";

            for (int j = 0; j <= limite; j++)
            {
                std::cout << "Coseno(" << j << ") = " << cos(j) << std::endl;
            }

            std::cout << "-------------------- Tangente --------------------\n";
            for (int k = 0; k <= limite; k++)
            {
                std::cout << "Tangente(" << k << ") = " << tan(k) << std::endl;
            }

            /* ----------------------------------------------------------------- */
            break;
        }
        case '2':
        {

            /* CALCULAR EXPONENCIAL DE EULER */

            limpiarPantalla();

            float x;

            std::cout << "Gran elecci�n! Ingresa el valor de x para calcular e^x: ";
            std::cin >> x;

            std::cout << "El resultado de e^x es: " << exp(x) << std::endl;

            break;
        }

        case '3':
        {

            /* FUNCIONES TRIGONOMETRICAS INVERSAS */

            limpiarPantalla();

            int limite;

            std::cout << "Ahora con inversas (cabe aclarar que solo est�n definidas para valores en el intervalo [-1, 1] en cuanto a la arsecante y arcosecante), ingresa el limite de la tabla: ";
            std::cin >> limite;

            std::cout << "-------------------- Arsecante --------------------\n";
            for (int i = 0; i <= limite; i++)
            {
                std::cout << "Arsecante(" << i << ") = " << asin(i) << std::endl;
            }

            std::cout << "-------------------- Arcosecante --------------------\n";

            for (int j = 0; j <= limite; j++)
            {
                std::cout << "Arcoseno(" << j << ") = " << acos(j) << std::endl;
            }

            std::cout << "-------------------- Arcotangente --------------------\n";
            for (int k = 0; k <= limite; k++)
            {
                std::cout << "Arcotangente(" << k << ") = " << atan(k) << std::endl;
            }

            /* ----------------------------------------------------------------- */
            break;
        }
        case '4':
        {

            /* CONJETURA DE COLLATZ (ERRONEAMENTE LLAMADA SERIE DE ULLMAN POR EL PROFESOR) */

            limpiarPantalla();
            long long int numero;
            std::cout << "�Demostremos que ese numero llega a 1! Ingresa un numero entero positivo: ";
            std::cin >> numero;

            while (numero != 1)
            {
                if (numero % 2 == 0)
                {
                    numero = numero / 2;
                    std::cout << "Numero par: " << numero << std::endl;
                }
                else
                {
                    numero = (numero * 3) + 1;
                    std::cout << "Numero impar: " << numero << std::endl;
                }
            }
            break;
        }

        case '5':
        {
            /* Cuadros Cosentricos */
            
            
            int colores = 1;

            bool dibujar = true;
            int columna, fila, inicioCol = 1, finCol = 80, numCuadros = 1, inicioFila = 3, finFila = 26;

            limpiarPantalla();

            gotoxy(30, 1);
            std::cout << "CUADROS CONCENTRICOS !1!!1!!1!!!";
            while (dibujar == true)
            {
                if (numCuadros <= 9)
                {
                    setColor(((numCuadros - 1) % 7) + 1);
                    for (columna = inicioCol; columna <= finCol; columna++)
                    {
                        gotoxy(columna, inicioFila);
                        putchar('-');
                        gotoxy(columna, finFila);
                        putchar('-');
                    }
                    for (fila = inicioFila + 1; fila <= finFila - 1; fila++)
                    {	
                        gotoxy(inicioCol, fila);
                        putchar('|');
                        gotoxy(finCol, fila);
                        putchar('|');
                    }

                    inicioCol += 2;
                    finCol -= 2;
                    inicioFila += 1;
                    finFila -= 1;
                    numCuadros++;
                } else {
                    setColor(7);
                    dibujar = false;
                    gotoxy(29, 14);
                    std::cout << "Sanchez Vega Said Jesus ";
                    gotoxy(29, 15);
                    std::cout << "4IV13";
                    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
                }
            }
            break;
        }
        case '6': {
            // nisiquiera se atrevan a preguntar como se hizo este caso pq ni yo se
        	limpiarPantalla();
            std::cout << "caso 6, cuadritos con dibujos oh yeahhhhhhh\n\n";
            // dibujo el cuadro xddxdx
            // columnas
            int colorCuadro = 4;
            setColor(colorCuadro);
            for(int i = 0; i <= 80; i++) {
            	gotoxy(i, 2);
            	putchar('-');
                gotoxy(i, 30);
            	putchar('-');
			}
            for(int j = 3; j <= 29; j++) {
				gotoxy(0, j);
            	putchar('|');
            	gotoxy(80, j);
            	putchar('|');
			}
			
			// division por cuadrantes

			for(int contadorx = 1; contadorx <= 79; contadorx++) {
				gotoxy(contadorx, 16);
				putchar('-');
			}
            for(int divisiony = 3; divisiony <= 29; divisiony++) {
				gotoxy(40, divisiony);
				putchar('|');
			}

            setColor(7);
			// CUADRO DIBUJADO

            // Primer cuadrante

            gotoxy(20, 9);

            for(int x = 21; x < 27; x++) {
                gotoxy(x, 8);
                putchar('-');
            }
            for(int y = 7; y > 2; y--) {
                gotoxy(21, y);
                putchar('|');
            }
            for(int diagonal = 0; diagonal < 5; diagonal++) {
                int x = 22 + diagonal;
                int y = 3 + diagonal;
                gotoxy(x, y);
                putchar('\\');
            }

            // triangulo 2

            for(int x = 19; x > 13; x--) {
                gotoxy(x, 8);
                putchar('-');
            }
            for(int y = 7; y > 2; y--) {
                gotoxy(19, y);
                putchar('|');
            }
            for(int diagonal = 0; diagonal < 5; diagonal++) {
                int x = 18 - diagonal;
                int y = 3 + diagonal;
                gotoxy(x, y);
                putchar('/');
            }
            // triangulo 3
            for(int x = 21; x < 27; x++) {
                gotoxy(x, 10);
                putchar('-');
            }
            for(int y = 11; y < 16; y++) {
                gotoxy(21, y);
                putchar('|');
            }
            for(int diagonal = 0; diagonal < 5; diagonal++) {
                int x = 22 + diagonal;
                int y = 15 - diagonal;
                gotoxy(x, y);
                putchar('/');
            }

            //triangulo 4

            for(int x = 19; x > 13; x--) {
                gotoxy(x, 10);
                putchar('-');
            }
            for(int y = 15; y > 10; y--) {
                gotoxy(19, y);
                putchar('|');
            }
            for(int diagonal = 0; diagonal < 5; diagonal++) {
                int x = 18 - diagonal;
                int y = 15 - diagonal;
                gotoxy(x, y);
                putchar('\\');
            }

            // SEGUNDO CUADRANTE
            gotoxy(60, 9);
            putchar('*');
            
            // cabeza
            for(int x = 58; x < 63; x++) {
                gotoxy(x, 7);
                putchar('-');
                gotoxy(x, 10);
                putchar('-');
            }
            for(int y = 8; y < 10; y++) {
                gotoxy(58, y);
                putchar('|');
                gotoxy(62, y);
                putchar('|');
            }
            //cuerpo 
            for(int y = 11; y < 14; y++) {
                gotoxy(60, y);
                putchar('|');
            }
            // brazos
            for(int x = 58; x < 63; x++) {
                if(x == 60) {
                    putchar('|');
                } else {
                    gotoxy(x, 12);
                    putchar('-');
                }
            }
            // columpio
            for(int x = 56; x < 65; x++) {
                gotoxy(x, 14);
                putchar('-');
            }
            for(int y = 13; y > 5; y--) {
                gotoxy(56, y);
                putchar('|');
                gotoxy(64, y);
                putchar('|');
            }

            for(int x = 50; x < 71; x++) {
                gotoxy(x, 5);
                putchar('-');
            }
            for(int y = 6; y < 15; y++) {
                gotoxy(50, y);
                putchar('|');
                gotoxy(70, y);
                putchar('|');
            }
            
            // TERCER CUADRANTE YA CASI TERMINO FAK

            // divisi�n del cuadrante en 3
            for(int x = 1; x < 40; x++) {
                gotoxy(x, 20);
                putchar('-');
                gotoxy(x, 26);
                putchar('-');
            }

            for(int y = 17; y < 20; y++) {
                gotoxy(13, y);
                putchar('|');
                gotoxy(26, y);
                putchar('|');
                for(int y2 = 21; y2 < 26; y2++) {
                    gotoxy(20, y2);
                    putchar('|');
                    for(int y3 = 27; y3 < 30; y3++) {
                        gotoxy(13, y3);
                        putchar('|');
                        gotoxy(26, y3);
                        putchar('|');
                    }
                }
            }
            
            // cuarto cuadrante

            // caracol
            
            // medidas x 39, y 13

			int right = 79, bottom = 29, left = 40, top = 18, vueltas = 0;
			while(vueltas < 9) {
				for(int ix = left; ix <= right; ix++) {
					gotoxy(ix, 17);
					putchar('-');
				}
				for(int jy = top; jy <= bottom; jy++) {
					gotoxy(79, jy);
					putchar('|');
				}
				for(int kx = right; kx > left; kx--) {
					gotoxy(kx, 29);
					putchar('-');
				}
				for(int hy = bottom; hy > top; hy--) {
					gotoxy(hy, 54);
				}
			}
			

			//
            
			std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		// nisiquiera se atrevan a preguntar como se hizo este caso pq ni yo se	
			break;
        }
        
        case '7': {
			// int array1[9], array2[9], array3[9];
			limpiarPantalla();
			char eleccion;
			
			std::cout << "Estas son las opciones del submenu: \n"
					  << "1) Arreglo ordenado por metodo de burbuja.\n"
					  << "2) Raiz cuadrada de todos los elementos.\n"
					  << "3) Mostrar unicamente elementos entre el rango +50 y -100.\n";
			std::cin >> eleccion;
			
			
			switch(eleccion) {
				case '1': {
					
					/* 
					Operaciones con arreglos
					1) Ordenamiento por metodo de burbuja
					2) Raiz cuadrada de todos los elementos
					3) Mostrar unicamente elementos entre el rango +50 -100
					*/
					
					limpiarPantalla();
					int array[9];
					std::cout << "Datos del arreglo ordenados por el metodo burbuja.\n";
					for(int i = 0; i <= 9; i++) {
						std::cout << "Ingresa los datos de la posicion [" << i << "]\n";
						std::cin >> array[i];
					}
					
					// ordenamiento 
					
					
					int longitud = sizeof(array) / sizeof(array[0]);
					std::cout << longitud << std::endl;
					burbujeo(array, longitud);
					
					std::cout << "{ ";
					for(int h = 0; h <= 9; h++) {
						std::cout << array[h] << ", ";
					}
					std::cout << " }";
										
					break;
				}
				case '2': {
					// raiz de todos los elementos
					limpiarPantalla();

					int longitud = 0;
					std::cout << "Define la longitud del array: ";
					std::cin >> longitud;
					std::cout << "Mui bien, la longitud del arreglo va a ser: " << longitud;
					
					int array[longitud];
					
					std::cout << "Ahora dame los valores de cada posicion del arreglo: " << std::endl;
					for(int i = 0; i <= longitud - 1; i++) {
						std::cin >> array[i];
					}
					
					std::cout << "Raices de todas las posiciones: " << std::endl;
					
					for(int j = 0; j <= longitud; j++) {
						std::cout << "posicion[" << j << "] = " << sqrt(array[j]) << std::endl;
					}
					break;
				}
				case '3': {
                    // mostrar elementos entre +50 y -100
                    limpiarPantalla();

                    int size;
                    std::cout << "Define la longitud del array: ";
                    std::cin >> size;
                    int arr[size];

                    std::cout << "Ingresa los elementos del array: ";
                    for(int i = 0; i < size; i++) {
                        std::cin >> arr[i];
                    }

                    std::cout << "Estos son los elementos entre el rango +50 y -100: \n";
                    for(int i = 0; i < size; i++) {
                        if(arr[i] > -100 && arr[i] < 50) {
                            std::cout << "Elemento [" << i << "]: " << arr[i] << std::endl;
                        }
                    }



					break;
				}
				default: {
					std::cout << "Gracias por usar el submenu.";
					break;
				}
			}
			break;
		}
        
        default: {
        	std::cout << "Esa opcion no existe.";
			break;
			}
        }

		setColor(7);
        char respuesta;
        std::cout << "\n¿Deseas volver al menu de opciones? [y/n]: ";
        std::cin >> respuesta;

        if (respuesta == 'y' || respuesta == 'Y')
        {
            seguir = true;
        }
        else
        {
            limpiarPantalla();
            seguir = false;
            std::cout << "¡Gracias por usar el programa!\n"
                      << "Programador: Said Jesus Sanchez Vega\n"
                      << "Cuando se creo este codigo, solo dios y yo sabiamos por que y como funcionaba, ahora, solo dios sabe.\n"
                      << "Fecha 30/03/2026\n"
                      << "Grupo: 4IV13\n";
        }

    } while (seguir == true);
}
