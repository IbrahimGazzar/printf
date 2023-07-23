#include stdio.h
#include string.h
#include stdlib.h
#include unistd.h
#include stdarg.h
#include "main.h"

/**
 * num_to_string - creates a string that represents a given integer
 * @num: integer to be represented
 *
 * Return: The representative string
 */
char *num_to_string(int num)
{
    char *str;
    int i;
    int div;
    int len;

<<<<<<< HEAD
    if (num == 0)
    {
        str = "0";
        return (str);
    }
    len = 0;
    if (num < 0)
    {
        num = -num;
        len++;
    }
    for (div = 1; num % div < num; div *= 10)
        len++;
    str = malloc(sizeof(char) * (len + 1));
    i = len - 1;
    for (div = 1; num % div < num; div *= 10)
        str[i--] = ((num % (div * 10)) / div) + '0';
    if (i == 0)
        str[i] = '-';
    str[len + 1] = '\0';
    return (str);
=======
	if (num == 0)
	{
		str = "0";
		return (str);
	}
	len = 0;
	if (num < 0)
	{
		num = -num;
		len++;
	}
	for (div = 1; num % div < num; div *= 10)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	i = len - 1;
	for (div = 1; num % div < num; div *= 10)
		str[i--] = ((num % (div * 10)) / div) + '0';
	if (i == 0)
		str[i] = '-';
	str[len + 1] = '\0';
	return (str);
>>>>>>> 77009d6509d404cc92371df868f661e86180f00d
}
