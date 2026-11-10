#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Defincion de un tipo de dato llamado Alumno
struct Alumno{
    int codigo;
    char nombre[20];
    int edad;
 
};

void mostrar(struct Alumno a){
    printf("Codigo     : %d\n",a.codigo);
    printf("Nombre     : %s\n",a.nombre);
    printf("Edad       : %d\n\n",a.edad);
}
int main(){

    
    struct Alumno *ptr; // El puntero apunta a cualquier lugar en la memoria

    ptr = NULL; // Poner a nulo el puntero

    // ... mucho despues reservar memoria
    ptr = (struct Alumno*)malloc(sizeof(struct Alumno));

    // Para usarlo verificar si hay memoria
    if(ptr == NULL){
        printf("No hay memoria\n");
        return 1;
    }

    ptr -> codigo = 9999;
    strcpy(ptr->nombre, "Abel");
    ptr -> edad = 22;

    mostrar(*ptr);

    free(ptr); 
    return 0;
}