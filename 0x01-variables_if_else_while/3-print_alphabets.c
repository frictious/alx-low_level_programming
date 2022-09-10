#include <stdio.h>
#include <ctype.h>

/**
 * main - Returns 0
 *
 * Description: Prints the alphabets in upper and
 * lower cases respectively
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num = 'A';

	while (num <= 'Z')
	{
		putchar(tolower(num));
		num++;
	}

	num = 'A';
	while (num <= 'Z')
	{
		putchar(toupper(num));
		num++;
	}

	putchar('\n');

	return (0);

}

