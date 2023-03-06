#include "main.h"
/**
 * _memcpy - Function to use
 * @dest: Destinatination file
 * @src: Source file
 * @n: Bytes to copy
 * Description: Function that copies memory area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		dest[i] = src[i];
	}
	return (dest);
}
