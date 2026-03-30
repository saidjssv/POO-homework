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
} // tuve q agregar esto por q trabajo en linux

int main() {
    limpiarPantalla();
    std::vector<long long int> array(5);
        for(int i = 0; i < 5; i++) {
            printf("Ingresa el valor número %d: ", i + 1);
            scanf("%lld", &array[i]);
        }

        std::sort(array.begin(), array.end());
        printf("El número mayor es: %lld\n", array[4]);
}