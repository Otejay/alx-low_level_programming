#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate 1st occurence of char in string and returns pointer there
 * @s: string to search
 * @c: target character
 *
 * Return: pointer to that character in string
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
