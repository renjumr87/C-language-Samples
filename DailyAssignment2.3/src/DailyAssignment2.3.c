/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1;
	float number2,sum;
	printf("Enter Two Numbers");
	scanf("%d %f",&number1,&number2);
	sum = number1 + number2;
	printf("Result is %f",sum);
	return EXIT_SUCCESS;
}
