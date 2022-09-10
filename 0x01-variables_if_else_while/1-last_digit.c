#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */
/**
 * main - Returns 0
 *
 * Description: The program will generate random numbers
 * and check if they are greater than 5, equal to 0,
 * and less than 6 but not 0 and prints them
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

	int n;

	rand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if((n % 10) > 5)
	{
		printf("is %d and is greater than 5", n);
	}
	else
	{
		if((n % 10) == 0)
		{
			printf("is %d and is 0", n);
		}
		else
		{
			if((n % 10) < 6 && (n % 10) > 0)
			{
				printf("is %d and is less than 6 and not 0", n);
			}
		}
	}

	return (0);

}

