/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:40:38 by yoelboud          #+#    #+#             */
/*   Updated: 2025/11/19 16:55:11 by yoelboud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

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
