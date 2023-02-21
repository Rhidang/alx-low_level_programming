#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: the alphabet
 * Description: Checks for lower case character c
 * Return: A value of 0ne when successful
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
			return (0);
}
