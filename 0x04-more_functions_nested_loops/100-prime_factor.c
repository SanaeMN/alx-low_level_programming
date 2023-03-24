#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: always 0
 */

int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largest_factor = 1;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			largest_factor = factor;
			num /= factor;
			while (num % factor == 0)
			{
				num /= factor;
			}
		}
		factor++;
	}
	printf("%ld\n", largest_factor);
	return (0);
}
