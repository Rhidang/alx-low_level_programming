#include "main.h"
/**
 * _print_rev_recursion - Function to use
 * @s: String to reverse
 * Description: Function to print a string in reverse.
 * Return: Zero
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
