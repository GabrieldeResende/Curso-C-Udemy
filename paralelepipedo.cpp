#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	float volume, comprimento, largura, altura;
	
	printf("digite o valor do comprimento: ");
	scanf("%f", &comprimento);
	
	printf("digite o valor da largura: ");
	scanf("%f", &largura);
	
	printf("digite o valor da altura: ");
	scanf("%f", &altura);
	
	volume= comprimento*largura*altura;
	
	printf("o volume do paralelepipedo e: %.2f \n", volume);
	
	system("pause");
}
