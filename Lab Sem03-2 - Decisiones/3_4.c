
#include <stdio.h> 
 
int main(void) { 
    int nota; 
    printf("Nota (0-100): "); 
    scanf("%d", &nota); 
 
    // Validacion primero, logica despues 
    if (nota < 0 || nota > 100) { 
        printf("Nota invalida\n"); 
    } else { 
        if (nota >= 90) { 
            printf("Excelente\n"); 
        } else { 
            if (nota >= 70) { 
                printf("Aprobado\n"); 
            } else { 
                printf("Reprobado\n"); 
            } 
        } 
    } 
 
    return 0; 
} 