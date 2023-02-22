#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Zero
 */
int main(void)
{
	int add_evens = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			add_evens += sum;
	}
	printf("%d\n", add_evens);

	return (0);
}
