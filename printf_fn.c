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

/**
 * _printf_ext_1 - prints
 * @val: the variable list
 * @ch: character of the format idx
 * @p_i: pointer to i
 * Return: an int
 */
int _printf_ext_1(va_list val, char ch, unsigned int *p_i)
{
  unsigned int *p_i_count = p_i;
  int count = 0, tempNum;
  char *strTemp;

  switch (ch)
  {
    case 'z':
      count += print_c('%');
      *p_i_count = *p_i_count + 1;
      break;
    case 's':
      strTemp = va_arg(val, char *);
      if (strTemp == NULL)
        count += print_str("(null)");
      else
        count += print_str(strTemp);
      *p_i_count = *p_i_count + 1;
      break;
    case 'r':
      strTemp = va_arg(val, char *);
      if (strTemp == NULL)
        count += print_str("(null)");
      else
        count += print_revs(strTemp);
      *p_i_count = *p_i_count + 1;
      break;
    case 'd':
    case 'i':
      tempNum = va_arg(val, int);
      print_di(tempNum);
      count += int_counter(tempNum);
      *p_i_count = *p_i_count + 1;
      break;
    default:
      count += print_c('%');
      count += print_c(ch);
      *p_i_count = *p_i_count + 1;
  }
  return (count);
}

