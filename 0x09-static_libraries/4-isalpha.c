#include "main.h"
/**
 * _isalpha - Entry point
 * Description: Checks for the letter c
 * @c: Letter to check
 * Return: one if successful else return zero
 */
int _isalpha(int c)
{
	if ((c >= 'a'  && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
