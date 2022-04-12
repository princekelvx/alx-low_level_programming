#include "main.h"

/**
 * _islower(int c) : checks for a lowercase character
 *
 * Return: Always 1 (if c is lowercase)
 * Return: Always 0 (otherwise)
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'c')
			lower = 1;
	}

	return (lower);
}
