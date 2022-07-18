#include <stdio.h>

int main(){
	int A, maior=0, N;
	scanf("%d", &A);
	while(A>0||A<0){
		if(A==maior){
			N++;
		}
		else if(A>maior){
			maior = A;
			N=1;
			}
		scanf("%d", &A);
		}
	printf("%d\n", N);
}
