#include <stdio.h>

int main()
{
	int age;
	
	printf("Hello, %s!\n", "Victor");

	printf("How old are you:\n");
	scanf_s("%d", &age);
	printf("Wow! You look younger than you are, ");
	printf("I thought you are %d", age - 3);

	getch();
	return 0;
}