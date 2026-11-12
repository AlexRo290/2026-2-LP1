#include <stdio.h>

typedef struct Configuracion {
    unsigned int bandera : 1;
    unsigned int nivel : 3;
    unsigned int modo : 2;
    unsigned int prioridad : 4;
} Config;

int main() {

    Config c1;
    c1.bandera = 1; // los valores fuera del rango desbordan (overflow)

    printf("bandera    : %u\n", c1.bandera);
    printf("\nConfig ocupa %zu bytes\n\n", sizeof(c1));

    return 0;
}