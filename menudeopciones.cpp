/*
=============================================================
DISCLAIMER:
En caso de que el código no ejecute correctamente,
es probable que el compilador utilizado sea antiguo
y no soporte algunas características usadas aquí.
Se recomienda usar compiladores modernos como:

g++ (GCC moderno)
clang++
o compiladores modernos de windows

=============================================================
*/

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cmath>

void limpiarPantalla()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    limpiarPantalla();
    char opcion;

    printf(R"(Bienvenido!
Elige una de las siguientes opciones:
1) Ec. de 2do grado.
2) Sucesión en incrementos variables -10000 hasta 5000.
3) Comparación de datos y mostrar el mayor
4) Numeración de -1000 hasta -50 de 5 en 5
5) Salir
)");
    scanf("%c", &opcion);

    switch (opcion) {

    case '1': {
        int a, b, c, validacion;
        float x, x2;

        limpiarPantalla();
        printf(R"(Resuelve una ecuacion cuadratica con este programa :D
Ingresa el valor del termino cuadratico: )");
        scanf("%d", &a);

        printf("Ingresa el valor del termino lineal: ");
        scanf("%d", &b);

        printf("Ingresa el valor del termino independiente: ");
        scanf("%d", &c);

        validacion = pow(b,2) - 4*a*c;

        if(validacion < 0 || a == 0)
        {
            printf("Tus valores generan error\n");
        }
        else
        {
            x = (-b + sqrt(validacion)) / (2*a);
            x2 = (-b - sqrt(validacion)) / (2*a);

            printf(R"(Tus dos resultados son:
x1: %f
x2: %f

)", x, x2);
        }

        break;
    }

    case '2': {

        limpiarPantalla();

        int secuencia[6] = {50,20,30,100,25,75};
        int paso = 6;
        int inicio = -10000;
        int fin = 5000;

        int i = 0;

        while(inicio <= fin)
        {
            printf("%d\n", inicio);
            inicio += secuencia[i % paso];
            i++;
        }

        break;
    }

    case '3': {

        limpiarPantalla();

        std::vector<long long int> array(5);

        for(int i=0;i<5;i++)
        {
            printf("Ingresa el valor número %d: ", i+1);
            scanf("%lld",&array[i]);
        }

        std::sort(array.begin(), array.end());

        printf("El número mayor es: %lld\n", array[4]);

        break;
    }

    case '4': {

        limpiarPantalla();

        int inicio = -1000;
        int fin = -50;

        while(inicio <= fin)
        {
            printf("%d\n", inicio);
            inicio += 5;
        }

        break;
    }

    case '5': {

        limpiarPantalla();

        printf(R"(Saliendo del programa...

Hecho por: Said Jesus Sanchez Vega
Grupo: 4IV13
Fecha: 24/02/2026
)");

        break;
    }

    default: {

        limpiarPantalla();
        printf("Opción no válida, elige entre 1 y 5.\n");

        break;
    }

    }
}