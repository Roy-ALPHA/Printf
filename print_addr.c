/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:22:21 by yoelboud          #+#    #+#             */
/*   Updated: 2025/12/05 15:51:12 by yoelboud         ###   ########.fr       */
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

static void	fill_str(char *str, int count, unsigned long addr, int bool)
{
	char	*hex;

	if (bool == 1 || bool == 0)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	while (count)
	{
		str[--count] = hex[addr % 16];
		addr /= 16;
	}
}

void	printhex(unsigned long addr, int *len, int bool)
{
	int		count;
	char	*str;

	if (!addr && bool == 1)
	{
		write_str("(nil)", len);
		return ;
	}
	count = count_digit(addr);
	str = malloc(count + 1);
	if (!str)
		return ;
	if (bool == 1)
		*len += write(1, "0x", 2);
	str[count] = '\0';
	if (!addr)
		str[0] = '0';
	else
		fill_str(str, count, addr, bool);
	write_str(str, len);
	free(str);
}
