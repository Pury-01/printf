#include "main.h"

/**
 * get_func - fetches the right function for the corresponding specifier
 * @specifier: the palce holder for a given datatype
 * Return: the corresponding function for a specifier
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
