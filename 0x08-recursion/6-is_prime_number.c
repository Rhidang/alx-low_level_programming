#include "main.h"
/**
 * a_prime - Function to use
 * @n: Number to use
 * @x: Divisor
 * Description: Function  to find the prime of a number
 * Return: prime
 */
int a_prime(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (a_prime(n, x + 1));
}

/**
 * is_prime_number - Function to use
 * @n: Number to use
 * Description: Function to check prime
 * Return: prime
 */
int is_prime_number(int n)
{
	int x = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (a_prime(n, x));
}
