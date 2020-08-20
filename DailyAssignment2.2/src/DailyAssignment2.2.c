/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p,n;
	float r,si;
	printf("Enter Principal amount");
	scanf("%d",&p);
	printf("Enter Interest Rate");
	scanf("%f",&r);
	printf("EnterNumber of Years");
	scanf("%d",&n);
	si = (p*r*n)/100;
	printf("Your Simple Interest is :%f",si);

	return EXIT_SUCCESS;
}
