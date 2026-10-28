/*
char arr_unidinmen[4] = {'a','b','c','d'}; // vector de 4 elementos
char arr_bidimen[3][2] = {{'h','o'},{'l','a'},{'2','6'}};// 3 filas x 2 columnas (3x2)

*/
#include <stdio.h>
int main(void) {
    int matriz[2][3] = {
                        {10, 20, 30},
                        {40, 50, 60}
                       };
    int (*ptr)[3] = matriz; // arreglo de 3 punteros, apuntando a matriz

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(*(ptr + i) + j)); // aprovechando la aritmetica de punteros
        }
        printf("\n");
    }
    return 0;
}