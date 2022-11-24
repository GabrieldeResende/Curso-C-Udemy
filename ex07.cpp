#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main(void) 
{
	float volume, raio, altura;
	
	printf("digite o raio: ");
	scanf("%f", &raio);
	
	printf("digite a altura: ");
	scanf("%f", &altura);
	
	volume= 3.14159*raio*raio*altura;
	printf("o volume da lata e: %.2f \n", volume);
	
	system("pause");
}
