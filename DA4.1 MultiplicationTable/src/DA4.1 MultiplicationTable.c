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
	int input,i,ans;
	printf("Enter a Limit");
	scanf("%d",&input);
	for(i=1;i<=10;i++){
		ans=i*input;
		printf("%d*%d=%d\n",i,input,ans);
	}
	return EXIT_SUCCESS;
}
