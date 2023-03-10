#include "main.h"
/**
 * _strncpy - Function to use
 * @dest: Destination file
 * @src: Source file
 * @n: Bytes to be copied
 * Description: Function to copy a string
 * Return: Zero
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
