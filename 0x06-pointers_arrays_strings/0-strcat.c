#include "main.h"
/**
 * *_strcat - Function to use
 * @dest: Characer destination
 * @src: Character source
 * Description: Function to concatenate two strings
 * Return: Return dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
