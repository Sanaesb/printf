#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
/* Function Prototypes */
int _putchar(char c);
int stringprint(va_list args);
int _printf(const char *format, ...);
int CasesFunction(va_list arg, char specifier );
#endif
