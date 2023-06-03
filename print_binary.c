#include "main.h"
#include <stdlib.h>

/**
 * print_binary - converts an integer to binary
 * @num: the integer to be converted
 * Return: binary on Success
 */

char *print_binary(unsigned int num)
{
	char *binary = malloc(sizeof(char) * (32 + 1));
        int count = 0; 
	
	if (num == 0)
	{
		_putchar('0');
		return (binary);
	}
	
	while (num > 0)
	{
		unsigned int bit = num % 2;
		binary[count++] = bit + '0';
		num = (num / 2);
	}
	
	return (binary);
}
