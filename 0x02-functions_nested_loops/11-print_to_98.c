#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: integer
 * Description: prints numbers to 98
 * Return: none specified
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d", n);
	printf("\n");
}
