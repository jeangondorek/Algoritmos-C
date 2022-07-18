#include <stdio.h>

int main(){
	int N, linha=1, num=1, pos=1, i=1, h=0;
	scanf("%d", &N);
	while(linha<=N){
		while(pos<=N){
			while(i<=num){
				if(num%i==0){
					h++;
					i++;
					}
				else
					i++;
				
				}
			if(h==2)
				printf("#");
			else
				printf("_");
			h=0;
			i=1;
			pos++;
			num++;
			}
		pos=1;
		printf("\n");
		linha++;
	}
}
