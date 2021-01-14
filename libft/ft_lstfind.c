/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneyer <faneyer@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:35:02 by jde-la-m          #+#    #+#             */
/*   Updated: 2020/02/28 09:54:56 by faneyer          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**		DESCRIPTION
**	The function ft_lstfind returns the address of the first link of which the
**	data is equal to the reference data.
*/

#include "libft.h"

t_list	*ft_lstfind(t_list *begin_list, void *content_ref, int (*cmp)())
{
	if (!begin_list)
		return (NULL);
	if ((*cmp)(begin_list->content, content_ref) == 0)
		return (begin_list);
	else if (begin_list->next)
		return (ft_lstfind(begin_list->next, content_ref, cmp));
	else
		return (NULL);
}
