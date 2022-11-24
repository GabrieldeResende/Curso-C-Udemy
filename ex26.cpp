#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

//ler idade, estado civil, quantidade indeterminada, media de idade dos solteiros, casados e divorciados
int main(void) 
{
	int idade, codigo, quantidadeS=0, quantidadeD=0, quantidadeC=0;
	float mediaS=0, mediaC=0, mediaD=0;
	char resposta = 's';
	
	while (resposta == 's') {
		system ("cls");
		printf("digite seu estado civil: \n 1-solteiro \n 2-casado \n 3-divorciado \n");
		scanf("%d", &codigo);
		printf("digite sua idade: ");
		scanf("%d", &idade);
		
		switch (codigo)
		{
			case 1:
				mediaS = mediaS + idade;
				quantidadeS ++;
				break;
			case 2:
				mediaC = mediaC + idade;
				quantidadeC ++;
				break;
			case 3:
				mediaD = mediaD + idade;
				quantidadeD ++;
				break;
			default:
				printf("codigo invalido!!!");
				break;
		}
					
		mediaS=mediaS/quantidadeS;
		mediaC=mediaC/quantidadeC;
		mediaD=mediaD/quantidadeD;
		printf("\n");
		printf("deseja digitar outros dados? (s/n)");
		resposta = _getche();
		printf("\n");
	}
	printf("a media de idade dos solteiros:   %.2f \n", mediaS);
	printf("a media de idade dos casados:     %.2f \n", mediaC);
	printf("a media de idade dos divorciados: %.2f \n", mediaD);
}
