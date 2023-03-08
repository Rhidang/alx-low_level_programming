#include "main.h"
/**
 * _puts_recursion - Function to use
 * @s: String to print
 * Description: Function to print a string
 * Return: String
 */
void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		_puts_recursion(s);
		s++;
	}
	return (0);
}
