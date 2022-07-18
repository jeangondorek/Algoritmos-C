#include <stdio.h>
#include <string.h>
	int main(){
	int i,j=10,k,n,salario1,salario2;
	double salarios[10];
	for(n=0;n<j;n++){
	printf("Digite o salário: ");
	scanf("%lf", &salarios[n]);
	}
	for(k=0;k<j;k++){
		for(i=0;i<j;i++){
		salario2=salarios[i];
			if (salario2>salarios[k])
				if(salario2>salario1)
					salario1=salario2;		
		}
	}
	printf("O maios salário é :%d\n", salario1);
	printf("Vetor ao contrário:");
	for(k=9;k>=0;k--){
		printf("%.2lf ", salarios[k]);
	}
printf("\n");
}
