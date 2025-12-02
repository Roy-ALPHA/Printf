/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:38:52 by yoelboud          #+#    #+#             */
/*   Updated: 2025/12/02 13:14:43 by yoelboud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	write_char(int c, int *len)
{
	ssize_t	test;

	test = 0;
	if (*len == -1)
		return ;
	test = write(1, &c, 1);
	if (test == -1)
	{
		*len = -1;
		return ;
	}
	*len += test;
}

void	write_str(const char *s, int *len)
{
	ssize_t	i;

	i = 0;
	if (!s)
	{
		write_str("(null)", len);
		return ;
	}
	while (s[i])
		write_char(s[i++], len);
}

void	ft_putnbr_unsigned(unsigned int num, int *len)
{
	if (num > 9)
		ft_putnbr_unsigned(num / 10, len);
	write_char(num % 10 + '0', len);
}

void	ft_putnbr(int n, int *len)
{
	if (n == INT_MIN)
	{
		*len += write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write_char('-', len);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10, len);
	write_char(n % 10 + '0', len);
}
