#include "main.h"

/**
 * print_ref - prints astring in reverse
 *
 * @s: string in question
 */

void print_ref(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i)
		_putchar(s[--i]);

	_putchar('\n');
}
