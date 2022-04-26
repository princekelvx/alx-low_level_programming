#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area 
 * pointed to by s with the constant byte b
 * @s: pointer to memory area
 * @b: constant byte
 * @n: the first bytes
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char* p = s;
	while (n--)
		*p++ = (unsigned char)b;

	return (s);
}
