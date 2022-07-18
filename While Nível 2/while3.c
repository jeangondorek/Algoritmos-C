#include <stdio.h>
int main (){
	float media, num;
	int n,soma,numd;
	soma = 0;
	numd = 0;
		do{
		printf("Digite um valor (termine com um número negativo) ");
		scanf("%d",&n);
		numd++;
		soma = soma + n;
	}
		while(n>=0);
		num=soma;
		media = num/numd;
		printf ("Soma: %d \n",soma);
		printf ("Média: %lf \n",media );
		printf ("Quantidade de valores lidos: %d \n",numd);


}

