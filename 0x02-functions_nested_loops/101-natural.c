#include <stdio.h>
/**
 * main - Entry point
 * Description: Print a weird sequence
 * Return: zero
 */
int main(void)
{
	int n;
	int sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
