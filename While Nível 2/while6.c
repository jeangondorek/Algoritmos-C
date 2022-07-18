#include <stdio.h>
int main (){
	int n,maior=n;
	printf("Digite um número (0 para o programa): ");	
	scanf("%d", &n);
		while(n>0){
			if(n>maior)
			maior=n;
			printf("Digite um número (0 para o programa): ");	
			scanf("%d", &n);
		}
	printf ("O maior valor é: %d \n",maior);


}

