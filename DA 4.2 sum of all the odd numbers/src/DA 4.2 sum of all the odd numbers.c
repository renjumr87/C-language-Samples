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
	int i,limit,sum=0;
	printf("Enter a limit");
	scanf("%d",&limit);
	for(i=0;i<limit;i++){
		if(i%2 != 0){
			sum=sum+i;
		}
		printf("%d",sum);
	}
	return EXIT_SUCCESS;
}
