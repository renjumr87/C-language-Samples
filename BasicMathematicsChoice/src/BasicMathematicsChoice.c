/*
 ============================================================================
 Name        : BasicMathematicsChoice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1,num2,choice,result;
	puts("Enter Two Numbers");
	scanf("%d%d",&num1,&num2);
	puts("1 for Addition\n2 for Subtraction\n3for Multiplication\n4for Division");
	scanf("%d",&choice);
	if(choice==1){
		result=num1+num2;
		printf("Answer is %d",result);
	}else if(choice==2){
		result=num1-num2;
		printf("Answer is %d",result);
	}else if(choice==3){
		result=num1*num2;
		printf("Answer is %d",result);
	}else if(choice==4){
		result=num1/num2;
		printf("Answer is %d",result);
	}else{
		printf("Please Enter Correct Option");
	}

	return EXIT_SUCCESS;
}
