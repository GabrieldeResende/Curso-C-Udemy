#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int num; // declarando variaveis
	float media,soma=0,lido=0;
	char resposta = 's';
	
	while (resposta == 's'){ //estrutura while
		printf("digite um numero: ");
		scanf("%d", &num);
		
		soma = soma + num;
		lido ++;
		media= soma/lido; // processos
		
		printf("deseja digitar outro numero: (s/n) ");
		resposta= _getche(); // _getche() usado para resposta da estrutura // estrutura de repetição
		printf("\n \n");
	}
	printf("a media foi: %.2f \n", media);
	return 0;
}
