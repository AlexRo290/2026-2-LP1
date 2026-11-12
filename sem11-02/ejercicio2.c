#include <stdio.h>

enum Mes {
    ENERO = 1,
    FEBRERO,
    MARZO,
    ABRIL,
    MAYO,
    JUNIO,
    JULIO,
    AGOSTO,
    SEPTIEMBRE,
    OCTUBRE,
    NOVIEMBRE,
    DICIEMBRE
};

int main() {

    int mes = 3;

    switch (mes) {
        case ENERO:
            printf("El mes es ENE\n");
            break;
        case FEBRERO:
            printf("El mes es FEB\n");
            break;
        case MARZO:
            printf("El mes es MAR\n");
            break;
        case ABRIL:
            printf("El mes es ABR\n");
            break;
        case MAYO:
            printf("El mes es MAY\n");
            break;
        case JUNIO:
            printf("El mes es JUN\n");
            break;
        case JULIO:
            printf("El mes es JUL\n");
            break;
        case AGOSTO:
            printf("El mes es AGO\n");
            break;
        case SEPTIEMBRE:
            printf("El mes es SEP\n");
            break;
        case OCTUBRE:
            printf("El mes es OCT\n");
            break;
        case NOVIEMBRE:
            printf("El mes es NOV\n");
            break;
        case DICIEMBRE:
            printf("El mes es DIC\n");
            break;
        default:
            printf("Mes no válido\n");
            break;
    }

    return 0;
}