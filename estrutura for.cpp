#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int num, resultado, cont;
	
	for(cont = 0; cont <= 5; cont ++) {
	
	printf("digite um numero: ");
	scanf("%d", &num);
	
	resultado = num * 3;
	
	printf("o resultado foi: %d \n", resultado);}
	
}
