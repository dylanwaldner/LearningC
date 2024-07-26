#include <stdio.h>


int main(void){

	int time, hours, minutes, seconds;

	printf("Enter a time in seconds: ");
	scanf("%d", &time);

	hours = time / 3600;

	time %= 3600;

 	minutes = time / 60;

	time %= 60;	

	seconds = time; 	

	printf("Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);

	return 0;
}


