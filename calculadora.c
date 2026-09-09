#include<stdio.h>
int main(){

     const float pi=3.1416;

     int n1,n2;
     float resultado;

     printf("------CALCULADORA BASICA------\n");
     printf("Ingrese dos numeros enteros:\n");

   
     printf("Ingrese el primer numero: \n");
     scanf("%d",&n1);

     printf("Ingrese el segundo numero: \n");
     scanf("%d",&n2);

     printf("\n--- RESULTADOS ---\n");
     printf("%d + %d = %d\n", n1, n2, n1 + n2);
     printf("%d - %d = %d\n", n1, n2, n1 - n2);
     printf("%d * %d = %d\n", n1, n2, n1 * n2);

 // División con resultado flotante
     resultado = (float)n1 / n2; // Casting
     printf("%d / %d = %.2f\n", n1, n2, resultado);

 // Módulo (resto)
     printf("%d %% %d = %d\n", n1, n2, n1 % n2);

 // Operadores de incremento
     printf("\n--- OPERADORES ESPECIALES ---\n");
     int x = n1;
     printf("x = %d\n", x);
     printf("x++ = %d\n", x++); // Post-incremento
     printf("Despues de x++: x = %d\n", x);
     printf("++x = %d\n", ++x); // Pre-incremento

     return 0;
}

     


