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
	float percentage;
	printf("Please Enter Your Percentage of Mark");
	scanf("%f",&percentage);
	printf("You have entered :%f",percentage);
	if(percentage>=90){
		printf("Your Grade is A");
	}else if(percentage>=80 && percentage<90){
		printf("Your Grade is B");
	}else if (percentage>=70 && percentage>80){
		printf("Your Grade is C");
	}else if (percentage>=60 && percentage >70){
		printf("Your Grade is D");
	}else if(percentage>=50 && percentage<60){
		printf("Your Grade is E");
	}else{
		printf("You Are Failed");
	}

	return EXIT_SUCCESS;
}
