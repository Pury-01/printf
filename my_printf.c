#include "main.h"

/**
 * _printf - prints a format string to the standard output
 * @format: string to be printed
 * Return: nmuber of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (format == NULL)
			write(1, "Error\n", 5);
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c_handler(args);
				count++;
			}
			if (*format == 's')
			{
				s_handler(args);
				count++;
			}
			if (*format == '%')
			{
				write(1, "%%", 2);
				count++;
			}
		}
		else
			write(1, format, 1);
		count++;
		format++;
	}
	va_end(args);
	return (count);
}
