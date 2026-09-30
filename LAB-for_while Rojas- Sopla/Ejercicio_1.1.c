#include<stdio.h>

int main()
{
    int n,suma=0,c,a=0;
    do{
        
        printf("Ingrese un numero entero positivo: ");
        scanf("%d", &n);

    }while(n <= 0);
    printf("%d",n);
    do{
        a=0;

        do{
           a++;

           c=n%10;
           suma+=c;
           n/=10;
        }while(n > 0);
        if(a==1){
            break;
        } 
        printf("-> %d  ", suma);
        n=suma;
        suma=0;


    }while(a!=1);



    return 0;
}