#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	float media, nota1, nota2, nota3; //decalrando variaveis
	char resposta = 's';
	
	while (resposta == 's'){
		printf("digite a primeira nota: "); //entrada de dados
		scanf("%f", &nota1);
		printf("digite a segunda nota: ");
		scanf("%f", &nota2);
		printf("digite a terceira nota: ");
		scanf("%f", &nota3);
		
		media= (nota1 + nota2 + nota3)/3; // processamento
		
		printf("a media do aluno foi: %.2f \n", media);
		if(media >= 7)
			printf("aprovado \n");
		else
			printf("reprovado \n"); // saida de dados
			
		printf("deseja digitar as notas de outro aluno? (s/n) \n"); // estrutura de repetição
		resposta = _getche();
		printf("\n");
	}

}
