#include "main.h"

/**
 * string_toupper - changes all lower case letters of a string
 * to uppercase
 * @s: input string
 * Return: pointer to converted string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
