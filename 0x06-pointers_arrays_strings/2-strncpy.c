#include "main.h"
/**
 * _strncpy - Function to use
 * @dest: Destination file
 * @src: Source file
 * Description: Function to copy a string
 * Return: Zero
 */
char *_strncpy(char *dest, char *src int n)
{
	int n = 0;

	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		a++;
	}
	dest[n] = '\0';
	return (dest);
}
