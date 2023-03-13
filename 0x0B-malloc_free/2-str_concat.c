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
	int i, j, k, end;
	char *an_array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	an_array = malloc(sizeof(char) * (i + j + 1));

	if (an_array == NULL)
	{
		free(an_array);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		an_array[k] = s1[k];
	end = j;

	for (j = 0; j <= end; k++; j++)
		an_array[k] = s2[j];

	return (an_array);
}
