#include "main.h"
/**
 * _strncat - Function to use
 * @dest: Destination file
 * @src: Source file
 * @n: Number of bytes
 * Description: Concatenates two files
 * Return: dest
 */
char *_strncat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
