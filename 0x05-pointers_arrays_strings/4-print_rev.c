#include "main.h"

/**
 * print_ref - prints astring in reverse
 *
 * @s: string in question
 */

void print_ref(char *s)
{
	int i;
	int len;
	int j = 0;

	len = _strlen(*s);
	char output[len];

	for (i = len - 1; i >= 0; i--)
	{
		output[j] = s[i];
		j++;
	}

	int outputlen = _strlen(*output);
	int k = 0;

	while (k < outputlen)
		_putchar(outputlen[k]);

	_putchar('\n');
}
