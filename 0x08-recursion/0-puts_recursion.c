#include "main.h"
/**
 * _puts_recursion - Function to use
 * @s: String to print
 * Description: Function to print a string
 * Return: String
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
