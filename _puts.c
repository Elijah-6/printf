#include "main.h"
/**
 *_puts - print a given string
 *
 * @str : string to print out
 *
 * Return: number of chars in string
 */

int _puts(char *str)
{
	int count = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
