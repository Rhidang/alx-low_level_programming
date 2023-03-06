#include "main.h"
/**
 * _memset - Function to use
 * @n: memory to fill
 * @s: pointer
 * @b: constant byte
 * Description: Function to fill memory with a constant byte
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
