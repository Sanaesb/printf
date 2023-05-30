#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

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
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			totalchar += _putchar(*format);
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				totalchar++;
			}
			else if (*format == 's')
			{
			char *error = "(null)";
int i, j = 0;
const char *str = va_arg(args, const char *);

if (*str)
{
    while (str[i] != '\0')
    {
        totalchar +=_putchar(str[i]);
        i++;
    }
}
else
{
    while (error[i] != '\0')
    {
        totalchar +=_putchar(error[i]);
        j++;
        i++;
    }
}
			}
			else if (*format == '%')
			{
				_putchar('%');
				totalchar++;
			}
		}
	}
	va_end(args);
	return (totalchar);
}
