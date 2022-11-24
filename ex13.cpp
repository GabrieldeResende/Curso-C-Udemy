#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int vendas, despesas;
	printf("digite as vendas: ");
	scanf("%d", &vendas);
	
	printf("digite as despesas: ");
	scanf("%d", &despesas);
	
	if(vendas>despesas)
		printf("lucro \n");
	else
		printf("prejuizo \n");
		
	system("pause");
}
