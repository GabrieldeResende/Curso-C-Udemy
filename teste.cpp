#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(void) {
	int i, opcao;
	while (opcao < 20){
		printf("digite a quantidade de curso: ");
		scanf("%d", &i);
		if (opcao > 20){
			printf("digite uma quantidade abaixo de 20: ");
			scanf("%d", &i);
		}
	}
}
