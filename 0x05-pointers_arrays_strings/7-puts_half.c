#include "main.h"
/**
 * _strlen - Function to use
 * @s: String to check
 * Description: To check the length of a string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts_half - Function to use
 * @str: String to half
 * Description: Function to print second half of a string
 * Return: Zero
 */
void puts_half(char *str)
{
	int half;
	int len = _strlen(str);

	if (len % 2 != 0)
		half = (len / 2) + 1;
	else
		half = (len / 2);
	while (half < len)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
