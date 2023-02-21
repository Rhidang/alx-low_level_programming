#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: integer used
 * Description: Prints the last digit of a number
 * Return: Last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));
	return (n % 10);
}
