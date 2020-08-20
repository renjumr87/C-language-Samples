/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mark;
	printf("Please Enter Your Mark");
	scanf("%d",&mark);
	if(mark>=50){
		printf("You Are Passed");
	}else{
		printf("You Are Failed");
	}
	return EXIT_SUCCESS;
}
