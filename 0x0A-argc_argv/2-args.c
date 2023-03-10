#include <stdio.h>
/**
 * main - Function to use
 * @argc: Argument counter
 * @argv: Argument vector
 * Description: Program to print all arguments it receives
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
