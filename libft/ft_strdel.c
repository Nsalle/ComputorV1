/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneyer <faneyer@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 01:14:00 by jde-la-m          #+#    #+#             */
/*   Updated: 2020/02/28 09:59:09 by faneyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	Takes as a parameter the address of a string that need to be
**	freed with free(3), then sets its pointer to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}
