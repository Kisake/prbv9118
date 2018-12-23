#include <stdio.h>

int main3()
{
	int odds[7];

	*(odds + 0) = 1;
	*(odds + 1) = *(odds + 0) + 2;
	*(odds + 2) = *(odds + 1) + 2;
	*(odds + 3) = *(odds + 2) + 2;
	*(odds + 4) = *(odds + 3) + 2;
	*(odds + 5) = *(odds + 4) + 2;
	*(odds + 6) = *(odds + 5) + 2;

	printf("%d, %d, %d, %d, %d, %d, %d",
		*(odds + 0), odds[1], *(2 + odds),
		3[odds], *(odds + 4), *(odds + 5),
		*(odds + 6));
	getch();
	return 0;
}