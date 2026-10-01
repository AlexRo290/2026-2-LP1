#include <stdio.h>


int suma_digitos(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}


int raiz_digital(int n) {
    if (n == 0) return 0;
    while (n >= 10) {
        n = suma_digitos(n);
    }
    return n;
}

void imprimir_traza(int n) {
    printf("%d", n);
    while (n >= 10) {
        n = suma_digitos(n);
        printf(" -> %d", n);
    }
    printf("\n");
}

int main(void) {
    int n;
    printf("Ingrese n: ");
    scanf("%d", &n);

    imprimir_traza(n);
    printf("Raiz digital: %d\n", raiz_digital(n));

    return 0;
}