#include "main.h"
/**
 * print_sign - Entry point
 * @n: integer to be checked
 * Description: checks the sign of an integer
 * Return: one if positive, zero if zero and negative one if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
