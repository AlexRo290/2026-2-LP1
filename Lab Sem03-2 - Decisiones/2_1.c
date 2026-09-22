#include <stdio.h> 
int main(void) { 
    int x = 5, y = 10; 

    int suma_a = x + y; 
    x = x * 2; 
    printf("A: suma=%d (con x ya modificado seria %d)\n", suma_a, x + y); 

    x = 5; 
    x = x * 2; 
    int suma_b = x + y; 
    printf("B: suma=%d\n", suma_b); 
    
    return 0; 
} 