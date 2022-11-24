#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>


int main(void)
{
		int num;
		
		printf("digite um numero:  ");
		scanf("%d", &num);
		if ((num >= 0)&&(num <= 100))
			printf("este numero esta entre 0 e 100 \n");
		else
			printf("vacilao!!! \n");
}
