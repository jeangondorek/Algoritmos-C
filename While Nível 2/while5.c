#include <stdio.h>
int main (){
	float media, soma=0;
	int n=1,numd=0;
		while(n>0){
		printf("Digite um número (para parar digite zero) ");	
		scanf("%d", &n);
			if(n%3==0 && n>0){
			soma= soma+n;			
			numd++;
			}}
		media = soma/numd;
		printf ("Média: %lf \n",media );
}

