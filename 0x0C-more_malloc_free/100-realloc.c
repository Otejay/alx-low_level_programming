#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size in byte
 * @new_size: new size in byte
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
	{
		clone = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}
	relloc = malloc(new_size);

	if (relloc == NULL)
	{
		return (0);
	}
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = clone[i];
	}
	free(ptr);

	return (relloc);
}
