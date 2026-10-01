#include <stdio.h>

int incrementar() {
    static int contador = 0; 
   contador++;
   return contador;
}
int main(void) {
   incrementar();
   incrementar();
   printf("global contador = %d\n", incrementar());
return 0;
}
