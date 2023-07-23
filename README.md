This folder contains the ALX printf project, where we need to build a _print function that's able to mimick most of, if not all, of the printf function found in the C standard library. The function is built with only using those following functions and macros:

- write
- malloc
- free
- va_start
- va_arg
- va_end
- va_copy

The _printf function prints a given string literal, and handle the formatting for variables embedded into the string, and returns the total length of the printed output. A variable can be embedded by adding percentage sign (%) in the string followed by the appropriate flag for the variable's type, and the variable should of course be given as input for the function. To print a % in the string, you should type %% or \%. So far, these are the flags that the _printf function can handle:

%c: character
%s: string

