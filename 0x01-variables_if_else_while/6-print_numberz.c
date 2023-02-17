#include <stdio.h>
/**
 * main - Entry point
 * Description: Print single digits using putchar
 * Return: Always 0
 */
int main(void)
{
	int numberz;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
