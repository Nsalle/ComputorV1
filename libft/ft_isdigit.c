/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneyer <faneyer@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 13:57:52 by jde-la-m          #+#    #+#             */
/*   Updated: 2020/02/28 09:52:49 by faneyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	Checks for a digit (0 through 9).
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}