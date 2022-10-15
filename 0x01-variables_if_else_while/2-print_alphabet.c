#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 *
 * Return: 0
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	putchar('\n');
	return (0);
}
