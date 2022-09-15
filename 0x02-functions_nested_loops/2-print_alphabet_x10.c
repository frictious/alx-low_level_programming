#include <stdio.h>
#include <ctype.h>

void print_alphabet_x10(void);
#include "main.h"

/**
 * print_alphabet_x10: Returns void
 *
 * Description: Prints the alphabets in lower case 10 times
 *
 * Return: Returns void
 */
void print_alphabet_x10(void)
{
	int num = 'A';
	int count = 1;

	while (count <= 10)
	{
		while (num < 'Z')
		{
			putchar(tolower(num));
		}
	}
	putchar('\n');
}

