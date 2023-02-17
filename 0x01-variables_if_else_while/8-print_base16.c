#include <stdio.h>
/**
 * main - Entry point
 * Description: Print base 16 numbers
 * Return: Always 0
 */
int main(void)
{
	int h = '0';
	int af = 'a';

	while (h <= '9')
	{
		putchar(h);
		h++;
	}
	while (af <= 'f')
	{
		putchar(af);
		af++;
	}
	putchar('\n');
	return (0);
}
