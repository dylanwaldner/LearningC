#include <stdio.h>

long raise_power( long base, long power);

int main(void){

	unsigned long base, power, answer;

	printf("Enter an integer for the base: \n");

	scanf("%ld", &base);

        printf("Enter an integer for the power: \n");

        scanf("%ld", &power);

	answer = raise_power( base, power );

	printf("Answer: %lu\n", answer);

	return 0;
}

long raise_power (long base, long power) {
	int count;	
	if (power == 0)
		return 1;

	if (power == 1)
		return base;

	else {
		for (count = 1, base = base; count < power; count++){
			base *= base;
		} 
		return base;
	}
	
}

