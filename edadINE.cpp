#include <cstdlib>
#include <cstdio>
#include <iostream>

int main() {

    int edad;

	printf(R"(Este programa te indica si puede0s obtener tu INE o no dependiendo de la edad que tengas
Ahora indica tu edad: 
)");
    scanf("%d", &edad);
        
    if(edad < 18) {
        printf("Lastima :(, aún no puedes tramitar tu ine");
    } else {
        printf("Ya puedes tramitar tu ine!!");
    }
}