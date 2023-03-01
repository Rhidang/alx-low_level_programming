#include "main.h"
/**
 * *leet - Function to use
 * @l: Variable
 * Description: Function that encodes a string
 * Return: Leet
 */
char *leet(char *l)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int c;
	int d;

	for (d = 0; l[d] != '\0'; d++)
	{
		for (c = 0; a[c] != '\0'; c++)
		{
			if (l[d] == a[c])
				l[d] = b[c];
		}
	}
	return (l);
}
