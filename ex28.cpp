#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


int main(void)
{
	int codigo,disponivel=0, total=0, TotSa=0, TotEn=0;
	do {
	
		system("cls");
		printf("menu de opcoes: \n 0-encerrar programa \n 1-incluir \n 2-excluir \n 3-total disponivel \n 4-total de entradas \n 5-total de saidas \n");
		printf("\n");
		printf("digite uma opcao:  ");
		scanf("%d", &codigo);
	
		switch (codigo){
		case 0:
			printf("encerrando o programa!!! \n");
			break;
		case 1:
			printf("incluindo uma unidade!! \n");
			TotEn ++;
			disponivel ++;
			break;
		case 2:
			printf("excluindo uma unidade!! \n");
			TotSa ++;
			disponivel --;
			break;
		case 3:
			printf("total disponivel: %d \n", disponivel);
			break;
		case 4:
			printf("total de entradas: %d \n", TotEn);
			break;
		case 5:
			printf("total de saidas: %d \n", TotSa);
			break;
		default:
			printf("codigo invalido!!! \n");
			break;
		}
	printf("\n \n");
	system("pause");
	}
	while (codigo != 0);
}
