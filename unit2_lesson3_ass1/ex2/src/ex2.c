/*
 ============================================================================
 Name        : ex2.c
 Author      : shady
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*  Write C Program to Print a Integer Entered by a User
    i should see the Console as following:
    ##########Console-output###
    Enter an integer: 25
    You entered: 25  */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer:  ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&x);
	printf("You entered: %d ",x);
}
