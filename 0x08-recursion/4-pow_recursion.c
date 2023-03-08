#include "main.h"
/**
 * _pow_recursion - Function to use
 * @x: Number to find power of
 * @y: Number to use as power
 * Description: Function to find the power of a number
 * Return: Value of calculation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (x == 0)
	{
		return (0);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
