#include "main.h"
/**
 * print_number - Function to use
 * @n: integer to print
 * Description: Function that prints an integer
 * Return: n
 */
void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double und = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}
		while (und <= positive)
			und *= 10;
		tens = und / 10;
		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
