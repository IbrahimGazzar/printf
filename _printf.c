#include <stdio.h>
#include <stdarg.h>
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
	va_list args;
	int fd;
	int i;
	int count;

	fd = 1;
	if (format == NULL)
	{
		write(fd, "", 1);
		return (0);
	}
	count = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			count += formatter(format[++i], args);
		}
		else
		{
			write(fd, &format[i], 1);
			count++;
		}
	}
	va_end(args);
	return (count);
}
