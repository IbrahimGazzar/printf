#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * formatter -  function that finds formats for _printf
 * @i: variable
 * @args: argument
 * Return: NULL
 */
int formatter(char i, va_list args)
{
	char *ss;
	char c;

	switch (i)
	{
		case 'c':
		    c = va_arg(args, int);
			write(1, &c, 1);
			return (1);
		case 's':
			ss = va_arg(args, char *);
			if (ss == NULL)
			{
				write(1, "(nil)", 6);
				return (6);
			}
			write(1, ss, _strlen(ss));
			return (_strlen(ss));
		case '%':
			write(1, "%", 1);
			return (1);
		default:
			write(1, "%", 1);
			write(1, &i, 1);
			return (2);
	}
}
