#include <stdio.h>
#include <math.h>

int isprime(int number);

int main(void){
	int i;
	unsigned long number, factor;

	printf("Input an integer greater than 2: ");
	scanf("%ld", &number);

	if (number > 2){
		for (i = 1; i <= number; i++)
			if (((number % i) == 0) && isprime(i))
				printf("%d is a prime factor of %lu\n", i, number);
	}

	


	return 0;

}

int isprime(int number){
	int j;	
	for (j = 2; j <= sqrt(number); j++)
		if ((number % j) == 0)
			return 0;

	return 1; 
}

