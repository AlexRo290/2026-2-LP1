#include <stdio.h>
#include <stdlib.h>

void dividir(int a, int b, int *cociente, int *resto){
    if(cociente != NULL) {
        *cociente = a/b;
    }
    if(resto !=NULL){
        *resto = a%b;
    }
}
void reservar_entero(int **pp, int valor) {
    *pp = (int *)malloc(sizeof(int));
    if (*pp != NULL) {
        **pp = valor;
    }
}
int main(){
    int a=10;
    int *p=&a;
    int **pp = &p;
    printf("%d , %d , %d\n",a,p,*pp);
    printf("&a = %p\n",&a);
    printf("p = %p\n",&p);
    printf("*pp = %p\n",&pp);
    **pp=99;
    printf("Tras **pp=99: a=%d\n",a);

    int cociente,residuo;
    dividir(17, 5, &cociente, &residuo);
    printf("dividir(17, 5): cociente=%d, resto=%d\n", cociente, residuo);

    int *paux = NULL;
    reservar_entero(&paux, 42);
    printf("Tras reservar_entero(&paux, 42): *paux = %d\n", *paux);
    free(paux);

    return 0;

}