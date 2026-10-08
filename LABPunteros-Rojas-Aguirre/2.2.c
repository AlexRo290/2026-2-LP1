#include <stdio.h>
int main(){
    int v[8]={10,20,30,40,50,60,70,80};
    int *p=v;
    int suma;
    printf("*p : %d\n",*p);
    printf("(p+1) : %d\n",(p+1));
    printf("(p+7) : %d\n",(p+7));
    printf("p[3] : %d\n",p[3]);
    printf("3[p] : %d\n",3[p]);
    int diferencia= (p+5)-p;
    printf("la diferencia de (p+5)-p : %d\n",diferencia);
    printf("tamaño de int: %zu\n",sizeof(int));
    printf("Recorrido foward: ");
    for(int i=0;i<8;i++){
        printf("%d\t",*(p+i));
        suma+=*(p+i);
    }
    printf("\n");
    printf("Suma : %d\n",suma);
    int *auxp=&v[7];
    printf("Recorrido reverse: ");
    for(int i=0;i<8;i++){
        printf("%d\t",*(auxp-i));
    }

}