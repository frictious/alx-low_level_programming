#include <stdio.h>
#include <ctype.h>

/**
 * main - Returns 0
 *
 * Description: Returns the alphabets except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 'A';

	while (num <= 'Z')
	{
		if (num != 'q' || num != 'e')
		{
			putchar(tolower(num));
		}

		num++;
	}

	putchar('\n');

	return (0);

}

