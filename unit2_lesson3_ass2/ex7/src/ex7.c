/*
 ============================================================================
 Name        : ex7.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,Factorial=1;
	while(1)
	{
		printf("enter an integer :");
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&n);
		if(n==0)
		{
			printf("Factorial = 1\r\n ");
		}
		else if(n<0)
		{
			printf("Error !!! Factorial of negative number does not exist\r\n ");
		}
		else if (n>0)
		{
			for(i=1;i<=n;i++)
			{
				Factorial *= i;
			}
			printf("Factorial = %d \r\n ",Factorial);
		}

	}
}
