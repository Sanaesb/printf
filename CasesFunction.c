#include <stdio.h>
#include <stdarg.h>

void CasesFunction(va_list arg, char specifier, int *totalchar)
{
	if (specifier == 'c')
	{
		(*totalchar) += putchar(va_arg(arg, int));
	}
	else if (specifier == 's')
	{
		(*totalchar) += puts(va_arg(arg, char *));
	}
	else if (specifier == '%')
	{
		(*totalchar) += putchar('%');
	}
	else
	{
		putchar('%');
		putchar(specifier);
		(*totalchar) += 2;
	}
}
