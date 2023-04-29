#include "main.h"

/**
 * print_lines:- drawas a straight line according to the parameter
 * @n: The number of lines to draw
 * Return: entry
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar (95);
	}
	_putchar ('\n');
	}
}
