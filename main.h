#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

/* Function Prototypes */
int _putchar(char c);
int stringprint(va_list args);
void set_int(int a, int *i);
int printid(va_list args);
int _printf(const char *format, ...);
int CasesFunction(va_list arg, char specifier );

#endif
