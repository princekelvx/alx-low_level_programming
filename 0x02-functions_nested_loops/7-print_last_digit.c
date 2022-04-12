#include "main.h"

/**
 * print_last_digit - checks int
 * @i: integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of a number
 */

int print_last_digit(int i)
{
	int n;

	if (i < 0)
		n = -1 * (i % 10);
	else
		n = i % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
