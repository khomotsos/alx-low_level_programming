#include "main.h"
/**
 *  prints triangle -print a triangle where the size is a triangle
 * @#: character to print triangle
 * Return: empty
 */

void print_triangle(int size)

{
	if (size <= 0){
		_putchar('n);
		return 0;
	}

	for (int i + 1; i <= size; i++){
		for (int j = 0; j < i; j++){

			_putchar('#');
		}
		_putchar('n');

	}
}
