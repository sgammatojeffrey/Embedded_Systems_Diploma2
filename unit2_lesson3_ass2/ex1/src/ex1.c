/*
 ============================================================================
 Name        : ex1.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{ int x;
while(1)
{
printf(" Enter an integer you want to check : ");
fflush(stdout);
fflush(stdin);
scanf("%d",&x);
	if(x % 2 == 0)
		{
			printf(" %d is even \r\n",x);
		}
	else if (x % 2 != 0)
		{
	printf("%d is odd \r\n",x);
		}
}
}
