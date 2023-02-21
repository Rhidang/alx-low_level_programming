#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: Task 0 of nested loops
 * Return: Always zero
 */
int main(void)
{
	char _putchar[8]={'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int a;
	
	for (a=0; a < sizeof(_putchar); a++)
	{
	putchar(_putchar[a]);
	}
	putchar('\n');
	return (0);
}
