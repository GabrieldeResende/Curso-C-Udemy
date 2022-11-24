#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int i, numero, resultado;
	
	i=0;
	while (i<5)
	{
		printf("digite um numero: ");
		scanf("%d", &numero);
		resultado = numero*3;
		printf("%d \n", resultado);
		i ++;
	}
}
