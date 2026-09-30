#include <stdio.h>
int main(){
	int n;
	printf("Ingrese n: ");
    scanf("%d", &n) ;
	for (int i=1;i<=n;i++){
		for (int k=1;k<=i;k++){
			printf("%d  ",k);
		}
		printf("\n");
	}
	int b=n;
	for (int i=1;i<=n;i++){
		for (int k=1;k<=b;k++){
			printf("%d  ",k);
		}
		b--;
		printf("\n");
	}
	return 0;
}