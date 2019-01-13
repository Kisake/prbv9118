#include "main.h"

int main() {
	printf("Enter number:");
	scanf_s("%d", &input);
	printf("\nResult is: %d", mult(input));

	getch();
	return 0;
}

int mult(int num) {
	if (num == 1) return 1;
	else return (num * mult(num - 1));
}