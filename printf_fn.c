#include "main.h"
#include <stdio.h>
/**
 * _printf - prints anything to stdout
 * @format: the string to print
 * Return: an int
 */
int _printf(char *format, ...)
{
  unsigned int i = 0, count = 0;
  unsigned int *p_i = &i;
  va_list arg;

  va_start(arg, format);
  if (format == NULL)
  {
    va_end(arg);
    return (-1);
  }
  for (i = 0; format[i] != '\0'; i++)
  {
    if (format[i] == '%')
    {
      switch (format[i + 1])
      {
      case '\0':
        va_end(arg);
        return (-1);
      case '%':
        count += print_per();
        i++;
        break;
      case 'c':
        count += print_c(va_arg(arg, int));
        i++;
        break;
      default:
        count += _printf_ext_1(arg, format[i + 1], p_i);
      }
    }
    else
    {
      _putchar(format[i]);
      count++;
    }
  }
  va_end(arg);
  return ((int) count);
}
