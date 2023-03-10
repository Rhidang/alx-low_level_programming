#include <stdio.h>
/**
 * main - Function to use
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
