/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneyer <faneyer@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:12:32 by jde-la-m          #+#    #+#             */
/*   Updated: 2020/02/28 09:59:19 by faneyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	Lexicographical comparison between s1 and s2. If the 2
**	strings are identical the function returns 1, or 0 otherwise.
**
**		RETURN VALUE
**	1 or 0 according to if the 2 strings are identical or not.
*/

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		if (!ft_strcmp(s1, s2))
			return (1);
	return (0);
}
