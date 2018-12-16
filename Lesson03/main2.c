#include <stdio.h>

int squared(int * in)
{
	return *in * *in;
}

int main2()
{
	int number = 2;

	printf("%d", squared(&number));
	getch();
	return 0;
}