#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be checked
 * Return: pointer to the first occurrence 
 * of the character c in the string s, 
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	for (;; str++)
	{
		if (str == c)
			return str;
		if (!*str)
			return NULL;
	}

	return NULL;
}
