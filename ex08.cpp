#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	float nascimento, idade, dias, segundos, minutos, horas;
	
	printf("digite o ano do nascimento: ");
	scanf("%f", &nascimento);
	idade = 2022 - nascimento;
	
	dias = idade * 365 ;
	printf("total de %.2f dias \n", dias);
	
	horas= 24*dias;
	printf("total de %.2f horas \n", horas);
	
	minutos = 60*horas*dias;
	printf("total de %.2f minutos \n", minutos);
	
	segundos = 60*minutos*dias;
	printf("total de %.2f segundos \n", segundos);
	
	
	
	system("pause");
}
