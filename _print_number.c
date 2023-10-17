#include "main.h"
/**
 * _print_number - Print an integer
 * @n: The integer to be printed
 * Return: The number of characters printed
 */
int _print_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n / 10 != 0)
	{
		count += _print_number(n / 10);
	}

	_putchar(n % 10 + '0');
	count++;
	return (count);
}

/**
 * _print_unsigned - Print an unsigned integer
 * @n: The unsigned integer to be printed
 * @base: The base for printing (10 for decimal, 8 for octal, 16 for hex)
 * @uppercase: Whether to use uppercase letters in hexadecimal
 * Return: The number of characters printed
 */
int _print_unsigned(unsigned int n, int base, int uppercase)
{
	char digits[] = "0123456789abcdef";
	int count = 0;

	if (uppercase)
		digits[10] = 'A';
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		char buffer[32];
		int index = 0;

		while (n > 0)
		{
		buffer[index++] = digits[n % base];
		n /= base;
		}

		for (; index > 0; index--)
		{
			_putchar(buffer[index - 1]);
			count++;
		}
	}
	return (count);
}
