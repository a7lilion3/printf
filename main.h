#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(int c);
int _puts(char *s);

void switcher(char c, int *len, va_list *ag, int *i, int spaces);

int print_char(va_list *ag, int *i);
int print_string(va_list *ag, int *i);
int print_percent(int *i);

/* _printf prototype */
int _printf(const char *format, ...);

#endif
