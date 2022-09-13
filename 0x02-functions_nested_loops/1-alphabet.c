#include <stdio.h>

/**
 * main - entry point
 *
 * Description - Prints the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 'A';

	while (num <= 'Z')
	{
		putchar(tolower(num));
		num++;
	}

	putchar('\n');

	return (0);
}

