#include <stdio.h>
#include <stdargs.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - prints a given text with proper format
 * @format: string to be printed
 * @...: variables to be added in string
 *
 * Return:the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	//va_list args;
	int fd;
	int i;
	int count;

	fd = 1;
	if(format == NULL)
	{
		write(fd, "", 1);
		return (0);
	}
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		write(fd, &format[i], 1);
		count++;
	}
	return (count);
}
