#include "main.h"
/**
 * print_times_table - Entry point
 * @n: integer
 * Description: Prints multiplication table
 * Return: Not prescriped
 */
void print_times_table(int n)
{
	int row;
	int column;
	int product;

	if (n >= 0 && n < 16)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = (row * column);
				if (column == 0)
					_putchar('0' + product);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar('0' + product);
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 10) % 10));
						_putchar('0' + (product % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
