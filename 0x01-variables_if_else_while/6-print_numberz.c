#include <stdio.h>

/**
 *
 * main - Returns 0
 *
 * Description: Prints 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);

}

