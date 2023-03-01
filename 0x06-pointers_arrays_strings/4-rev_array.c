#include "main.h"
/**
 * reverse_array - Function to use
 * @a: integer to reverse
 * @n: number of elements in the array
 * Description: Function to reverse the elements in an array
 * Return: Zero
 */
void reverse_array(int *a, int n)
{
	int temp, begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		temp = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = temp;
		begin++, end--;
	}
}

