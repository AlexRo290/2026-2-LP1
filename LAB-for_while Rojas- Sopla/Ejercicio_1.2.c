#include <stdio.h>
int main(){
	int max=0;
	int nmax;
	int pasos=0;
	for (int i=1;i<=10000;i++){
		pasos=0;
		int n=i;
		while(n!=1){
			if(n%2==0){ // n es par
				n=n/2;
				pasos++;
			}
			else { // n impar
				n=3*n+1;
				pasos++;
			}
		}
		if(pasos>max){
			max=pasos;
			nmax=i;
		}
	}
    printf("Mayor semilla en el rango de [1, 10000]: n= %d , semilla = %d",nmax,max);
	return 0;
}