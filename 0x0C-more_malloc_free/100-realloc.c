#include "main.h"
#include <stdlib.h>

/**
 * realloc - realocates a memory block uding malloc and free
 * @ptr: pointer to the old memory allocated
 * @old_size: old size of memory in allocated space
 * @new_size: new size in bytes of memory to be allocated
 * Return: void pointer to new memory allocation
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_location, *new_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr ==  NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_location = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (i = 0; i < old_size; i++)
		 new_location[i] = new_ptr[i];
	free(ptr);
	return (new_location);
}
