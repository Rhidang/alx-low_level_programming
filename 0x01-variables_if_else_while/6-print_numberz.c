#include <stdio.h>
/**
 * main - Entry point
 * Description: Print single digits using putchar
 * Return: Always 0
 */
int main(void)
{
	char numberz;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
