#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of character and initialise
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: a pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (null);
	a = malloc(size * sizeof(char));
	if (a == null)
	{
		return (null);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
