#include "main.h"

/**
 *_printf - print like printf
 *
 *@format: format specifier
 *
 *Return: number of characters in format string
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		count++;
	}
	return (count);
}
