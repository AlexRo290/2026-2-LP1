#include<stdio.h>
#include<string.h>
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

    struct Alumno a1 = {999, "Abel", 18}; //Declaracion de la variable a1 de tipo Alumno
    struct Alumno *ptr; // se crea un apuntador al tipo Alumno

    ptr = &a1; // ptr toma la direccion de a1

    mostrar(*ptr); 

    // Modificar los datos
    ptr-> edad = 33; //(*ptr).edad = 33
    mostrar(*ptr);


    return 0;
}