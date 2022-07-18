#include <stdio.h>

int main(){
	int num1 ,num2, i, menor, maior, h;
	printf("Digite um número: ");
	scanf("%d", &num1);
	printf("Digite outro número: ");
	scanf("%d", &num2);
	printf("Os primos do intervalo são: ");
	if(num1>num2){
		maior = num1;
		menor = num2;
		}
	else{
		maior = num2;
		menor = num1;
		}
	while(menor<maior){
		h=0;
		i=1;
		while(i<=menor){
			if(menor%i==0){
				h++;
				i++;
				}
			else
				i++;
			}
		if(h==2)
			printf("%d ", menor);
		menor++;
	}printf("\n");
}
