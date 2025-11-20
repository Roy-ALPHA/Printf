/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:48:03 by yoelboud          #+#    #+#             */
/*   Updated: 2025/11/19 19:03:08 by yoelboud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	help_func(char c, int *len, va_list arg)
{
	if (c == '%')
		write_char('%', len);
	else if (c == 's')
		write_str(va_arg(arg, char *), len);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(arg, int), len);
	else if (c == 'c')
		write_char(va_arg(arg, int), len);
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int), len);
	else if (c == 'p')
		printhex(arg, len);
	else if (c == 'x')
		print_x(arg, len);
	else if (c == 'X')
		print_X(arg, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;

	int i, (count), (*len);
	count = 0;
	len = &count;
	i = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			help_func(format[i], len, arg);
		}
		else
			write_char(format[i], len);
		if (*len == -1)
			return (-1);
		i++;
	}
	va_end(arg);
	return (count);
}
