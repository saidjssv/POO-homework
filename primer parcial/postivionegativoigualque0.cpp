#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void limpiarPantalla() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

int main() {
	float a;
	char respuesta;
	inicio:
		limpiarPantalla();
		printf("Este programa indica si el n�mero ingresado es mayor, negativo o igual a 0");
		printf("\nIngresa un n�mero: ");
		scanf("%f", &a);
		
		if(a < 0) {
			printf("Tu n�mero es negativo");
		} else if(a > 0) {
			printf("Tu n�mero es positivo");
		} else if(a == 0) {
			printf("Tu n�mero es igual que 0");
		}
		
		printf("\nHecho por: Said Jes�s S�nchez Vega \nGrupo: 4IV13 \nFecha: 24/02/2026");
		printf("�Quieres iniciar de nuevo? [y/n]: ");
		std::cin >> respuesta;
		if(respuesta == 'y' || respuesta == 'Y') {
			limpiarPantalla();
			goto inicio;
		} else {
			goto final;
		}
		final:
			printf("bai");
}
