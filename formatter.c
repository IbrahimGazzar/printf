#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * formatter -  function that finds formats for _printf
 * @i: variable
 * @args: argument
 * Return: NULL
 */
void formatter(char i, va_list args)
{
char *ss;
char c;
switch (i)
{
case 'c':
c = va_arg(args, int);
write(1, &c, 1);
break;
case 's':
ss = va_arg(args, char *);
if (ss == NULL)
{
write(1, "(null)", 6);
break;
}
write(1, ss, _strlen(ss));
break;
case '%':
write(1, "%", 1);
break;
default:
write(1, "%", 1);
write(1, &i, 1);
}
}
