**Custom Printf() ALXC19**

_printf - prints anything to stdout

**Synopsis**

```c
int _printf(char *format, ...)

```
**Description**

The _printf() function prints the formatted output specified by the format string to the standard output (stdout). The format string is a sequence of characters that contains both literal characters and format specifiers. The format specifiers tell _printf() how to interpret the arguments that are passed to it.

The arguments to _printf() are variable in number and type. They are specified after the format string in the function call. For example, the following function call prints the string "Hello, world!" to stdout:

c
_printf("Hello, world!\n");

The _printf() function returns the number of characters that were printed to stdout.

Format Specifiers

The following table shows the most common format specifiers that are used with _printf():

Format Specifier    Description

%%    Prints a percent sign (%).
%c    Prints a single character.
%s    Prints a string.
%d    Prints an integer in decimal format.
%i    Prints an integer in decimal format.
%u    Prints an integer in unsigned decimal format.
%o    Prints an integer in octal format.
%x    Prints an integer in hexadecimal format (lowercase).
%X    Prints an integer in hexadecimal format (uppercase).


Authors:

https://github.com/picassoiam 

https://github.com/vvr0n

Message @picassoiam

