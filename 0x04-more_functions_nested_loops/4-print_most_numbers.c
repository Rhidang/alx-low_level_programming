#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: Prints numbers 0 to 9 except 2 and 4
 * Return: zero
 */
void print_most_numbers(void)
{
	char c;

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
