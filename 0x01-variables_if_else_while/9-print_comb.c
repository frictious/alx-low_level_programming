#include <stdio.h>

/**
 * main - Returns 0
 *
 * Description: Prints all single-digit decimals
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);

}

