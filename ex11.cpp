#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	int num1, num2; 
	printf("digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("digite o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
		printf("o %d e maior que %d \n", num1,num2);
	else
		printf("o %d e maior que %d \n", num2, num1);
}
