#include <stdio.h>

int main() {
    double TOLERANCIA = 1e-6;
    double suma = 0.0;
    double termino;
    int signo = 1;
    long n = 1;
    long iteraciones = 0;

    do {
        termino = 1.0 / n;
        suma += signo * termino;
        signo = -signo;   
        iteraciones++;
    } while (termino >= TOLERANCIA);

    double ln2_esperado = 0.693147;   
    double error_absoluto = ln2_esperado - suma;
    if (error_absoluto < 0) error_absoluto = -error_absoluto;  

    printf("Tolerancia: %.0e\n", TOLERANCIA);
    printf("Iteraciones: %ld\n", iteraciones);
    printf("Suma calculada : %.6f\n", suma);
    printf("ln(2) esperado : %.6f\n", ln2_esperado);
    printf("Error absoluto : %.6f\n", error_absoluto);

    return 0;
}