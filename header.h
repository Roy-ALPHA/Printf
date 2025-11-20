#ifndef HEADER_H
# define HEADER_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
int		ft_printf(const char *, ...);
void	write_char(int c, int *len);
void	ft_putnbr(int n, int *len);
void	write_str(const char *s, int *len);
void	ft_putnbr_unsigned(unsigned int num, int *len);
void	printhex(va_list arg, int *len);
void	print_x(va_list arg, int *len);
void	print_X(va_list arg, int *len);

#endif