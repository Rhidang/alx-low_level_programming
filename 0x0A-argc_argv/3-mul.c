#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function to use
 * @argc: Argument counter
 * @argv: Argument array
 * Description: Program that multiplies two
 * Return: Zero if successful, One if there's an error
 */
int main(int argc, char *argv[])
{
	int x;
	int y;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		result = x * y;
		printf("%d\n", result);
	}
	return (0);
}
