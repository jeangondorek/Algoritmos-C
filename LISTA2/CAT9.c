#include <stdio.h>
int main(){
	double numero1, numero2;
	printf("Digite um número:\n");
	scanf("%lf", &numero1);
	printf("Digite outro número:\n");
	scanf("%lf", &numero2);
	if (numero1>numero2){printf("A ordem crescente é:%lf %lf\n",numero1, numero2);}
	else {printf("A ordem crescente é: %lf %lf\n",numero2, numero1);}
	
}
