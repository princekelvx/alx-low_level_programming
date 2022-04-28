
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

	//base case
	if (y < 0)
		return (-1);
	if (n == 0)
		return (1);

	if (n % 2 == 0)
	{
		m = power(x, n/2);
		return (m * m);
	}
	else
		return (x * power(x, n - 1));
}
