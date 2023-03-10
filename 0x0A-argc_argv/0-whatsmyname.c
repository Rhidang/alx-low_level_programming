#include <stdio.h>
#include "main.h"
/**
 * main - Function to use
 * @argc: argument counter
 * @argv: argument vector
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
