#include <stdio.h>
/**
** main - entry point for the program
**
** Description: prints the size of various type
**
** Return: 0
*/
int main(void)
{
	char r;
	int s;
	long int t;
	long long int u;
	float v;

	printf("Size of a char: %d byte(s)\n", sizeof(r));
	printf("Size of an int: %d byte(s)\n", sizeof(s));
	printf("Size of a long int: %d byte(s)\n", sizeof(t));
	printf("Size of a long long int: %d byte(s)\n", sizeof(u));
	printf("Size of a float: %d byte(s)\n", sizeof(v));
	return (0);
}
