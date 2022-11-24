#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int numero;
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	switch (numero)
		{
	case 0:
		printf("zero \n");
		break;
	case 1:
		printf("um \n");
		break;
	case 2:
		printf("dois \n");
		break;
	case 3:
		printf("tres \n");
		break;
	case 4:
		printf("quatro \n");
		break;
	default:
		printf("codigo invaido");
		break;
	}
}
