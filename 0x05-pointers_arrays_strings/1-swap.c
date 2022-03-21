#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *b;
*b = *a;
*a = swap;
}
