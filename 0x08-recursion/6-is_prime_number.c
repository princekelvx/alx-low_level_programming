
#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number: checks if number is a prime number
 * @n : number to be checked
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return 0;
	if (n < 3)
		return 1;

	return (is_divisible(n, div));
}

/**
 * is_divisible: check if num is divisible
 * @num: the number to be checked
 * @div: the division result
 * Return: 1 if number is divisible or 0 otherwise
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
