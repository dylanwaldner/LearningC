#include <stdio.h>

int main(void){

	int first_num, first_denom, second_num, second_denom, out_num, out_denom;

	printf("First Fraction:\n");

	printf("Enter the Numerator: ");
	scanf("%d", &first_num);

	printf("Enter the Denominator: ");
	scanf("%d", &first_denom);

	printf("Second Fraction: \n");
	
	printf("Enter the Numerator: ");
	scanf("%d", &second_num);

	printf("Enter the Denominator: ");
	scanf("%d", &second_denom);

	out_num = first_num * second_denom + second_num * first_denom;
	out_denom = first_denom * second_denom;

	printf("%d/%d + %d/%d = %d/%d\n", first_num, first_denom, second_num, second_denom, out_num, out_denom);	


	


	return 0;

}
