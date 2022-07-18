#include <stdio.h>
int main(){
	char sexo;
	int idade;
	char nome[10];
	printf("Digite seu nome, e clique ENTER algumas vezes:\n");
	scanf("%c", &nome[0]);
	scanf("%c", &nome[1]);
	scanf("%c", &nome[2]);
	scanf("%c", &nome[3]);
	scanf("%c", &nome[4]);
	scanf("%c", &nome[5]);
	scanf("%c", &nome[6]);
	scanf("%c", &nome[7]);
	scanf("%c", &nome[8]);
	scanf("%c", &nome[9]);
	scanf("%c", &nome[10]);
	printf ("Digite seu sexo, masculino, feminino ou outro (m/f/o):\n");
	scanf("%c", &sexo);
	printf("Digite sua idade:\n\n");
	scanf("%d", &idade);
	printf("Sua idade é:%d\n", idade);
	printf("Seu sexo é:%c\n", sexo);
	printf("Seu nome é:%s\n",nome);



}
