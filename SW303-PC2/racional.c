#include "racional.h"

static int es_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int mcd(int a, int b) {
    if (b == 0) return a;
    return mcd(b, a % b);
}

void simplificar(int *num, int *den) {
    int divisor = mcd(*num, *den);
    if (divisor != 0) {
        *num /= divisor;
        *den /= divisor;
    }
}

void sumar(int n1, int d1, int n2, int d2, int *n_res, int *d_res) {
    *n_res = n1 * d2 + n2 * d1;
    *d_res = d1 * d2;
    simplificar(n_res, d_res);   
}
