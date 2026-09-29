#include <stdio.h>

int contador() {
    static int c = 0;  
    c++;               
    return c;
}

int main() {
    printf("%d\n", contador());  
    printf("%d\n", contador());   
    printf("%d\n", contador());  
    return 0;
}