#include <stdio.h>

/**
 * main - Returns 0
 *
 * Description: Prints from 0 to 15
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 16)
	{
		putchar(num + '0');
		num++;
	}
	
	putchar('\n');

	return (0);
}

