#include <stdio.h>

int main() {
    float a, b, c;

    printf("Ingrese los lados del triangulo (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Lados invalidos\n");
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        printf("No forman un triangulo\n");
    }
    else if (a == b && b == c) {
        printf("Equilatero\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Isosceles\n");
    }
    else {
        printf("Escaleno\n");
    }

    return 0;
}