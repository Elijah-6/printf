#include "main.h"

/**
 * _print_string - Print a string
 * @args: The string to be printed
 * Return: The number of characters printed
 */
int _print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * _print_char - Print a character
 * @args: The character to be printed
 * Return: The number of characters printed
 */
int _print_char(char c)
{
	_putchar(c);
	return (1);
}
