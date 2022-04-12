#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	}

	_putchar('\n');
	return (0);
}
