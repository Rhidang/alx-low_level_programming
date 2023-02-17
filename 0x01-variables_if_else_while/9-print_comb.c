#include <stdio.h>
/**
 * main - Entry point
 * Description: Possible combination of numbers
 * Return: Always zero
 */
int main(void)
{
	int combo = '0';

	while (combo <= '9')
	{
		putchar(combo);
	if (combo != '9')
	{
		putchar(',');
		putchar(' ');
	}
	combo++;
	}
	putchar('\n');
	return (0);
}
