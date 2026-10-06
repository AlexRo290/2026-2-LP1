#include <stdio.h>
#define FILAS 5
#define COLUMNAS 4

int main () {

    double matriz[FILAS][COLUMNAS];

    for(size_t f = 0; f < FILAS; f++){
        for(size_t c = 0; c < COLUMNAS; c++){
            matriz[f][c] = 0.0;
        } 
    }

    for(size_t i = 0; i < FILAS; i++) {
        for(size_t j = 0; j < COLUMNAS; j++){
            
            printf("\t%lf", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}