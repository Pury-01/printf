#include "main.h"

/**
 *c_handler - handles the character specifier
 *@args: list of arguments passed
 *Return: nothing
 */

void c_handler(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
}

/**
 *s_handler - handles the string specifier
 *@args: lists of arguments passed
 *
 *Return: nothing
 */

void s_handler(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
