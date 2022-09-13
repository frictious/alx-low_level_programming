#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description - Prints the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/*Print alphabet function declaration*/
void print_alphabet(void)
{
	int num = 'A';

	while (num <= 'Z')
	{
		putchar(tolower(num));
		num++;
	}

	putchar('\n');
}
