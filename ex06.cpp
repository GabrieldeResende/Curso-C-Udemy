#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{	
	// declaração de variaveis
	float nota1, nota2, nota3, media;
	//entrda de dados
	printf("digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("digite a terceira nota: ");
	scanf("%f", &nota3);
	// processamento
	media= (nota1+nota2+nota3)/3;
	// saida de dados
	printf("sua media foi: %.2f \n", media);
	// condição
	if (media >= 7)
		printf("aprovado \n");
	else
		printf("reprovado \n");
	
	system("pause");
}
