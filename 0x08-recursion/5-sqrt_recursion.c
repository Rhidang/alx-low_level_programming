#include "main.h"
/**
 * root - Function to use
 * @n: Number to use
 * @y: Root of number
 * Description: Find root of a number
 * Return: root
 */
int root(int n, int y)
{
	if (y * y > n)
	{
		return (-1);
	}
	if (y * y == n)
	{
		return (y);
	}
	return (root(n, y + 1));
}

/**
 * _sqrt_recursion - Function to use
 * @n: Number to use
 * Description: Function to find the natural square root of a number
 * Return: Naturalsquare root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
