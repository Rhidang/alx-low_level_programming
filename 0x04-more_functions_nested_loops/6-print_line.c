#include "main.h"
/**
 * print_line - Entry point
 * @n: number of times to print line
 * Description: Print a straight line
 * Return zero
 */
void print_line(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('_');
		n++;
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
