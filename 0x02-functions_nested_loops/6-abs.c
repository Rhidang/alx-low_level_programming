#include "main.h"
#include <stdlib.h>
/**
 * _abs - Entry point
 * @n: an integer
 * Description: Computes the absolute value of an integer
 * Return: Always zero
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
