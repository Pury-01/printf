#include "main.h"

/**
 *d_handler - handles integers
 *@args: number of arguments
 *
 *Return: nothing
 */
void d_handler(va_list args)
{
	int num;
	int d;
	int length = 0;
	int i = 0;
	char temp;

	d = va_arg(args, int);
	char buffer[20];

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
			num / = 10;
		}
		for (i = 0; i < length / 2; i++)
		{
			temp = buffer[i];

			buffer[i] = buffer[length - 1 - i];
			buffer[length - 1 - i] = temp;
		}
	}
}



