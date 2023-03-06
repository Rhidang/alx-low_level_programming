#include "main.h"
#define NULL 0

/**
 * _strchr - Function to use
 * @s: String
 * @c: Character to find
 * Description: Function that finds a character in a string
 * Return: c if found, NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
