#include "main.h"
/**
 * set_string - Function to use
 * @s: Pointer pointer
 * @to: Pointer
 * Description: A function that sets the value of a pointer to a pointer
 * Return: Zero
 */
void set_string(char **s, char *to)
{
	s = &to;
}
