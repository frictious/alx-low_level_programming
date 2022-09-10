#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - Returns 0
 *
 * Description: The program generate random numbers,
 * check if they are greater than 5, equal to 0,
 * or less than 6.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else
	{
		if ((n % 10) == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, last_digit);
		}
		else
		{
			if ((n % 10) < 6)
			{
				printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
			}
		}
	}

	return (0);

}

