#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int codigo;
	
	printf("digite um numero de 1 a 3: ");
	scanf("%d", &codigo);
	
	switch (codigo)
	{
		case 1: 
		printf("panela \n");
		break;
		
		case 2:
		printf("chaleira \n");
		break;
		
		case 3:
		printf("prato \n");
		break;
		
		default:
		printf("codigo invalido \n");
		break;
	}
}
