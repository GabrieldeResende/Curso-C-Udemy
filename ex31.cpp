#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


int main(void)
{
	float nota1, nota2, nota3, media;
	char nome[20];
	
	printf("digite seu nome: ");
	gets(nome);
	
	printf("digite as 3 notas: ");
	scanf("%f %f %f", &nota1, &nota2, &nota3);
	
	media=(nota1 + nota2 + nota3)/3;
	
		if((media > 9) && (media = 10))
			printf("plenamente satisfatorio");
		else if ((media <= 9) && (media >= 6))
			printf("satisfatorio");
			else if((media < 6) && (media >= 4))
				printf("recuperacao");
				else if((media < 4) && (media >= 0))
					printf("reprovado");
					
	return(0);
				
}
