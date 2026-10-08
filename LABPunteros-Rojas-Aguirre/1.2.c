#include <stdio.h>

int main()
{

    int m[3][4],sumafila=0;

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    int escalar=0;
    printf("Ingrese un numero escalar: ");
    scanf("%d", &escalar);

    printf("Matriz 3x4 :\n");
    for(int i=0; i<3; i++){
        sumafila = 0;
        for(int j=0; j<4; j++){
            printf("%d   ", m[i][j]);
            sumafila += m[i][j];
        }
        printf(" | suma fila = %d",sumafila);
        printf("\n");
    }    
    printf("\n");
    printf("--------------------------------\n");

    int sumatotal = 0;
    for(int j=0; j<4; j++){
        int sumacolumna = 0;
        for(int i=0; i<3; i++){
            sumacolumna += m[i][j];
            sumatotal += m[i][j];
        }
        printf(" %d  ", sumacolumna);
    }
    printf("(suma de cada columna)\n");

    printf("Suma total de la matriz: %d\n", sumatotal);
    printf("Transpuesta 4x3 :\n");
    for(int j=0; j<4; j++){
        for(int i=0; i<3; i++){
            printf("%d   ", m[i][j]);
        }
        printf("\n");
    }
    printf("Escalar k = %d:\n", escalar);
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d   ", m[i][j]*escalar);
        }
        printf("\n");
    }

    return 0;


}