#include <stdio.h>
int main(){
	double v_compra;
	printf("Digite o valor da compra:\n");
	scanf("%lf", &v_compra);
	printf("O valor de compra foi:%lf\n", v_compra);
	if (v_compra<20){printf("O valor da venda é:%lf\n",v_compra*1.45);}
	else {printf("O valor de venda é:%lf\n", v_compra*1.30);}
	
}
