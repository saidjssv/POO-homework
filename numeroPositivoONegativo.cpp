#include <iostream> 
#include <conio.h>
#include <stdlib.h> 
#include <stdio.h>

int main() {
	inicio:
	system("cls");
	float a;
	char respuesta;
	printf("Ingresa un valor: ");
	scanf("%f", &a);
	
	if(a <= 0)	{
		printf("Tu valor %f es menor negativo o igual que 0.", a);
	} else {
		printf("Tu valor %f es mayor (positivo) que 0.", a);
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
