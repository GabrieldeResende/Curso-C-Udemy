#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	float num1, num2, divisao;
	printf("digite um numero: ");
	scanf("%f", &num1);
	
	printf("digite outro numero: ");
	scanf("%f", &num2);
	
	if(num1 > num2)
		divisao = num1/num2;
		printf("total: %.2f", divisao);
	else
		divisao = num2/num1;
		printf("total: %.2f", divisao);
	
	
}
