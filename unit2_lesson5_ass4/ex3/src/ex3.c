/*
 ============================================================================
 Name        : ex3.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void reverse(void);
int main(void) {

	printf("Enter a sentence : ");
	fflush(stdin);fflush(stdout);
	reverse();
}
void reverse(void)
{
char c;
scanf("%c",&c);
if(c!='\n')
{
	reverse();
	printf("%c",c);
}
}


