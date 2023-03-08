#include "main.h"
/**
 * _strlen_recursion - Function to use
 * @s: String to use
 * Description: Function to find length of a string
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
