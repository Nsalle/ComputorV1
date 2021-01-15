/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:36:54 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/15 12:31:21 by nsalle           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/computor.h"

void	scanstr(char *argv)
{
	if (ft_strlen(argv) != ft_strspn(argv, "0123456789+=-X*/^ "))
    {
		// ft_printf("len = %d\nspn = %d\n",ft_strlen(argv),ft_strspn(argv, "0123456789+=-X*/^ "));
		ft_putendl_fd("Expression is incorrect", 2);
		exit (0);
	}
}

void	split_expressions(t_maths *master, char *argv)
{
	if (ft_nboccur(argv, '=') != 1)
	{
		ft_putendl_fd("Expression is incorrect", 2);
		exit (0);
	}
	master->left_exp->expr = ft_strndup(argv, ft_strcspn(argv, "="));
	master->right_exp->expr = ft_strdup(argv + ft_strcspn(argv, "=") + 1);
	ft_printf("Debut d'expr: %s\nFin d'expr:%s\n", master->left_exp->expr, master->right_exp->expr);
}
