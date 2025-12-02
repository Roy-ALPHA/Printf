/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:27:17 by yoelboud          #+#    #+#             */
/*   Updated: 2025/12/02 13:28:00 by yoelboud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	write_char(int c, int *len);
void	ft_putnbr(int n, int *len);
void	write_str(const char *s, int *len);
void	ft_putnbr_unsigned(unsigned int num, int *len);
void	printhex(unsigned long addr, int *len, int bool);
void	print_x(va_list arg, int *len);
void	print_X(va_list arg, int *len);

#endif