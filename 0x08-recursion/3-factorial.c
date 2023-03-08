#include "main.h"
/**
 * factorial - Function to use
 * @n: Number to find factorial of
 * Description: Function to find factorial of a number
 * Return: -1 on error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
