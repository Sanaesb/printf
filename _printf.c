#include "main.h"
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
	if (format == NULL )
	{
		return (-1);
	}
	
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			totalchar += CasesFunction(arg, *format);
		}
		else
		{
			_putchar(*format);
			totalchar++;
		}
		format++;
	}
	va_end(arg);
	return (totalchar);
}

