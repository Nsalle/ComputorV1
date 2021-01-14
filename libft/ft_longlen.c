/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneyer <faneyer@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:06:48 by jde-la-m          #+#    #+#             */
/*   Updated: 2020/02/28 09:53:59 by faneyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_longlen(long n)
{
	size_t	len;

	len = (n < 0) ? 2 : 1;
	while (n /= 10)
		len++;
	return (len);
}
