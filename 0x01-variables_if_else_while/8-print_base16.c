#include <stdio.h>

/**
 ** main to print all the numbers of base 16 in lowercase
 * followed by a new line
 * *Return (0) 
 */

int main(void)
{
	int n;
	char l;

	for (n =0; n < 10; n++)
	{
		putchar(n);
	}
	for(l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
