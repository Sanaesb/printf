#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int Count_of_printed ;
	int temp;
	int divisor ;

	va_list arguments;
	va_start(arguments, format);
	Count_of_printed = 0;
	
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'd' || *format == 'i')
			{
				int value = va_arg(arguments, int);
				int count = 0;

				if (value < 0)
			       {
					putchar('-');
					Count_of_printed++;
					value = -value;
					count++;
				}

				temp = value;

				do {
					temp /= 10;
					count++;
				} while (temp > 0);

				temp = value;
				divisor = 1;

				while (count > 1)
				{
					divisor *= 10;
					count--;
				}
				do {
					int digit = temp / divisor;
					putchar('0' + digit);
					Count_of_printed++;
					temp %= divisor;
					divisor /= 10;
				} while (divisor > 0);
			}

			format++;
		}
		else
		{
			putchar(*format);
			Count_of_printed++;
			format++;
		}
	}

	va_end(arguments);

	return (Count_of_printed);

}
