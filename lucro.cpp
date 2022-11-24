#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	int vendas, despesas, lucro; //declaração de variaveis
	//entrada de dados
	printf("digite as vendas: ");
	scanf("%d", &vendas);
	
	printf("digite as despesas: ");
	scanf("%d", &despesas);
	//processamento
	lucro= vendas-despesas;
	// saida de dados
	printf("o total de lucro foi: %d \n", lucro);
	system("pause");
}
