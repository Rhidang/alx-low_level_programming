#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Function to use
 * @argc: Argument counter
 * @argv: Argument vector
 * Description: Program that adds positive numbers
 * Return: One if digit contains a symbol
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[x]);
	}
	printf("%d\n", result);
	return (0);
}
