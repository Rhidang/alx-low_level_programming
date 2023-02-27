#include "main.h"
/**
 * reset_to_98 - Function to use
 * @n: integer to print
 * Description: Takes apointer to an int as a parameter
 * Return: Always zero
 */
void reset_to_98(int *n)
{
	int n = 98;
	int *x;

	x = &n;

	_putchar(x);
	_putchar('\n');
	return (0);
}
