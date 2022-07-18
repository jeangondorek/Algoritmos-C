#include <stdio.h>
int main (){
	int n,raiz,a;
	printf("Digite um valor (digite 0 ou um numero negativo para parar) ");
	scanf("%d",&n);
		while(n>0){
		a=1;
		raiz=a*a;
			while(raiz< n){
			a++;
			raiz=a*a;
			}
			if (raiz==n)
			printf("O número %d é quadrado perfeito. \n", n);
			else 
			printf("O número %d não é quadrado perfeito\n", n);
			printf("Digite um número (pare quando digitar zero: ");	
			scanf("%d", &n);
		}
		
}

