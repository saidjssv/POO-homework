#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cmath>

int main() {
    int secuencia[6] = { 50, 20, 30, 100, 25, 75, };
        int paso = 6;
        int inicio = -10000;
        int fin = 5000;

        int i = 0;
        while (inicio <= fin) {
            printf("%d\n", inicio);
            inicio += secuencia[i % paso];
            i++;
        }
}