#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    char opcion;

    system("clear");
    system("cls");
    printf("Bienvenido!");
    printf("Elige una de las siguientes opciones:\n");
    printf("1) Tabla de multiplicar de 20 factores\n");
    printf("2) Sucesión de fibonacci\n");
    printf("3) Uso de logaritmos naturales\n");
    printf("4) Serie de Ullman\n");
    printf("5) Salir\n");
    printf("Opcion: ");
    scanf(" %c", &opcion);

    switch (opcion)
    {
    case '1':
    {
        int input;
        system("clear");
        system("cls");
        printf("Tabla de multiplicar con 20 factores\nIngresa un número: ");
        scanf("%d", &input);

        for (int i = 1; i <= 20; i++)
        {
            printf("%d x %d = %d\n", input, i, input * i);
        }
        break;
    }
    case '2':
    {
        system("clear");
        system("cls");
        int limite = 0, Fn = 0, Fn2 = 1, Fn3 = 1;

        printf("Indica el limite a la secuencia de fibonacci (no encima de 92): ");
        scanf("%d", &limite);

        for (int contador = 0; contador <= limite; contador++)
        {
            printf("%d  ", Fn3);
            Fn3 = Fn + Fn2;
            Fn = Fn2;
            Fn2 = Fn3;
        }
        break;
    }
    case '3':
    {
        system("clear");
        system("cls");
        double intervaloinicial, intervalofinal, incremento, numero;

        printf("Indica el intervalo inicial: ");
        scanf("%lf", &intervaloinicial);
        printf("Indica el intervalo final: ");
        scanf("%lf", &intervalofinal);
        printf("Indica el incremento: ");
        scanf("%lf", &incremento);

        printf("\nTabla de logaritmos naturales:\n");
        printf("-----------------------------------\n");
        for (double x = intervaloinicial; x <= intervalofinal; x += incremento)
        {
            numero = log(x);
            printf("ln(%.2lf) = %.6lf\n", x, numero);
        }
        break;
    }
    case '4':
    {
        system("clear");
        system("cls");
        int numero = 0, resultado = 0;
        printf("Indica el número para la serie de Ullman: ");
        scanf("%d", &numero);

        for(; numero != 1;)
        {
            if (numero % 2 == 0)
            {
                resultado = numero / 2;
                printf("%d es par, resultado: %d\n", numero, resultado);
            } else {
                resultado = (numero * 3) + 1;
                printf("%d es impar, resultado: %d\n", numero, resultado);
            }
            numero = resultado;
        }
        printf("Fin de la serie (llego a 1).\n");
        break;
    }
    case '5':
    {
        system("clear");
        system("cls");
        printf("Saliendo\n");
        break;
    }
    default:
        printf("Opcion no valida, por favor elige una opcion del 1 al 5.\n");
        break;

    }
}