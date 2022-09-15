#include <stdio.h>
#include <ctype.h>

int _putchar(char c);

void print_alphabet(void)
{
	int num = 'A';

	while (num < 'Z')
	{
		putchar(tolower(num));
	}
}

