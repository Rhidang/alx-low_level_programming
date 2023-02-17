#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets backwards
 * Return: Always 0
 */
int main(void)
{
	char mirror;

	for (mirror = 'a'; mirror <= 'z'; mirror--)
	{
		putchar(mirror);
	}
	putchar('\n');
	return (0);
}
