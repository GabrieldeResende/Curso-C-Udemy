#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	int num1, num2, total;
	
	printf("digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("digite o segundo numero: ");
	scanf("%d", &num2);
	
	total = num1 + num2;
	
	printf("o total e: %d \n", total);
	printf("%d + %d = %d \n", num1, num2, total);
	system("pause");
}
