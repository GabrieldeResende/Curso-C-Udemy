#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int num,i,positivo=0,negativo=0,zero=0;
	
	
	for(i=0; i<20; i++){
	printf("digite um numero: ");
	scanf("%d", &num);
	positivo > 0;
	negativo < 0;
	zero == 0;
		if (num > 0)
			positivo = num + positivo;
		else if(num < 0)
				negativo = num + negativo;
			else if(num == 0)
				zero++;	
    }
    printf("soma dos positivos: %d \n", positivo);
    printf("soma dos negativos: %d \n", negativo);
    printf("total de zeros: %d \n", zero);
}
