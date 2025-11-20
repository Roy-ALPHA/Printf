/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yousenna <yousenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:13:36 by yoelboud          #+#    #+#             */
/*   Updated: 2025/11/20 18:26:11 by yousenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr_unsigned(unsigned int num, int *len)
{
	if (num > 9)
		ft_putnbr_unsigned(num / 10, len);
	write_char(num % 10 + '0', len);
}
