#include <stdio.h>
/**
 * main - Entry point
 * Description: Task ten
 * Return: Always zero
 */
int main(void)
{
	int a;
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		for (a = '0'; a <= '9'; a++)
		{
			putchar(b);
			putchar(a);

			if (b != '8' || a != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
