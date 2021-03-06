/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneyer <faneyer@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:13:31 by jde-la-m          #+#    #+#             */
/*   Updated: 2020/02/28 10:00:29 by faneyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	Allocates (with malloc(3)) and returns a “fresh” string ending
**	with ’\0’. Each character of the string is initialized at
**	’\0’. If the allocation fails the function returns NULL.
**
**		RETURN VALUE
**	The string allocated and initialized to 0.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if (!(str = malloc(sizeof(*str) * size + 1)))
		return (NULL);
	ft_memset(str, 0, size + 1);
	return (str);
}
