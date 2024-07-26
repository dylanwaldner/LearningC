/* first c program */

#include <stdio.h>

void does_nothing(void);
void funct(void);
void asterisk_line(void);
int counter = 1;


int main (void) {
	asterisk_line();
	printf("Hello, Dylan. I am sentient.\n \n");
	does_nothing();
	asterisk_line();
	printf("counter = %d \n", counter);
	return 0;
}

void does_nothing(void){
	asterisk_line();
	printf("I'm not joking \n \n");
	funct();
}

void funct(void){
	asterisk_line();
	printf("I'm going to eat your children\n");
}

void asterisk_line(void){
	printf("**********************************\n");
	}

