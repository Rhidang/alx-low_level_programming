#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Function to use
 * @str: String
 * Description: Function that returns pointer to
 * newly allocated space in memory
 * Return: NULL if str=NULL
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)

		string = (char *)malloc(sizeof(char) * (i + 1));
	if (sting == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		string[j] = str[j];
	return (string);
}
