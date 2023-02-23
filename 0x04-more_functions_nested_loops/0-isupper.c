#include "main.h"
/**
 * _isupper - function for the task
 * Description: Checks if c is upper or lowercase
 * @c: character to check
 * Return: one if uppercase, zero otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
