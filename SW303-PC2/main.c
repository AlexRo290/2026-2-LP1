#include <stdio.h>
#include "racional.h"

int main() {
    int num1, num2, den1, den2;
    int n, d;

    printf("------INGRESE DOS FRACCIONES------\n");
    printf("Primera fraccion\n");
    printf("Ingrese el numerador :\n");
    scanf("%d", &num1);
    printf("Ingrese el denominador :\n");
    scanf("%d", &den1);

    printf("Segunda fraccion\n");
    printf("Ingrese el numerador :\n");
    scanf("%d", &num2);
    printf("Ingrese el denominador :\n");
    scanf("%d", &den2);

    sumar(num1, den1, num2, den2, &n, &d);
    printf("Resultado simplificado: %d / %d\n", n, d);

    return 0;
}
// profe que venga asi para el final , lo revise en la guia es similar la idea de crear tu biblio
