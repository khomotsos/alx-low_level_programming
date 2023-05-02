#include <stdio.h>

/**
 * swap_int - swaps the value of two integers.
 *@a: A point to an integer.
 *@b: A point to an integer.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
