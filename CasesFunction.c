#include <stdio.h>
#include <stdarg.h>

int CasesFunction(va_list arg, char specifier)
{
	int totalchar =0;
	int i;
	int digits;
	int divisor;

	if (specifier == 'c')
	{
	totalchar += putchar(va_arg(arg, int));
	}
	else if (specifier == 's')
	{
		char *str = va_arg(arg, char *);
		for ( i = 0; str[i] != '\0'; i++)
		{
			totalchar += putchar(str[i]);
		}
	}
	else if (specifier == '%')
	{
		totalchar += putchar('%');
	}
	else if (specifier == 'i' || specifier == 'd')
	{
		int value = va_arg(arg, int);
		int temp = value;
		digits = 0;
		if (temp == 0)
		{
			digits++;
			totalchar += putchar('0');
		}
		else if (temp < 0)
		{
			totalchar += putchar('-');
			temp = -temp;
		}
		while (temp > 0)
		{
			digits++;
			temp /= 10;
		}
		temp = value;
		divisor = 1;
		while (digits > 1)
		{
			divisor *= 10;
			digits--;
		}
		while (divisor > 0)
		{
			int digit = temp / divisor;
			totalchar += putchar('0' + digit);
			temp %= divisor;
			divisor /= 10;
		}
	}
	else if (specifier == 'b')
	{
		unsigned int value = va_arg(arg, unsigned int);
		for ( i = 31; i >= 0; i--)
		{
			int bit = (value >> i) & 1;
			totalchar += putchar('0' + bit);
		}
	}
	else
	{
		totalchar += putchar('%');
		totalchar += putchar(specifier);
	}
	return(totalchar);
}
