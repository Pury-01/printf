#include "main.h"

/**
 *i_handler - handles specifier i
 *@args: count of arguments passed
 *
 *Return: nothing
 */
void i_handler(va_list args)
{
	int num;
	int length = 0;
	int j = 0;
	char temp;
	char buffer[20];

	int i = va_arg(args, int);

	if (num == 0)
	{
		buffer[length++] = '0';
	}
	else
	{
		if (num < 0)
		{
			buffer[length++] = '-';
		}
		while (num > 0)
		{
			buffer[length++] = '0' + (num % 10);
			num / 10;
		}
		for (j = 0; j < length / 2; j++)
		{
			temp = buffer[j];

			buffer[j] = buffer[length - 1 - j];
			buffer[length - 1 - j] = temp;
		}
	}
}
