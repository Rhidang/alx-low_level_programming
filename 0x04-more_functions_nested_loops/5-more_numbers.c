#include "main.h"
/**
 * more_numbers - Entry point
 * Description: Prints 0 to 14 ten times
 * Return: Always zero
 */
void more_numbers(void)
{
	char j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 > 0)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
