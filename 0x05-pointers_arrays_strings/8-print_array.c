#include "main.h"
#include <stdio.h>
/**
 * print_array - Function to use
 * @a: integer
 * @n: Number of array
 * Description: to print the number of elements in an array
 * Return: Zero
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
