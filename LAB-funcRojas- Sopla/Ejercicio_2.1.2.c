#include<stdio.h>

int incrementar(int x) {
  x = x + 1;
  return x;
}

int main(void) {
  int n = 10;

  printf("Despues de llamar: n = %d\n",  incrementar(n)); 
 return 0;
}