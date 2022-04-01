#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - print product of argument numbers
* @argc: argument counter
* @argv: numbers to multiply
* Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	int a,b,result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	
	}

	a = (argv[1]);
	b = (argv[2]);

	result = a *b;

	printf("%d\n", result);

	return (0);
}

