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
    int input;
    char resp;
    limpiarpantalla();
    printf("Tabla de multiplicar con 20 factores\nIngresa un número: ");
    scanf("%d", &input);

    for(int i = 1; i <= 20; i++) {
        printf("%d x %d = %d\n", input, i, input * i);
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