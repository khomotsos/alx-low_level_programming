#include "main.h"

/**
 * puts2- Prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: A pointer to the string to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;

	/* find the length of the string */
	while (str[len] != '0')
	{
		len++;
	}

	/* prints every other character of the string */

	for (int i = 0; i < len; i += 2)

	{
		_putchar(str[i]);
	}

	/* print a new line */
	_putchar('n');
}
