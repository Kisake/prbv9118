#include "main.h"

int main() {
	getInput();
	printResult();

	getch();
	return 0;
}

void getInput() {
	printf("Enter your number: ");
	scanf_s("%d", &input);
}

void printResult() {
	printf("The sum of numbers between 1 and %d is %d", input, sum(input));
}

int sum(int num) {
	if (num == 1) return 1;
	else return num + sum(num - 1);
}