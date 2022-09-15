#include <stdio.h>
#include <ctype.h>

void print_alphabet_x10(void);

#include "main.h"

/*Print alphabet function declaration*/
/**
 *  Description: Printing the alphabets in lowercase
 */

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

