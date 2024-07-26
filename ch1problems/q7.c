#include <stdio.h>

int main(void){
	int total, quarters, dimes, nickels, pennies;

	printf("Enter the amount of cents: ");
	scanf("%d", &total);	

	quarters = total / 25;
	total %= 25;

	dimes = total / 10;
	total %= 10;

	nickels = total / 5;
	total %= 5;

	pennies = total;

	printf("Quarters: %d, Dimes: %d, Nickels: %d, Pennies: %d\n", quarters, dimes, nickels, pennies);

	return 0;
}
