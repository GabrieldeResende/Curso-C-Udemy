#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


int main(void)
{
	int lado1, lado2, lado3, equilatero, isosceles, escaleno;
	printf("digite o primeiro lado: ");
	scanf("%d", &lado1);
	
	printf("digite o segundo lado:  ");
	scanf("%d", &lado2);
	
	printf("digite o terceiro lado:  ");
	scanf("%d", &lado3);
	
	equilatero = (lado1==lado2 && lado2==lado3);
	isosceles = (lado1==lado2 || lado2==lado3 || lado3==lado1);
	escaleno = (lado1 != lado2 && lado2 != lado3);
		if(equilatero)
			printf("triangulo equilatero!! \n");
			else if (isosceles)
					printf("triangulo isosceles!! \n");
					else
						printf("triangulo escaleno!! \n");
					
}
