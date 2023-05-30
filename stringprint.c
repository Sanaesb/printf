#include "main.h"

/**
 * stringprint - manage the 's' case
 *
 * @args: The first argument
 * Return: integer
 */
int stringprint(va_list args)
{
	char *str = va_arg(args, char *);
	int c = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		c++;
	}
	return (c);
}
