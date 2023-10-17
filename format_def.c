#include "main.h"

/*
 * print_c - prints chars to STDout
 * @character: int
 *
 * Return: int
 */
int print_c (int character)
{
	_putchar((char) character);
	return (1);
}

/*
 * print_str - prints strings
 * @str: string
 *
 * Return: int
 */
int print_str(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}

/*
 * print_per - prints %%
 *
 * Returns: int
 */
int print_per(void)
{
	_putchar('%');
	return (1);
}

/*
 * print_di - prints %d and %i
 * @n: the int to be printed
 *
 *
 * Returns: int
 */
void print_di(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m / 10)
	{
		print_di(m / 10);
	}
	_putchar(m % 10 + '0');
}

/**
 * int_counter - counter for len of int
 * @n: the int to print
 *
 *
 * Return: int
 */
int int_counter(int n)
{
	int count = 0;

	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
/**
 * print_revs - recursively prints strings in reverse
 * @str: string
 *
 * Return: int
 */
int print_revs(char *str)
{
	int i = 0;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i = (count - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (count);
}

