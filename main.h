#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(int c);
int _puts(char *s);


int print_char(va_list *ag);
int print_string(va_list *ag);
int print_percent();

/* _printf prototype */
int _printf(const char *format, ...);

#endif
