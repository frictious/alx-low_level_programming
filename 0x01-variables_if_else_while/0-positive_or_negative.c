#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/* Main entry point Description: the program will check if a number entered */
int main(void)
/* 
 * main - Entry point Description: 'the program's description'
 * Return: Always 0 (Success)
*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	}

	return (0);

}

