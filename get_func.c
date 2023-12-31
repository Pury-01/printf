#include "main.h"

/**
 * get_func - fetches the right function for the corresponding specifier
 * @specifier: the place holder for a given datatype
 * Return: Nothing
 */

void (*get_func(char specifier))(va_list args)
{
	if (specifier == 'c')
	{
		return (c_handler);
	}
	if (specifier == 's')
	{
		return (s_handler);
	}
	else
	{
		return (NULL);
	}
}
