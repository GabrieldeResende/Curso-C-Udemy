#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void)
{
	int consumo, quantidade;
	float valorConta=0;
	do
	{
		printf("digite o consumo: \n");
		scanf("%d", &consumo);
		
	}while(consumo < 0 || consumo > 120);
	
	if (consumo > 100){
		quantidade = consumo - 100;
		consumo = consumo - quantidade; 
		valorConta = valorConta + (quantidade * 5);
	}
	if (consumo > 30) {
		quantidade = consumo - 30;
		consumo = consumo - quantidade; 
		valorConta = valorConta + (quantidade * 2);
	}
	if (consumo > 10){
		quantidade = consumo - 10;
		consumo = consumo - quantidade; 
		valorConta = valorConta + (quantidade * 1);}
	valorConta= valorConta + 7;
	
	printf("valor da conta a pagar: %.2f", valorConta);
	
	
	return (0);
}
