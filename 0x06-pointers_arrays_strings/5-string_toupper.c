#include "main.h"
/**
 * string_toupper - Function to use
 * @t: String to check
 * Description: Function to change all lowercase to uppercase
 * Return: string
 */
char *string_toupper(char *t)
{
	int i = 0;

	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] >= 'a' && t[i] <= 'z')
			t[i] = t[i] - 'a' + 'A';
	}
	return (t);
}
