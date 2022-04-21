#include "holberton.h"

/**
 * _puts - print a string
 * @str: A pointer to an int that will be changed
 * return: void which means our answer is correct
 */

void _puts(char *str)
{
        int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
putchar('\n');
return;
}
