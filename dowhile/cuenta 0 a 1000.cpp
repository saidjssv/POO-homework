#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <conio.h>

int main() {
	bool seguir = true;
	char respuesta;
	// sigue
	while(seguir == true) {
		// programa
		int cuenta = 0;
	system("cls");
	std::cout << "Programa que muestra una sucesion de 0 a 1000\n";

	do {	
		std::cout << cuenta << " ";
		cuenta += 10;
		} while(cuenta <= 1000); 
		
		std::cout << "\nQuieres seguir con el programa? [y/n]: ";
		std::cin >> respuesta;
		if(respuesta == 'y' || respuesta == 'Y') {
			seguir = true;
		} else {
			seguir = false;
			std::cout << "\nProgramador: Said Jesus Sanchez Vega"
				 <<	"\nGrupo: 4IV13"
				 <<	"\nPractica #1"
				 <<	"\nFecha 18/03/2026";
		}
	}
}
