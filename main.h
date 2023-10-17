#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _print_char(char c);
int _print_string(const char *s);
int _print_unsigned(unsigned int n, int base, int uppercase);
int _print_number(int n);

int _printf(const char *format, ...);
#endif
