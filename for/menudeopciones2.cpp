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

#include <iostream>
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
    char opcion;

    limpiarPantalla();

    printf(R"(Bienvenido!
Elige una de las siguientes opciones:
1) Tabla de multiplicar de 20 factores
2) Sucesión de fibonacci
3) Uso de logaritmos naturales
4) Serie de Ullman
5) Salir
Opcion: )");

    scanf(" %c",&opcion);

    switch(opcion)
    {

    case '1': {

        int input;

        limpiarPantalla();

        printf(R"(Tabla de multiplicar con 20 factores
Ingresa un número: )");

        scanf("%d",&input);

        for(int i=1;i<=20;i++)
        {
            printf("%d x %d = %d\n",input,i,input*i);
        }

        break;
    }

    case '2': {

        limpiarPantalla();

        int limite = 0;
        long long Fn = 0;
        long long Fn2 = 1;
        long long Fn3 = 1;

        printf("Indica el limite a la secuencia de fibonacci (no encima de 92): ");
        scanf("%d",&limite);

        for(int contador=0;contador<=limite;contador++)
        {
            printf("%lld  ",Fn3);

            Fn3 = Fn + Fn2;
            Fn = Fn2;
            Fn2 = Fn3;
        }

        break;
    }

    case '3': {

        limpiarPantalla();

        double intervaloinicial, intervalofinal, incremento, numero;

        printf("Indica el intervalo inicial: ");
        scanf("%lf",&intervaloinicial);

        printf("Indica el intervalo final: ");
        scanf("%lf",&intervalofinal);

        printf("Indica el incremento: ");
        scanf("%lf",&incremento);

        printf(R"(

Tabla de logaritmos naturales
-----------------------------------
)");

        for(double x=intervaloinicial; x<=intervalofinal; x+=incremento)
        {
            numero = log(x);
            printf("ln(%.2lf) = %.6lf\n",x,numero);
        }

        break;
    }

    case '4': {

        limpiarPantalla();

        int numero = 0;
        int resultado = 0;

        printf("Indica el número para la serie de Ullman: ");
        scanf("%d",&numero);

        for(; numero != 1;)
        {

            if(numero % 2 == 0)
            {
                resultado = numero/2;
                printf("%d es par, resultado: %d\n",numero,resultado);
            }
            else
            {
                resultado = (numero*3)+1;
                printf("%d es impar, resultado: %d\n",numero,resultado);
            }

            numero = resultado;
        }

        printf("Fin de la serie (llego a 1).\n");

        break;
    }

    case '5': {

        limpiarPantalla();

        printf(R"(Saliendo del programa...

Hecho por: Said Jesus Sanchez Vega
Grupo: 4IV13
Fecha: 10/03/2026
)");

        break;
    }

    default: {

        printf("Opcion no valida, elige entre 1 y 5.\n");

        break;
    }

    }
}