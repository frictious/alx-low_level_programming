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
	int count = 1;

	while (num <= 'Z')
	{
		if ((count == 5) || (count == 17))
		{
			count++;
			num++;
			break;
		}
		else
		{
			putchar(tolower(num));
		}

		count++;
		num++;
	}

	putchar('\n');

	return (0);

}

