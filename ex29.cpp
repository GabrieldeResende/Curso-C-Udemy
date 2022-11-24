#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


int main(void)
{
	int codigo, TotEn=0, TotSa=0,disponivel=40; //declarando variaveis
	do{
		system ("cls");
		printf("menu de codigos: \n 0-encerrar o programa! \n 1-entrar! \n 2-sair! \n 3-lugares disponiveis! \n 4-total de entradas! \n 5-total de saidas");
		printf("\n");
		printf("digite o codigo:  ");
		scanf("%d", &codigo); // entrada de dados
		
		
		switch (codigo){ // menu de escolhas
		
		case 0: // encerrando
			printf("encerrando o programa!! \n");
			break;
		case 1: // entrando uma pessoa
			if (disponivel > 0) {
				printf("entrando uma pessoa!!");
				TotEn ++;
				disponivel --;}
			else
				printf("aguarde, estamos lotados!!");
			break;
		case 2: // saindo uma pessoa
			if (disponivel == 40){
				printf("estamos vazios!!");}
			else {
				printf("saindo uma pessoa");
				TotSa ++;
				disponivel ++;}
			break;
		case 3: // lugares disponiveis
			printf("total de lugares disponiveis: %d \n", disponivel);
			break;
		case 4: // total de entradas
			printf("total de entradas: %d \n", TotEn);
			break;
		case 5: // total de saidas
			printf("total de saidas: %d \n", TotSa);
			break;
		default:
			printf("codigo invalido!!!");
			break;
		}
		printf("\n \n");
		system("pause");
	} while (codigo != 0); // estrutura de repeticao
}
