#include "main.h"
/**
 * swap_int - function to use
 * @a: integer one
 * @b: integer two
 * Description: Swaps the value of two integers
 * Return: Always zero
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
