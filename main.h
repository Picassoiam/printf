#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int print_c (int character);
int print_str(char *str);
int print_revs(char *str);
int print_per(void);
int _printf(char *format, ...);
int _printf_ext_1(va_list val, char ch, unsigned int *p_i);
void print_di(int n);
int int_counter(int n);

#endif

