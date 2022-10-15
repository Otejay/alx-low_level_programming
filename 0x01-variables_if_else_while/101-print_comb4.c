#include <stdio.h>

/**
 * main - entry point
 *
 *
 * Return: 0
 */
int main(void)
{
	int r, s, t;

	for (r = '0'; r <= '9'; r++)
	{
		for (s = '0'; s <= '9'; s++)
		{
			for (t = '0'; t <= '9'; t++)
			{
				if (r < s && s < t)
				{
					putchar(r);
					putchar(s);
					putchar(t);
					if (r == '7' && s == '8' && t == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
