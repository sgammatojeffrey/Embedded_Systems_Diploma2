/*
 ============================================================================
 Name        : ex2.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(1)
	{
	char x;
	printf("Enter an alphabet :");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&x);
	if (x =='a'||x =='A'||x =='e'||x =='E'||x =='o'||x =='O'||x =='i'||x =='I'||x =='u'||x =='U')
	{
		printf("%c is a vowel \r\n",x);
	}
	else
	{
		printf("%c is a constant \r\n",x);
	}
	}
}
