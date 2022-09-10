#include <stdio.h>

/**
 * main - Returns 0
 *
 * Description: Program will run and print 0 to 9
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	return (0);
}

