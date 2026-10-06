#include<stdio.h>
int main(){


    int *ptr; //se define ptr como puntero
              // es una variable que opera con direccion de memoria 
              //inicialmente apunta a algun lugar de la memoria
    int cantidad = 200;

   /*   REGLA : Si se crea el puntero se requiere inicializar antes de usar */

   ptr = NULL; //inicializamos el puntero a NULL, es decir que no apunta a ningun lugar de la memoria

   if(ptr == NULL){
        ptr = &cantidad; 
        printf("Puntero inicializado, su direccion es %p y su valor es %d\n",ptr,*ptr);

   }else {
       
        printf("El puntero ya tiene memoria, no es necesario inicializarlo\n");
   }










}