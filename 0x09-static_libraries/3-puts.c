#include "main.h"
/**
 * _puts - Function to use
 * @str: String to print
 * Description: to print a string
 * Return: Zero
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
