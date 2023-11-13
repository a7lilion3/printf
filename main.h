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
int print_number(va_list *ag, int *i, int spaces);
int print_binary(va_list *ag, int *i);
int print_reverse(va_list *ag, int *i);
int print_percent(int *i);

void reverse(char *s);
int _strlen(char *s);
char *rot13(char *s);

/* _printf prototype */
int _printf(const char *format, ...);

#endif
