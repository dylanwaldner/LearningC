#include <stdio.h>

int main(void){

	int first_num, second_num, third_num;
	
	scanf("%d", &first_num);
	scanf("%d", &second_num);
	scanf("%d", &third_num);

	float average;

	int sum;
	
	sum = first_num + second_num + third_num;

	average = (float) sum / 3;

	printf("The average is %6.3f.\n", average);



	return 0;
}
