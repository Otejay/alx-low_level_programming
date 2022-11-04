#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments vector
 *
 * Return: success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
