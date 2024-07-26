#include <stdio.h>

#define TARGET 17
#define LOW 0
#define HIGH 100
#define TRUE 1
#define FALSE 0


int process(int guess, int correct);
	


int main(void){
	int guess, correct;

	correct = FALSE;

	printf("I'm thinking of a number between %d and %d. \n", LOW, HIGH);

	while (correct == FALSE){

		printf("Enter your guess: ");
		scanf("%d", &guess);
		correct = process(guess, TARGET);

	}

	return 0;
}

int process(int guess, int correct){
	if (guess < correct)
		printf("Too Low!\n");
	else if (guess > correct)
                printf("Too High!\n");
	else {
		printf("You got it!\n");
		return TRUE;
	}
	return FALSE;
}
