#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 *
 * Return: pointer to dest
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char toggle;

	i = 0;
	while (*(s + i))
	{
		toggle = 0;
		for (j = 0; toggle == 0 && j < 53; j++)
		{

			if (*(s + i) == a[j])
			{
				*(s + i) = c[j];
				toggle = 1;
			}
		}
		i++;
	}

	return (s);
}
