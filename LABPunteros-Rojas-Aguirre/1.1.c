#include <stdio.h>

int main(){

    int datos[10],suma=0,minimo=1000,maximo=0;
    int indiceMinimo,indiceMaximo;
    int pares=0, impares=0;
    printf("Ingrese 10 numero enteros: ");
    for(int i=0; i<10; i++){
        
        scanf("%d", &datos[i]);
        suma += datos[i];
        if(datos[i] < minimo){
            minimo = datos[i];
            indiceMinimo = i;
        }
        if(datos[i] > maximo){
            maximo = datos[i];
            indiceMaximo = i;
        }
        if(datos[i] % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }

    printf("La suma de los numeros ingresados es: %d", suma);
    printf("\n");

    printf("El promedio de los numeros ingresados es: %.2f", (float)suma/10);
    printf("\n");

    printf("El numero minimo ingresado es: %d (indice: %d)", minimo, indiceMinimo);
    printf("\n");

    printf("El numero maximo ingresado es: %d (indice: %d)", maximo, indiceMaximo);
    printf("\n");

    printf("La cantidad de numeros pares ingresados es: %d", pares);
    printf("\n");

    printf("La cantidad de numeros impares ingresados es: %d", impares);
    printf("\n");

    printf("Original : ");
    for(int i=0; i<10; i++){
        printf("%d ", datos[i]);
    }
    printf("\n");
    printf("Invertido : ");
    for(int i=9; i>=0; i--){
        printf("%d ", datos[i]);
    }
    printf("\n");

    return 0;
}