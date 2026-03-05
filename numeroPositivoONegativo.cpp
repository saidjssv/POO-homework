#include <iostream> 
#include <stdlib.h> 
#include <stdio.h>

void limpiarPantalla() {
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

int main() {
	inicio:
	limpiarPantalla();
	float a;
	char respuesta;
	printf("Ingresa un valor: ");
	scanf("%f", &a);
	
	if(a <= 0)	{
		printf("Tu valor %f es menor negativo o igual que 0.", a);
	} else {
		printf("Tu valor %f es mayor (positivo) que 0.", a);
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
