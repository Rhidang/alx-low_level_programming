#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: number of times to print line
 * Description: print diagonal line
 * Return: zero
 */
void print_diagonal(int n)
{
	int draw;
	int space;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			for (space = 1; space < draw; space++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
