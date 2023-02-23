#include "main.h"
/**
 * _isdigit - Entry point.
 * Description: Checks if c is a digit
 * @c: character to check
 * Return: one if successful, zero otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	return (0);
}
