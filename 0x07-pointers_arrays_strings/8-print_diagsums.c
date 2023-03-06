#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function to use
 * @a: Pointer
 * @size: Dimension
 * Description: Function to print sum of the two diagonals of a square matrix
 * Return: Zero
 */
void print_diagsums(int *a, int size)
{
	int diasum1 = 0;
	int diasum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diasum1 += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diasum2 += a[i];
	}
	printf("%d, %d\n", diasum1, diasum2);
}
