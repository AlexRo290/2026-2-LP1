#include<stdio.h>
int main(void) {
    int anio;

    printf("Digite un anio: ");
    scanf("%d", &anio);

    int bisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
    printf("%d es bisiesto: %d\n", anio, bisiesto);
 return 0;
}