#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"

/**
 * num_to_string - creates a string that represents a given integer
 * @num: integer to be represented
 * Return: The representative string
 */
char *num_to_string(int num)
{
	char *str, *start, *end, temp;
	int i, len, is_negative, div;

	if (num == 0)
	{
		return ("0");
	}
	len = 0;
	is_negative = 0;
	if (num < 0)
	{
		if (num == INT_MIN)
		{
			str = "-2147483648";
			return (str);
		}
		len++;
		num = 0 - num;
		is_negative = 1;
	}
	div = num;
	do {
		len++;
		div /= 10;
	} while (div > 0);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	do {
		str[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);
	if (is_negative == 1)
		str[i++] = '-';
	str[i] = '\0';
	end = &str[i - 1];
	start = &str[0];
	while (start < end)
	{
		temp = *start;
		*(start++) = *end;
		*(end--) = temp;
	}
	return (str);
}
