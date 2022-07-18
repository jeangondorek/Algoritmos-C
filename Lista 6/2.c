#include <stdio.h>
#include <string.h>
	int main(){
	int n,i;
	printf("Quantos sálarios deseja ler? ");
	scanf("%d", &n);
	double salarios[n];
	for(i=0;i<n;i++){
	printf("Digite o salário: ");
	scanf("%lf", &salarios[n]);
		if (salarios[i]<1000){
		salarios[i]=salarios[i]*1.1;}
	}
	for(i=n;i>0;i--){
	printf("Salários: %.2lf \n",salarios[i]);
	}

}
