
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: value to be raised
 * @y: power to raise value to
 * Return: new value of x
 */

int _pow_recursion(int x, int y)
{
	int m;

	/* base caae */
	if (y < 0)
		return (-1);
	if (x == 0)
		return (1);

	if (y % 2 == 0)
	{
		m = _pow_recursion(x, y/2);
		return (m * m);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
