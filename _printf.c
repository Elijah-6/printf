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
	unsigned int i, j, s_count, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		j = i + 1;
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			switch (format[j])
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					s_count = _puts(va_arg(args, char *));
					count += (s_count - 1);
					break;
				case '%':
					_putchar(format[j]);
					break;
			}
			i++;
		}
		count++;
	}
	va_end(args);
	return (count);
}
