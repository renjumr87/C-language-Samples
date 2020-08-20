/*
 ============================================================================
 Name        : Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number,sum=0;
	printf("Please Enter a Number");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		sum=sum+i;
	}
	printf("Result is %d",sum);
	return EXIT_SUCCESS;
}
