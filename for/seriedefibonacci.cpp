#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <iostream>

int main() {
    long long int limite = 0, Fn = 0, Fn2 = 1, Fn3 = 1;

    printf("Indica el limite a la secuencia de fibonacci: ");
    scanf("%lld", &limite);

    for(int i = 0; i <= limite; i++) {
        printf("%lld  ", Fn3);
        Fn3 = Fn + Fn2;
        Fn = Fn2;
        Fn2 = Fn3;
    }
}