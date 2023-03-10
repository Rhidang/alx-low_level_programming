#include "main.h"
#define NULL 0
/**
 * _strpbrk - Function to use
 * @s: string to check
 * @accept: file to check
 * Description: Function that searches a string for bytes
 * Return: matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);
}
