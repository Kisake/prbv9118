#include <stdio.h>

float celcToFahr(float in)
{
	return (in * 1.8f) + 32;
}

float fahrToCelc(float in)
{
	return (in - 32) / 1.8f;
}

void main1()
{
	float number;

	printf("Enter degrees Celcius:\n");
	scanf_s("%f", &number);

	printf("%f degrees Celcius is %f Fahrenheits.",
		number, celcToFahr(number));

	printf("Enter Fahrenheits:\n");
	scanf_s("%f", &number);

	printf("%f Fahrenheits is %f degrees Celcius.",
		number, fahrToCelc(number));

	getch();
}