#include <stdio.h>
int main(){
	int n1,n2,soma=0,cont;
	printf("Digite 1° numero! \n");
	scanf("%d", &n1);
	printf("Digite o 2° numero! \n");
	scanf("%d", &n2);                                     
		while(n1<0 || n2<n1);
			for(cont=n1;cont<=n2;cont=cont+1)
			{
				if(cont%2==0)
				{
				printf("%d\t",cont);
				soma=soma+cont;
				}
			}
	printf("\nA soma dos números pares é:%d \n ",soma);
}
