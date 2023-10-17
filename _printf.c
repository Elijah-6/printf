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
	int num = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			else if (format[i] == 'c')
				count += _print_char(va_arg(args, int));
			else if (format[i] == 's')
				count += _print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
			{
				num = va_arg(args, int);
				if  (num < 0)
				{
					count += _print_char('-');
					num = -num;
				}
				count += _print_number(num);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				va_end(args);
				return (-1);
			}
		}
	}
	va_end(args);
	return (count);
}
