#include <stdio.h>

int main(void){

	int num, count=0, sum=0, intavg;
	
	while (count < 20){
		printf("Enter an Integer: ");
		scanf("%d", &num);
		sum += num;
		count += 1;
	}

	float average;

	average = (float) sum / count;

	intavg = (int) average;

	if ( ( average - intavg ) < .5){
		printf("The average is %d.\n", intavg);
	} else {
		printf("The average is %d.\n", (intavg + 1));
	}




	return 0;
}
