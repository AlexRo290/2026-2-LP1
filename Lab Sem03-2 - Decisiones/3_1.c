#include <stdio.h> 
int main(void) { 
    int edad; 
    printf("Edad: "); 
    scanf("%d", &edad); 

    if (edad >= 18) { 
        printf("Mayor de edad\n"); 
    } 

    if (edad >= 18) { 
        printf("Puede votar\n"); 
    } else { 
        printf("No puede votar\n"); 
    } 

    if (edad >= 18) 
        printf("Linea 1\n"); 
        printf("Linea 2\n");   
    return 0; 
} 