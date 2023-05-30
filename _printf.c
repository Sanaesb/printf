#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _putchar - prints a single character to standard output
 * @c: the character to print
 * Return: 1 on success
 * On error, return -1 and set erno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - produces output according to a format
 * @format: character string with format specifier
 * Return: total no of characters printed(excluding null byte)
 */

int _printf(const char *format, ...)
{
	int totalchar = 0;
	va_list arg;

	va_start(arg, format);
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			CasesFunction(arg, *format, &totalchar);
		}
		else
		{
			putchar(*format);
			totalchar++;
		}
		format++;
	}
	va_end(arg);
	return (totalchar);
}

