#include <stdio.h> 
int main(void) { 
    int a ,b; 
// Version ambigua (compila, pero ¿a que if pertenece el else?) 
    printf("Ingrese dos numeros: ");
    scanf("%d %d",&a,&b);
    
    if (a > 0) 
        if (b > 0) 
        printf("Ambos positivos\n"); 

    else 
        printf("¿Cuando se imprime esto?\n"); 
 

 
 
    if (a > 0) { 
        if (b > 0) { 
            printf("Ambos positivos (claro)\n"); 
        } 
    } else { 
        printf("a no es positivo\n"); 
    } 
 
    return 0; 
}