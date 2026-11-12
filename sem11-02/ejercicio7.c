#include <stdio.h>

int funcion_sumar(int a, int b) {
    return a + b;
}

int funcion_restar(int a, int b) {
    return a - b;
}

int funcion_multiplicar(int a, int b) {
    return a * b;
}

int funcion_dividir(int a, int b) {
    if (b == 0) return 0;

    return a / b;
}

struct Calculadora {
    int (*sumar)(int, int);
    int (*restar)(int, int);
    int (*multiplicar)(int, int);
    int (*dividir)(int, int);
};

int main() {

    struct Calculadora calc = {
        .sumar = funcion_sumar,
        .restar = funcion_restar,
        .multiplicar = funcion_multiplicar,
        .dividir = funcion_dividir
    };

    int a = 45, b = 15;
    printf("%d + %d = %d\n", a, b, calc.sumar(a, b));
    printf("%d - %d = %d\n", a, b, calc.restar(a, b));
    printf("%d * %d = %d\n", a, b, calc.multiplicar(a, b));
    printf("%d / %d = %d\n", a, b, calc.dividir(a, b));

    return 0;
}