#include <stdio.h>
#include <math.h>   // requiere la bandera -lm al compilar

double seno_personalizado(double x) {
    return sin(x);
}

double balistica(double x) {
    return -x * x;
}

// void graficar(double L, double U) {
//     for (double dx = L; dx < U; dx += 0.1) {
//         onda(dx); // no grafica, solo retorna valores que ni siquiera usamos aún jaja
//     }
// }

void graficar(double limite_inf, double limite_sup, double (*func)(double)) {
    for (double dx = limite_inf; dx < limite_sup; dx += 0.1) {
        func(dx);
    }
}

int main() {

    graficar(-3.14, 3.14, seno_personalizado);
    graficar(0, 25, balistica);

    return 0;
}