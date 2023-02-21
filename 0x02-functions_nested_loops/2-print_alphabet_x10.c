#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: Prints lowercase alphabets ten times
 * Return: Always zero
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{

		_putchar(c)
		}
		_putchar ('\n');
	}

	return (0);
}
