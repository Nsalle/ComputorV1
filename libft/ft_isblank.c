/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneyer <faneyer@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 13:56:35 by jde-la-m          #+#    #+#             */
/*   Updated: 2020/02/28 09:52:37 by faneyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The isblank() function tests for a space or tab character.  For any
**	locale, this includes the following standard characters:
**
**	`\t`      ` `
**
**	In the "C" locale, a successful isblank() test is limited to these
**	characters only.  The value of the argument must be representable as an
**	unsigned char or the value of EOF.
**
**		RETURN VALUE
**	The isblank() function returns zero if the character tests false and
**	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isblank(int c)
{
	return (c == '\t' || c == ' ');
}
