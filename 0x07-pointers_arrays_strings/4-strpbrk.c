#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: string
 * @accept: string of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
