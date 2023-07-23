#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 *
 */
char *num_to_string(int num)
{
	char *str;
	int i;
	int div;
	int len;

	if (num == 0)
		return ("0");
	len = 0;
	if (num < 0)
	{
		len++;
		num = 0 - num;
	}
	for (div = 1; num % div < num; div *= 10)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	i = len - 1;
	if (num < 0)
		str[0] = '-';
	for (div = 1; num % div < num; div *= 10)
		str[i--] = (num % (div * 10)) / div;
	return (str);
}
