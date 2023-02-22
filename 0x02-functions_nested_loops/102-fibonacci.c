#include <stdio.h>
/**
 * main - Entry point
 * Description: Print first fifty fibonacci numbers
 * Return: Always zero
 */
int main(void)
{
	int count;
	int cont = 50;
	long a = 1;
	long b = 2;

	for (count = 1; count <= (cont / 2); count++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (cont % 2 == 1)
		printf("%li", a);
	printf("\n");
	return (0);
}
