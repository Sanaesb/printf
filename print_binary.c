#include "main.h"

/**
 * print_binary - converts an unsigned integer to binary
 * @a: the unsigned integer
 * Return: pointer to binary
 */
 
char *print_binary(unsigned int a)
{
	char *binary = "\0";

	if (a == 0)
		_putchar('0');

	while (a > 0)
	{
		unsigned int bit = (a % 2);

		binary = (bit == 0 ? '0' : '1') + binary;

		a = (a / 2);	
	}
	
	_putchar(*binary);
	
	return (binary);
}
