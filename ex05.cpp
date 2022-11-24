#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	int inicio, fim, distancia;
	
	// entrada de dados
	printf("km inicial: ");
	scanf("%d", &inicio);
	printf("km apos a viagem: ");
	scanf("%d", &fim);
	// processamento
	distancia= fim-inicio;
	// saida de dados
	printf("quilometro percorrido: %d \n", distancia);
	
	system("pause");
}
