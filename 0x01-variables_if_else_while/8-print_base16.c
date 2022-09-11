#include <stdio.h>
#include <ctype.h>

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
	int alph = 'A';

	while (num < 16)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(tolower(alph));
			alph++;
		}
		num++;
	}
	putchar('\n');
	return (0);

}

