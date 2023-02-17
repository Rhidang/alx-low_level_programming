#include <stdio.h>
/**
 * main - Entry point
 * Description: Print single digits using putchar
 * Return: Always 0
 */
int main(void)
{
	int numberz = '0';

	while (numberz <= '9')
	{
		putchar(numberz);
		numberz++;
	}
	putchar('\n');
	return (0);
}
