#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Function to use
 * @ac: Counter
 * @av: Vector
 * Description: Function that cocatenates all the arguments
 * of your program
 * Return: NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if(av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			a[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			a[k] = av[i][j];
	}
	a[k] = '\0';
	return (a);
}
