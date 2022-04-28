#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: integer whose square root is to be derived
 * Return: derived square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @prev: previous value
 * @root: square root value
 * Return: square root
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
