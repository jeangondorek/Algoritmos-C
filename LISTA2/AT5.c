#include <stdio.h>
int main(){
	double peso, pesogramas, engordou;
	printf("Digite seu peso:\n");
	scanf("%lf", &peso);
	pesogramas= peso*1000;
	engordou= peso*1.12;
	printf("O seu peso atual em kgs é:%lf\n", peso);
	printf("O seu peso em gramas é:%lf\n", pesogramas);
	printf("Se engordasse 12 porcento seu peso seria, em kgs:%lf\n", engordou);
	



}
