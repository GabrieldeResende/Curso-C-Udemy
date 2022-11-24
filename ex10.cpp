#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	int numero;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	
	if(numero == 1000)
		printf("o numero e igual a 1000 \n", numero);
	else
		printf("o e diferente de 1000 \n", numero);
}
