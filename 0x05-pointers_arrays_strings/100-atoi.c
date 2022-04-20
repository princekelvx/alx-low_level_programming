#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string to be converted
 * Return: integer
 */

int _atoi(char *s)
{

	int res = 0;
	int sign = 1;
	int i = 0;

	if (*s == '\0')
		return 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
	{
		if (s[i] <= '0' || s[i] >= '9')
			return 0;

		res = res*10 + s[i] - '0';
	}

	return sign*res;
}
