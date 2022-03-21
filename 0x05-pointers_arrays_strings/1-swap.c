#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * swap_int - take in two variable integers and swaps them
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
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
