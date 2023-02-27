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
 * puts2 - function to use
 * @str: String to use
 * Description: Prints half the string
 * Return: Zero.
 */
void puts2(char *str)
{
	for (int i = 0; i < _strlen(str); i += 2)
		_putchar(str[i]);
}
