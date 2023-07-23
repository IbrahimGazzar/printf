#include <limits.h>
#include <stdio.h>
#include "main.h"
​
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len, len2;
        int speed = -75;
        len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
        printf("Length:[%d, %i]\n", len, len2);
        _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
   len =  _printf("String:[%s]\n", "I am a string !");
   len2 = printf("String:[%s]\n", "I am a string !");
   printf("Length: %d %d\n", len, len2);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Length: %d %d\n", len, len2);
    len = _printf("Unknown:[%r]\n");
    len2 = printf("Unknown:[%r]\n");
    printf("Length: %d %d\n", len, len2);
    len = _printf("boo% hoo\n");
    len2 = printf("boo% hoo\n");
    _printf("Len:[%d]\n", speed);
    printf("Len:[%d]\n", num_to_string(speed));
        return (0);
}
