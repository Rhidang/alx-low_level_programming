#include "main.h"
/**
 * _strcmp - Function to use
 * @s1: first string to compare
 * @s2: second string to compare
 * Description: Function to compare two strings
 * Return: Zero
 */
int _strcmp(char *s1, char *s2);
{
	int a = 0;

	while (s1[a] != '\0')
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
