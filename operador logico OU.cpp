#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


int main(void)
{
	int codigo;
	
	printf("digite um codigo: \n 1-masculino \n 2-feminino \n");
	scanf("%d", &codigo);
	
	if ((codigo == 1) || (codigo == 0))
		printf("valido!!");
	else
		printf("invalido!!");
}
