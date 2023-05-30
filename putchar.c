#include "main.h"
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
