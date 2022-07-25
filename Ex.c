#include <stdio.h>
void vereficaContrato(int idade){
	if(idade>=18)
	printf("Pode ser contratado.\n");
	else
	printf("Pode ser Aprendiz.\n");
}	

//
double aumentaSalario(double salario){
	double porcentagem;
	printf("Digite a porcentagem que deseja aumentar o salário:");
	scanf("%lf", &porcentagem);
	salario=salario+salario*(porcentagem/100);
	return salario;
}
double bonificaSalario(int tempoempresa,double salario){
	double salariobon;
	if(tempoemprpesa >= 5);
	salariobon=salario+100;
	return salariobon;
}
void exibeDados(int tempoempresa,double salario,int idade,char nome){
	printf("Nome: %s \n", nome);
	printf("Idade: %d \n", idade);
	if(idade<=18)
	printf("Contrato de Aprendiz\n");
	printf("Salário: %lf \n", salario);
	printf("Tempo de Empresa: %d\n", tempoempresa);
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
	printf("Bônus: %lf\n", bonificaSalario(tempoempresa, salario));
	printf("1-Verefica Contrato, 2-Aumenta Salario, 3-Exibe Dados, 4 Bonifica Salario");
	scanf("%d", &op);
	switch(op){
	case '1':
	vereficaContrato(idade);
	break;
	case '2':
	aumentaSalario(salario);
	break;
	case '3':
	bonificaSalario(tempoempresa, salario);
	break;
	case '4':
	exibeDados(tempoempresa, salario,idade,nome);
	break;
	default:
	printf("Opção Invalida.");
	break;	
	}
}

