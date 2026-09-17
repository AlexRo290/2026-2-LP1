#include<stdio.h>
int main(void) {


    int a = 7, b = 2;
    printf("7 / 2 = %d (division entera)\n", a / b);
    printf("7 %% 2 = %d (modulo)\n", a % b);
    printf("7 / 2.0 = %.2f (promocion a double)\n", a / 2.0);
    printf("(float)7/2 = %.2f\n", (float)a / b);
 
    printf("-7 %% 2 = %d\n", -7 % 2);
    printf(" 7 %% -2 = %d\n", 7 % -2);
 
    int x = 10;
    x += 5; printf("x += 5 -> %d\n", x);
    x -= 3; printf("x -= 3 -> %d\n", x);
    x *= 2; printf("x *= 2 -> %d\n", x);
    x /= 4; printf("x /= 4 -> %d\n", x);
    x %= 4; printf("x %%= 4 -> %d\n", x);
 return 0;
}

/* 
1.- ¿Por qué 7 / 2 da 3 y no 3.5?
Tanto a y b estan definidos como enteros por ende su division tambien sera entera
y al dar esto 3.5 se trunca a 3.

2.- ¿Cuál es el signo de -7 % 2 en C? ¿Es igual que en Python? No — C trunca hacia cero, Python
hacia −∞?.
!NO ES IGUAL! , en resumen : 
- En C, el resultado de -7 % 2 es -1, porque C trunca hacia cero.
- En Python, el resultado de -7 % 2 es 1, porque Python trunca hacia -∞.

3.- ¿Qué ocurre con x /= 4 cuando x es //int?
La división que se ejecuta es división entera por que la variable x 
es de tipo int, por lo que el resultado de la división se trunca a un número entero. 

*/




