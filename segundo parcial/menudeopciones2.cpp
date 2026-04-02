/*

 ACLARACION: Este programa (y todos en realidad) fueron programados en Linux, por lo que
                tuve que agregar modificaciones posiblemente sacadas de internet para poder 
                hacer uso de cls, y otros comandos de terminal cmd que obviamente 
                no funcionan en linux, de ahí en fuera, todo el codigo fue hecho por mi

        opciones: 1) Una tabla de valores para la funcion seno coseno tangente donde el usuario ingresa 
                     los limites de la tabla
                  2) Calcular exponencial de euler (e^x)
                  3) Problema 1 pero con funciones inversas (arcoseno, arcocoseno, arcotangente)
                  4) Nos permita mostrar la serie de ullman
                  5) Diseñar un codigo fuente  que nos permita mostrar cuadros cosentricos con colores
                  6) cuadrado de arriba pero con dibujos en los 4 cuadrantes
                  7) Salir

*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif    
}

int main() {
    char opcion;
    bool seguir = true;
    do {

        limpiarPantalla();
        std::cout << "Bienvenido de nuevo al menú de opciones. Elige alguna de las siguientes opciones: \n"
                  << "1) Una tabla de valores para la funcion seno coseno tangente donde el usuario ingresa los limites de la tabla.\n"
                  << "2) Calcular exponencial de euler (e^x).\n"
                  << "3) Una tabla de valores para la funcion secante cosecante y cotangente (funciones trigonometricas inversas).\n"
                  << "4) Pograma donde se muestra la serie de ullman.\n"
                  << "5) cuadros cosentricos con colores.\n"
                  << "6) cuadrado cosentrico con dibujos en los 4 cuadrantes.\n"
                  << "7) Salir.\n";
        std::cin >> opcion;

        switch(opcion) {

            case '1': {

                /* FUNCIONES TRIGONOMETRICAS */

                limpiarPantalla();

                int limite;

                std::cout << "Excelente! Ingresa el limite de la tabla:";
                std::cin >> limite;

                std::cout << "-------------------- Seno --------------------\n";
                for(int i = 0; i <= limite; i++) {
                    std::cout << "Seno(" << i << ") = " << sin(i) << std::endl;
                }

                std::cout << "-------------------- Coseno --------------------\n";

                for (int j = 0; j <= limite; j++) {
                    std::cout << "Coseno(" << j << ") = " << cos(j) << std::endl; 
                }

                std::cout << "-------------------- Tangente --------------------\n";
                for(int k = 0; k <= limite; k++) {
                    std::cout << "Tangente(" << k << ") = " << tan(k) << std::endl;
                }
                
                /* ----------------------------------------------------------------- */
                break;

            }
            case '2': {

                /* CALCULAR EXPONENCIAL DE EULER */

                limpiarPantalla();

                float x;

                std::cout << "Gran elección! Ingresa el valor de x para calcular e^x: ";
                std::cin >> x;

                std::cout << "El resultado de e^x es: " << exp(x) << std::endl;

                break;

            }

            case '3': {

                /* FUNCIONES TRIGONOMETRICAS INVERSAS */

                limpiarPantalla();

                int limite;

                std::cout << "Ahora con inversas, ingresa el limite de la tabla: ";
                std::cin >> limite;

                std::cout << "-------------------- Secante --------------------\n";
                for(int i = 0; i <= limite; i++) {
                    std::cout << "Secante(" << i << ") = " << asin(i) << std::endl;
                }

                std::cout << "-------------------- Cosecante --------------------\n";

                for (int j = 0; j <= limite; j++) {
                    std::cout << "Cosecante(" << j << ") = " << acos(j) << std::endl; 
                }

                std::cout << "-------------------- Cotangente --------------------\n";
                for(int k = 0; k <= limite; k++) {
                    std::cout << "Cotangente(" << k << ") = " << atan(k) << std::endl;
                }
                
                /* ----------------------------------------------------------------- */
            }

        }

    } while(seguir == true);
}