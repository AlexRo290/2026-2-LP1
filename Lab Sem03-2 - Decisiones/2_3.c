#include<stdio.h>
int main() {

    int a,b,aux;
    printf("Ingrese dos numeros: ");
    scanf("%d %d",&a,&b);

    aux=a;
    a=b;
    b=aux;

    printf("Los numeros intercambiados son: %d y %d\n",a,b);

   return 0;
}