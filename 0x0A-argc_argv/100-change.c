#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function to use
 * @argc: Argument counter
 * @argv: Argument Vector
 * Description: Program that prints minimum number of coins needed for change
 * Return: one if argument is not 1
 */
int main(int argc, char *argv[])
{
	int cents;
	int no_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		no_coins += 1;
	}
	printf("%d\n", no_coins);
	return (0);
}
