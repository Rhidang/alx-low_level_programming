#include <stdio.h>
/**
 * main - Entry point
 * Description: Alphabet without q and e
 * Return: Always 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{

		if (alphabet != 'e' && alphabet != 'q')

		{
			putchar (alphabet);
		}
		}
	putchar('\n');
	return (0);
}
