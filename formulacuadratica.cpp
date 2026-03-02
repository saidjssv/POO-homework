#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <cmath>

int main() {
	int a, b, c, validacion;
	float x, x2;
	char respuesta;
	inicio:
		system("cls");
		printf("Resuelve una ecuación cuadratica con este programa :D\n");
		printf("Ingresa el valor del termino cuadratico: ");
		scanf("%i", &a);
		printf("Ingresa el valor del termino lineal: ");
		scanf("%i", &b);
		printf("Ingresa el valor del termino independiente: ");
		scanf("%i", &c);
		
		printf("Validando que la raiz cuadrada no sea negativa...\n");
		Sleep(5000);
		validacion = pow(b, 2) - 4 * a * c;
		
		if(validacion < 0) {
			printf("Tus valores generan error, nuv");
		} else {
			printf("Validado...\n");
			printf("Calculando...\n");
			Sleep(5000);
			
			x = (-b + sqrt(validacion)) / (2 * a);
		
			printf("Calculando x2...\n");
			Sleep(5000);
		
			x2 = (-b - sqrt(validacion)) / (2 * a);
		
			printf("Tus dos resultados son:\n");
			printf("x1: %f", x);
			printf("\nx2: %f", x2);
		}
		
		printf("\nHecho por: Said Jesús Sánchez Vega \nGrupo: 4IV13 \nFecha: 24/02/2026");
		printf("\n¿Quieres iniciar de nuevo? [y/n]: ");
		std::cin >> respuesta;
		if(respuesta == 'y' || respuesta == 'Y') {
			goto inicio;
		} else {
			goto final;
		}
		final:
			printf("bai");
}
