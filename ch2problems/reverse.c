#include <stdio.h>

int main(void){

	int num, dig;

	printf("Enter an integer to be reversed: ");
	scanf("%d", &num);
		
	while (num){
		dig = num % 10;
		printf("%d", dig);
		num /= 10;
	}

	printf("\n");

	return 0;

}
