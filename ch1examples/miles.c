#include <stdio.h>

#define MILEAGE 28


int miles (int num_gallons, int mileage);

int main (void){

	int gallons;

	printf("	Travel Calculator\n");
	printf("------------------------------------\n");

	printf("Current mileage is %d miles per gallon. \n", MILEAGE);

	printf("\n\nEnter the gallons of gas (whole numbers please): ");
	scanf("%d", &gallons);

	printf("Thank you. You will be able to drive %d miles.", miles(gallons, MILEAGE));


	return 0;

}

int miles(int gallons, int mileage){

	return gallons * mileage;
}
