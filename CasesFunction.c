#include "main.h"
/**
 * CasesFunction - manage the 's' case
 *
 * @args: The first argument
 * @specifier : format specifier
 * Return: integer
 */

int CasesFunction(va_list args, char specifier)
{
	int  i = 0;

	if (specifier == 'c')
	{
		i += _putchar(va_arg(args, int));
	}
	else if (specifier == 's')
	{
		i += stringprint(args);
	}
	else if (specifier == '%')
	{
		i += _putchar('%');
	}
	/*
	*else if ( (specifier == 'i')||(specifier == 'd'))
	*{
	*	i += printid(va_list args);
	*}
	*/
	else
	{
		i += _putchar('%');
		i += _putchar(specifier);
	}
	return (i);
}

