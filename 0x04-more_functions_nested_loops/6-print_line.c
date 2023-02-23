#include "main.h"
/**
 * print_line - Entry point
 * @n: number of times to print line
 * Description: Print a straight line
 * Return zero
 */
void print_line(int n)
{
	int insert = n;

	for (insert = n; insert > 0; insert--)
		_putchar('_');
	_putchar('\n');
}
