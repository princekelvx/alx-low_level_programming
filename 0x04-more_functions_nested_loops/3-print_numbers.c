#include "main.h"

/**
 * print_numbers - prints numbers 1 through 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
