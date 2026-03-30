#include <cstdlib>
#include <cstdio>
#include <iostream>

void limpiarpantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {

    int edad;
    char resp;
	printf(R"(Este programa te indica si puede0s obtener tu INE o no dependiendo de la edad que tengas
Ahora indica tu edad: 
)");
    scanf("%d", &edad);
        
    if(edad < 18) {
        printf("Lastima :(, aún no puedes tramitar tu ine");
    } else {
        printf("Ya puedes tramitar tu ine!!");
    }

    printf("Desea repetir el programa? [y/n]");
    scanf(" %c", &resp);

    if(resp == 'y' || resp == 'Y') {
        limpiarpantalla();
        main();
    } else {
        printf(R"(
Practica #3
Programador: Said Jesús Sánchez Vega
Grupo: 3IV13
            )");
    }
}