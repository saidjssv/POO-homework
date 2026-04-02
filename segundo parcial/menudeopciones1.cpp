/*
    Menu de opciones con switch case

    ACLARACION: Este programa (y todos en realidad) fueron programados en Linux, por lo que
                tuve que agregar modificaciones posiblemente sacadas de internet para poder 
                hacer uso de cls, y otros comandos de terminal cmd que obviamente 
                no funcionan en linux, de ahí en fuera, todo el codigo fue hecho por mi

                opciones: 

                !) Calcular promedio de calificaciones
                2) Calcular area de un cuadrado
                3) Mostrar abedecario en mayusculas y minusculas
                4) Salir
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
    Un gran ejemplo de lo que se explica arriba es esta función, la cual funciona para windows y para linux (y creo yo para MacOS).
*/



int main() {

    /* Variables */
    char opcion;
    bool seguir = true;
    
    do {
        limpiarPantalla();
        std::cout << "Bienvenido nuevamente al menu de opciones! Elige alguna de las siguientes opciones: \n"
                  << "1) Calcular promedio de calificaciones.\n"
                  << "2) Calcular área de un cuadrado.\n"
                  << "3) Mostrar abecedario en mayúsculas y minúsculas.\n"
                  << "4) Salir.\n"
                  << "Opción: ";
        std::cin >> opcion;

        switch(opcion) {
            case '1': {

                /*
                    CALCULAR PROMEDIO DE CALIFICACIONES
                */

                limpiarPantalla();

                int cantidad;
                float c1, c2, c3;
                std::cout << "Gran elección! Ingresa tus tres calificaciones: ";
                std::cin >> c1 >> c2 >> c3;
                
                float promedio = (c1 + c2 + c3) / 3;
                std::cout << "El promedio de tus califiaciones es: " << promedio << std::endl;
                
                if(promedio >= 6) {
                    std::cout << "Felicidades, has aprobado!!" << std::endl;
                } else {
                    std::cout << "Lo siento mucho vrochacho, reprobaste" << std::endl;
                }

                break;
            }
            case '2': {
                /*
                    CALCULAR AREA DE UN CUADRADO
                */

                limpiarPantalla();

                float lado;
                std::cout << "Excelente!! Ingresa la medida de uno de los lados del cuadrado: ";
                std::cin >> lado;
                float area = pow(lado, 2);
                std::cout << "El área del cuadrado es: " << area << std::endl;
                break;
            }

            case '3': {
                /*
                    MOSTRAR ABECEDARIO EN MAYÚSCULAS Y MINÚSCULAS
                */

                limpiarPantalla();

                std::cout << "¡Ok! A continuación se muestra el abecedario en mayúsculas y minúsculas: " << std::endl;
                for(char letra = 'A'; letra <= 'Z'; letra++) {
                    std::cout << letra << " ";
                }
                std::cout << "\nAhora minúsculas: " << std::endl;
                for(char letra = 'a'; letra <= 'z'; letra++) {
                    std::cout << letra << " ";
                }
                break;
            }
            case '4': {
                seguir = false;
                std::cout << "¡Gracias por usar el programa!\n"
                          << "Programador: Said Jesús Sánchez Vega\n"
                          << "Fecha 30/03/2026\n"
                          << "Grupo: 4IV13\n";
                break;
            }
            default: {
                std::cout << "Opción no válida, por favor elige una opción del 1 al 4." << std::endl;
                break;
            }
        }

        std::cout << "\nQuieres reiniciar el programa? [y/n]: ";
        char respuesta;
        std::cin >> respuesta;

        if(respuesta == 'y' || respuesta == 'Y') {
            seguir = true;
        } else {
            seguir = false;
            std::cout << "¡Gracias por usar el programa!\n"
                      << "Programador: Said Jesús Sánchez Vega\n"
                      << "Fecha 30/03/2026\n"
                      << "Grupo: 4IV13\n";
        }

    } while(seguir == true);

}

