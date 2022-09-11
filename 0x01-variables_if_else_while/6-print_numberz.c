#include <stdio.h>
#include <ctype.h>
/**
 * main - Returns 0
 *
 * Description: Prints 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(tolower(num));
		num++;
	}

	putchar('\n');
	return (0);

}

