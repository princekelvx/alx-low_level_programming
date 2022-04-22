#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: input array;
 * @n: number of array elements
 * Return: Nil
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
