/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:11:07 by yoelboud          #+#    #+#             */
/*   Updated: 2025/11/19 18:29:12 by yoelboud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	count_digit(unsigned long addr)
{
	int	count;

	count = 0;
	if (!addr)
		count += 1;
	while (addr)
	{
		addr /= 16;
		count += 1;
	}
	return (count);
}

static void	fill_str(char *str, int count, unsigned long addr)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	while (count)
	{
		str[--count] = hex[addr % 16];
		addr /= 16;
	}
}

void	print_X(va_list arg, int *len)
{
	int				count;
	unsigned long	addr;
	char			*str;

	addr = va_arg(arg, unsigned int);
	count = count_digit(addr);
	str = malloc(count + 1);
	if (!str)
		return ;
	str[count] = '\0';
	if (!addr)
		str[0] = '0';
	else
		fill_str(str, count, addr);
	write_str(str, len);
	free(str);
}
