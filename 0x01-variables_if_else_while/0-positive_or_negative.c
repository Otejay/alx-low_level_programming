#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 *  main - serves as entry point of the program
 *
 *  Description: to print if a number is negative or positive
 *
 *  Return: 0 (success)
 */

/* betty style doc for function main goes there */

int main(void)

{

	int n;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);

}
