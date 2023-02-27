#include "main.h"
/**
 * _strlen - Function to use
 * @s: String to check
 * Description: To check the length of a string
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * rev_string - Function to use
 * @s: String to reverse
 * Description: Function to reverse a string
 * Return: Zero.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
