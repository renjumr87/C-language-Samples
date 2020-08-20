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
	int day;

	printf("Please Enter a Number between 1 & 7 to get Your Day\n 1 for Monday \n 2for Tuesday \n 3 for Wednessday \n 4 for Thusday \n 5 for Friday \n 6 for Saturday \n7 for Sunday ");
	scanf("%d",&day);
	printf("You Have Entered %d",day);
	switch (day){
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thusday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
		printf("Invalid Entry");
	}
	return EXIT_SUCCESS;
}
