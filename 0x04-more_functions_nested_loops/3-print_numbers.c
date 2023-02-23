#include "main.h"
/**
 * print_numbers - Entry point.
 * Description: Prints numbers from 0 to 9
 * Return: Zero in this case
 */
void print_numbers(void)
{
	char c = '0';

	while (c < '10')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
