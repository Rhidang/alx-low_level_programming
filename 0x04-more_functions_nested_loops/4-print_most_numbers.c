#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: Prints numbers 0 to 9 except 2 and 4
 * Return: zero
 */
void print_most_numbers(void)
{
	char i;

	while (i < '10')
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n')
}
