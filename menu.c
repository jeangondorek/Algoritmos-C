#include <stdio.h>
#include <string.h>
void vereficaContrato(int idade){
	if(idade>=18)
	printf("Pode ser contratado.\n");
	else
	printf("Pode ser Aprendiz.\n");
}	
double aumentaSalario(double salario){
	double porcentagem;
	printf("Digite a porcentagem que deseja aumentar o salário: ");
	scanf("%lf", &porcentagem);
	salario=salario+salario*(porcentagem/100);
	printf("%lf\n", salario);
	return salario;
}
double bonificaSalario(int tempoempresa,double salario){
	double salariobon;
	if(tempoempresa>=5){
	salariobon=salario+100;
	printf("%lf", salariobon);
	}
	else{
	printf("Tempo de empresa insuficiente para o Bônus");}
	return salariobon;
}
void exibeDados(int tempoempresa,double salario,int idade,char nome[20]){
	printf("Nome: %s \n", nome);
	printf("Idade: %d \n", idade);
	if(idade<=18)
	printf("Contrato de Aprendiz\n");
	printf("Salário: %.2lf \n", salario);
	printf("Tempo de Empresa: %d anos.\n", tempoempresa);
}
int main(){
	char nome[20];	
	int op,idade,tempoempresa;
	double salario;
	printf("Digite A Seu Nome: ");
	scanf("%s", nome);
	printf("Digite A Sua Idade: ");
	scanf("%d", &idade);
	printf("Digite Seu Salário: ");
	scanf("%lf", &salario);
	printf("Digite Seu Tempo de Empresa: ");
	scanf("%d", &tempoempresa);
	do{
	printf("\t\t\tMENU\n");
	printf("Digite a opção desejada:\n");
	printf("1-Verefica Contrato\n2-Aumenta Salario\n3-Bonifica Salario\n4-Exibe Dados\n5-Sair\n");
	scanf("%d", &op);
	
	switch(op){
	case 1:
	system("clear");
	vereficaContrato(idade);
	break;
	case 2:
	system("clear");
	aumentaSalario(salario);
	break;
	case 3:
	system("clear");
	bonificaSalario(tempoempresa, salario);
	break;
	case 4:
	system("clear");
	exibeDados(tempoempresa, salario,idade,nome);
	break;
	case 5:
	break;
	default:
	system("clear");
	printf("Opção Inválida.");
	return 0;	
	}
}
	while(op!=5);
	return 0;
}
