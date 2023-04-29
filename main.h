#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_string(char *str);
int length(int n);
int print_number(int n);
int _putchar(char c);

#endif
