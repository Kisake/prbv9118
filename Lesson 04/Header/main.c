#include "main.h"

void main()
{
	printf("What is your name?\n");
	scanf_s("%s", name, SIZE - 1);
	printf("Hello, %s!\nHow old are you?\n", name);
	scanf_s("%d", &age);
	printf("Wow, %s you look so young, I thought you are %d.\n",
		name, age - 5);
	getch();
}