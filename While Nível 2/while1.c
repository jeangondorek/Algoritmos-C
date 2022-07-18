#include <stdio.h>

int main()
{
	int a=2, n , p=1 ;
	printf("Digite um número: ");
	scanf("%d", &n);
	printf("Inteiro dado = %d \n", n);
	if (n <= 1)
	p = 0;
	while (p == 1 && a <= n / 2) {
	if (n % a  == 0)
	p = 0;
	a = a + 1;
	}
	if (p == 1)
	printf("%d é primo \n", n);
	else
	printf(" %d nao é primo \n", n);
}
