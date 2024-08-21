#include <stdio.h>

#define MAX 20

void print_inventory(int inventory[], int numitems);

int input_inventory(int inventory[], int maxnum);

int sum_inventory(int inventory[], int numitems);

int main(void){

	int inventory[MAX];

	int num_items;

	printf("please enter the number of items in stock.");
	printf(" Enter -1 when you are done.\n" );

	num_items = input_inventory(inventory, MAX);

	print_inventory(inventory, num_items);

	return 0;
}

int input_inventory(int inventory[], int maxnum){

	int index = 0;

	scanf("%d", &inventory[index]);
	while (index < maxnum-1 && inventory[index] != -1){
		index++;
		scanf("%d", &inventory[index]);
	}
	if (index == maxnum - 1) {
		printf("No room for more items. \n");
		return (index + 1);
	}

	else return (index);
	}



void print_inventory( int inventory[], int numitems){

	int index, sum;

	sum = sum_inventory(inventory, numitems);

	for (index = 0; index < numitems; index++) {
		printf("Item number %d:\t\t", index + 1);
		printf("Number on hand %5d\n", inventory[index]);
	}

	printf("Total Items: %d", sum);

}


int sum_inventory(int inventory[], int numitems){
	int i, sum = 0;

	for (i = 0; i < numitems; i++){
		sum += inventory[i];
	}
	return sum;
}
