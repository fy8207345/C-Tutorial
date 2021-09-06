#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output */

int main(void) {
	printf("Hello, World.\n");
	printf("How are your?\n");

	printf("%i\n", 17); //int 

	printf("%c\n", '}'); //char

	char fred = 'a';

	printf("%c\n", fred);

	char first_letter; //声明
	char second_letter;
	int hour, minute;
	first_letter = 'a'; //赋值
	hour = 11;
	char colon = ':';
	minute = 59;

	printf("the current time is %i%c%i\n", hour, colon, minute);

	printf("Number of minutes since midnight: %i\n", hour * 60 + minute);
	printf("Fraction of the hour that has passed: %i\n", minute / 60);
	return(EXIT_SUCCESS);
}