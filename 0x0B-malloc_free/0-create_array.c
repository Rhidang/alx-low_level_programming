#include <stdlib.h>
#include "main.h"
/**
 * create_array - Function to use
 * @size: size of array
 * @c: character
 * Description: Function to create an array of characters
 * Return: NULL if size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
