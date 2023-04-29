#include "main.h"
/**
 * prints a square - print of the size give square
 * return: empty
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)

		{
			putchar('#');
		}
		putchar('n');
	}
}

