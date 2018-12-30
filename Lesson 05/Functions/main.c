#include "main.h"


void main() {
	srand(time(NULL));

	int array[SIZE];

	generateArray(array);
	printArray(array);

	getch();
}

void generateArray(int * input) {
	for (int i = 0; i < SIZE; i++)
		input[i] = rand() % (MAX + 1 - MIN) + MIN;
}

void printArray(int * input) {
	for (int i = 0; i < SIZE; i++) {
		(i == 0) ? printf("Array is: %d, ", input[i]) :
		(i == SIZE - 1) ? printf("%d", input[i]) :
		printf("%d, ", input[i]);
	}
}