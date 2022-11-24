#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main(void) 
{
	int i, num, total=0;
	for(i = 0 ; i < 5; i++){
	printf("digite um numero: \n");
	scanf("%d", &num);
	total= total+num;
	}
	printf("total: %d", total);
	
}
