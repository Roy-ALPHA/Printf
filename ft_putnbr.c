/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:15:13 by yoelboud          #+#    #+#             */
/*   Updated: 2025/11/19 18:27:19 by yoelboud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
