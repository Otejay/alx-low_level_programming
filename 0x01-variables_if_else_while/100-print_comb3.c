#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (!(i == '9' && j == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
