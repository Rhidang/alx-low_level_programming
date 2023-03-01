#include "main.h"
/**
 * _strncpy - Function to use
 * @dest: Destination file
 * @src: Source file
 * Description: Function to copy a string
 * Return: Zero
 */
char *_strncpy(char *dest, char *src)
{
	int a = 0;

	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
