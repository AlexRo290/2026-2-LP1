#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p; //puntero a un entero o a tipo int
    //msj es la memoria a volcar 
    char *msj="Bienvenidos a la Escuela de Ingeneria de Software - UNI";
    char *c=msj;
    p=(int *)malloc(sizeof(int)*5); //malloc devuelve una region de memoria
                                    //de tamaño 5 veces de un entero
    for(size_t i=0;i<5;i++){ //muestra la basura de la memoria
        printf("En la direccion %p esta el valor %d\n",(p+i),*(p+i));
    }   
    //dump memory - volcar el contenido de la memoria en pantalla//
    int cuenta = 0;
    printf("Imprimiendo la cadena\n");
    while(*c != '0'){//mientras el caracter sea diferente de fin de cadena
        printf("%d\t",*c); //mostrar el caracter que está en la memoria 
        c++;//se aumenta la direccipn del puntero
        cuenta++;
        if(cuenta %16==0){
            printf("\n");
        }
    }
    free(p);

    return 0;
}