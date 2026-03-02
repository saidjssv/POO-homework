#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
	float a;
	char respuesta;
	inicio:
		system("cls");
		printf("Este programa indica si el número ingresado es mayor, negativo o igual a 0");
		printf("\nIngresa un número: ");
		scanf("%f", &a);
		
		if(a < 0) {
			printf("Tu número es negativo");
		} else if(a > 0) {
			printf("Tu número es positivo");
		} else if(a == 0) {
			printf("Tu número es igual que 0");
		}
		
		printf("\nHecho por: Said Jesús Sánchez Vega \nGrupo: 4IV13 \nFecha: 24/02/2026");
		printf("¿Quieres iniciar de nuevo? [y/n]: ");
		std::cin >> respuesta;
		if(respuesta == 'y' || respuesta == 'Y') {
			system("cls");
			goto inicio;
		} else {
			goto final;
		}
		final:
			printf("bai");
}
