#include <stdio.h>

int main(void) {
  
    char *s = "Hola, mundo";
    char *p = s;
    int longitud = 0;
    
    while (*p != '\0') {
        putchar(*p);
        longitud++;
        p++;
    }
    putchar('\n');
    printf("Longitud: %d\n", longitud);

    char s2[] = "Hola, mundo";
    
   
    char *p2 = s2;
    int longitud2 = 0;
    while (*p2 != '\0') {
        putchar(*p2);
        longitud2++;
        p2++;
    }
    putchar('\n');
    printf("Longitud: %d\n", longitud2);
  
    s2[0] = 'h';
    printf("Modificado: %s\n", s2);

   

    return 0;
}