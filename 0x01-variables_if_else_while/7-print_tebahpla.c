#include <stdio.h>
#include <ctype.h>

/**
 * main - Returns 0
 *
 * Description: Printing the alphabets in reverse
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num = 'Z';

	while (num >= 'A')
	{
		putchar(tolower(num));
		num--;
	}

	putchar('\n');

	return (0);
}

