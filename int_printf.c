#include "main.h"

/**
 * _printf - prints integers from place holders %d and %i
 * @format: string format containing integers
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
			{
				d_handler(args);
				count++;
			}
			if (*format == 'i')
			{
				i_handler(args);
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
