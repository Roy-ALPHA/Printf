/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelboud <yoelboud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 10:38:52 by yoelboud          #+#    #+#             */
/*   Updated: 2025/11/19 18:22:13 by yoelboud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
void write_char(int c, int *len)
{
    ssize_t test;
    test = 0;
    if (*len == -1)
        return ;
    test = write (1, &c, 1);
    if (test == -1)
    {
        *len = -1;
        return ;
    }
    *len += test; 
}
