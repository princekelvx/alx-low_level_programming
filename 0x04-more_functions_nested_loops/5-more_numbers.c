#include "main.h"

/**
 * more_numbers - prints numbers 0 through 14 10x
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	for (; i < 10; i++)
	{
		for (; j <= 14; j++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}

		_putchar('\n');
	}
}
