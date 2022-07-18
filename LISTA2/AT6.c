#include <stdio.h>
int main(){
	double numero1, numero2, diferenca,diferenca2;
	printf("Digite um número:\n");
	scanf("%lf", &numero1);
	printf("Digite outro número:\n");
	scanf("%lf", &numero2);
	diferenca=numero1-numero2;
	diferenca2=diferenca*diferenca;
	printf("A diferença ao quadrado é:%lf\n",diferenca2);
	
}
