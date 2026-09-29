#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1;              // CASO BASE
    return n * factorial(n - 1);       // CASO RECURSIVO
}

int main() {
    int n;

    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Error: el numero debe ser positivo.\n");
        }
    } while (n <= 0);

    printf("%d! = %d\n", n, factorial(n));

    return 0;
}