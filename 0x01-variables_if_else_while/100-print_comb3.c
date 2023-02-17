#include <stdio.h>
/**
 * main - Entry point
 * Description: Task ten
 * Return: Always zero
 */
int main(void)
{
	int a = 0;
	int b;
	int c;

	while (c <= 99)
	{
		b = (a / 10 + '0');
		c = (a % 10 + '0');

		if (b < c)
		{
			putchar(b);
			putchar(c);

			if (a != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;

	}
	putchar('\n');

	return (0);
}
