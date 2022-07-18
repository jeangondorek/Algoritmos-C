#include <stdio.h>
int main(){
	int numero1, numero2, numero3;
	printf("Digite um número:\n");
	scanf("%d", &numero1);
	printf("Digite outro número:\n");
	scanf("%d", &numero2);
	printf("Digite outro número:\n");
	scanf("%d", &numero3);
	if (numero1>numero2 && numero1>numero3){printf("O maior número é:%d\n",numero1);}
	else if (numero2>numero1 && numero2>numero3){printf("O maior número é:%d\n", numero2);}
	else {printf("O maior número é:%d\n", numero3);}
	
}
