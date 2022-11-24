#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	float salario, novosalario;
	
	printf("digite o salario: ");
	scanf("%f", &salario);
	
	if(salario <=1000)
		novosalario=(salario*15)/100;
		printf("%.2f", novosalario);
	else if (salario > 1000 && salario <= 2000)
		novosalario= (salario*10)/100;
		printf("%.2f", novosalario);
	else if (salario > 2000)
		novosalario=(salario * 5)/100;
		printf("%.2f", novosalario);
}
