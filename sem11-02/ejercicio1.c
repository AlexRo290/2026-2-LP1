#include <stdio.h>

union Datos {
    int como_entero;     
    float como_flotante; 
    char como_caracter;   
};

int main() {

    printf("int ocupa %zu bytes\n", sizeof(int));
    printf("float ocupa %zu bytes\n", sizeof(float));
    printf("char ocupa %zu bytes\n", sizeof(char));

    printf("\nUnion Datos ocupa %zu bytes\n", sizeof(union Datos));

    union Datos datos;
    datos.como_entero = 120;

    printf("datos (entero)   : %d\n", datos.como_entero);
    printf("datos (flotante) : %f\n", datos.como_flotante);

    datos.como_flotante = 3.1416f;

    printf("datos (entero)   : %d\n", datos.como_entero);
    printf("datos (flotante) : %f\n", datos.como_flotante);

    return 0;
}