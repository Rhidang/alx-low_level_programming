#include <stdio.h>
/**
 * main - Function to use
 * @argc: Argument counter
 * @argv: Argument array
 * Description: Program that multiplies two
 * Return: Zero if successful, One if there's an error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	print("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
