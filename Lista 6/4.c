#include <stdio.h>
#include <string.h>
	int main(){
	int vetor[7],i,n;
	for(n=0;n<7;n++){
		printf("DIGITE O VETOR: ");
		scanf("%d",	&vetor[n]);
		}
	printf("DIGITE UM NÚMERO ");
	scanf("%d", &i);
	for(n=0;n<7;n++){
		if(vetor[n]==i)
		printf("Posição %d no vetor\n", n+1);
		}
	
	
	
	
	
}
