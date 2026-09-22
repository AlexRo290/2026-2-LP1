#include <stdio.h> 
int main(void) { 

    int valores[] = {0, 1, -1, 42, 0}; 
    for (int i = 0; i < 5; i++) { 
         
        int v = valores[i]; 
        printf("valor = %4d | como booleano: %s\n", 
        v, v ? "VERDADERO" : "FALSO"); 
    } 
// Lo que devuelve una comparacion es 0 o 1 
    printf("\n(5 > 3) = %d\n", 5 > 3); 
    printf("(5 < 3) = %d\n", 5 < 3); 
    printf("!0 = %d, !5 = %d, !!7 = %d\n", !0, !5, !!7); 
    
    return 0; 
    
} 