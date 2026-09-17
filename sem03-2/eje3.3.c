#include <stdio.h>

unsigned int contar_unos(unsigned int n) {
    int cuenta = 0;
    while (n) {
        n &= (n - 1);
        cuenta++;
    }
    return cuenta;
}

int main(void) {
    unsigned int n = 202;
    printf("n = %u, unos = %u\n", n, contar_unos(n));

    int negativo = -8;
    printf("%d >> 1 = %d\n", negativo, negativo >> 1);

    unsigned int p = 16;
    printf("%u es potencia de 2? %d\n", p, p && !(p & (p - 1)));
    p = 18;
    printf("%u es potencia de 2? %d\n", p, p && !(p & (p - 1)));

    return 0;
}