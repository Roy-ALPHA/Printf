#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
int ft_printf(const char *, ...);
void write_char(int c, int *len);
void ft_putnbr(int n, int *len);
void write_str(const char *s, int *len);
void ft_putnbr_unsigned(unsigned int num, int *len);
void printhex(va_list arg, int *len);
void print_x(va_list arg, int *len);
void print_X(va_list arg, int *len);

#endif