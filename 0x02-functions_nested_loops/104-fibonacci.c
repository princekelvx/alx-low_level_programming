#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (i = 0; i < 98; i++)
	{
		fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
		if (i == 97)
			printf("%ld\n", fibonacci[i]);
		else
			print("%ld, ", fibonacci[i]);
	}

	return (0);

}
