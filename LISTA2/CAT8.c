#include <stdio.h>
int main(){
	double salario, prestacao;
	printf("Digite seu sálario:\n");
scanf("%lf", &salario);
	printf("Digite a prestacao:\n");
	
	scanf("%lf", &prestacao);
	if (prestacao==(0.30*salario)){printf("O empréstimo pode ser concedido\n");}
	else {printf("O empréstimo não pode ser concedido\n");}
	
}
