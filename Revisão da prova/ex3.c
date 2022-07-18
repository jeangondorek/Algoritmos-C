#include<stdio.h>
int main(){
	int a,c,d=1,f;
	printf("Digite um número: ");
	scanf("%d", &c);
	for(a=1 ;a<=c;a++){	
    f=d+a;
        for(d=d++;d<f;d++){
        printf("%d ", d);}
    
    printf("\n");	
    }

}
