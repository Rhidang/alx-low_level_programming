#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Function to use
 * @s1: first string
 * @s2: Second string
 * Description: Function that concatenates two strings
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char an_array;

	k = 0;
	an_array = malloc(sizeof(*s1 + *s2));

	if (an_array == NULL)
		return (NULL);

	i = 0;
	while (s1[a] != '\0')
	{
		an_array[k] = s1[i];
		i++;
		k++;
	}
	j = 0;
	while (s2[b] != '\0')
	{
		an_array[k] = s2[j];
		j++;
		k++;
	}
	return (an_array);
	free(an_array);
}
