#include <stdio.h>
#include <ctype.h>

/**
 * main - Returns 0
 *
 * Description: The program will print the alphabet
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
	putchar('\n');

	return (0);

}

