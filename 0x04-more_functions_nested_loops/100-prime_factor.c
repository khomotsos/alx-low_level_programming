#include <stdio.h>
#include <math.h>

/**
 * Print largestt number -print the largests prime factor of number 612852475143
 * return: empty
 */

int main(void)
{
	long int num = 612852475143
	long int factor = 2;
	long int largest_factor = 0;

	while (num > 1){
		if (num % factor == 0) {
			num /= factor;
			largest_factor =

	factor;
		} else {
			factor++;
		}
	}

	printf("%ldn",largest_factor);

		return 0;

}
