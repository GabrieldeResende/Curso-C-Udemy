#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


int main(void)
{
	int codigo,contP=0, contC=0, contV=0;
	
	do {
		system ("cls");
		printf("menu de opcoes: \n 0-encerra \n 1-incluir panela \n 2-incluir chaleira \n 3-incluir uma vassoura \n 4-relatorio de inclusoes \n");
		printf("\n");
		printf("digite uma opcao: ");
		scanf("%d", &codigo);
		
		switch (codigo)
		{
			case 0:
				printf("encerrando o programa \n");
				break;
			case 1:
				printf("incluir panela \n");
				contP ++;
				break;
			case 2:
				printf("incluir chaleira \n");
				contC ++;
				break;
			case 3:
				printf("incluir vassoura \n");
				contV++;
				break;
			case 4:
				printf("relatorio \n");
				printf("%d panelas! \n", contP);
				printf("%d chaleiras! \n", contC);
				printf("%d vassouras! \n", contV);
				break;
			default:
				printf("codigo invalido: \n");
				break;
		}
		printf("\n \n");
		system("pause");
		
	} while (codigo != 0);
}
