#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */

int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is Positive");
	}else
	{
		if (n == 0)
		{
			printf("is Zero");
		}else
		{
			printf("is Negative");
		}
	}
	return (0);

}
