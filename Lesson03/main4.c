#include <stdio.h>

int main()
{
	int odds[10];

	for (int i = 0; i < 10; i++)
	{
		if (i == 0) odds[i] = 1;
		else odds[i] = odds[i - 1] + 2;
		if (i == 9) printf("%d", odds[i]);
		else printf("%d, ", odds[i]);
	}
	getch();
	return 0;
}