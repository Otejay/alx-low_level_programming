#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - Serves as the entry point of the program
 *
 * Description: To print the last digit of a number
 *
 * Result: 0 (success)
 */



/* betty style doc for function main goes there */

int main(void)

{

	int n;
	int Ldigit;



	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	Ldigit = n % 10;
	if (Ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Ldigit);
	}
	else if (Ldigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Ldigit);
	}
	else if (Ldigit < 6 && Ldigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Ldigit);
	}

	return (0);

}
