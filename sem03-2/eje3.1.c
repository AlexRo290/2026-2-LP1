#include <stdio.h>
void imprimir_binario(unsigned char n) {
   for (int i = 7; i >= 0; i--) {
       putchar((n >> i) & 1 ? '1' : '0');
    }
    putchar('\n');
}
int main(void) {
   unsigned char a = 0b11001010; 
   unsigned char b = 0b10110100; 
 
   printf("a = "); imprimir_binario(a);
   printf("b = "); imprimir_binario(b);
   printf("a & b = "); imprimir_binario(a & b); 
   printf("a | b = "); imprimir_binario(a | b); 
   printf("a ^ b = "); imprimir_binario(a ^ b); 
   printf("~a = "); imprimir_binario(~a); 
   printf("a << 2 = "); imprimir_binario(a << 2); 
   printf("a >> 2 = "); imprimir_binario(a >> 2); 
 return 0;
}