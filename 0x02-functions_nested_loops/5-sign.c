#include "main.h"
/**
 * print_sign - prints sign of numbers positive or negative
 *
 * @n: Instance to be checked
 *
 * Description: indicates the positivity or negativity of n or otherwise
 *
 * Return: 1(if positive) 0(if zero) or -1(if negative)
 */

int print_sign(int n)
{
	int integer = 0;

	if (n > 0)
	{
		_putchar('+');
		integer = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		integer = -1;
	}
	else
	{
		_putchar('0');
		integer = 0;
	}

	return (integer);
}
