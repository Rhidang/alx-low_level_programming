#include "main.h"
/**
 * *_strcpy - Function to use
 * @dest: pointer
 * @src: pointer
 * Description: TO copy one string to another
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
