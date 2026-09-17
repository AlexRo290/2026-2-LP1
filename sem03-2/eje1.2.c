#include<stdio.h>
int main(void) {
    int N;
    
    printf("Ingrese un número entero(de 4 cifras): ");
    scanf("%d", &N);
    while(N < 1000 || N > 9999){
        printf("Número inválido. Ingrese un número entero de 4 cifras: ");
        scanf("%d", &N);
    }
    printf("El número ingresado es: %d\n", N);

    printf("Miles: %d\n", N / 1000);
    printf("Centenas: %d\n", (N / 100) % 10);
    printf("Decenas: %d\n", (N / 10) % 10);
    printf("Unidades: %d\n", N % 10);
    
    return 0;
}