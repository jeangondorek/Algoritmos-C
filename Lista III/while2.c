#include <stdio.h>

int main()
{
        int a;

        printf("Digite um número: ");
        scanf("%d", &a);

        while( a >= 1)
        {
                printf("*");
		
            a=a-1;
	
        }

printf("\n");
}
