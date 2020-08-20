/*
 ============================================================================
 Name        : Prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,flag=0,n;
	printf("Please Enter a Number");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
		if(flag==0){
				printf("This is a Prime Number");
			}else{
				printf("This is not a Prime Number");
			}

	}
	return EXIT_SUCCESS;
}
