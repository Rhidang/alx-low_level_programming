#include "main.h"
/**
 * _strchr - Function to use
 * @s: String
 * @c: Character to find
 * Description: Function that finds a character in a string
 * Return: c if found, NULL if not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
