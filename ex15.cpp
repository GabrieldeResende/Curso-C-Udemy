#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	float salario, inss, desconto, total;
	
	printf("digite o salario: ");
	scanf("%f", &salario);
	if (salario <= 1317.07)
	inss=8;
	else if (salario <= 2195)
	inss=9;
	else
	inss=11;
	
	desconto = salario * (inss/100);
	total= salario - desconto;
	
	printf("o salario bruto: %2.f \n", salario);
	printf("taxa do inss: %2.f \n", inss);
	printf("total de desconto: %2.f \n", desconto);
	printf("seu salario e: %.2f \n", total);
	
}
