/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:31:32 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/15 15:33:28 by nsalle           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/computor.h"

void	usage(void)
{
	ft_putendl("Wrong usage of computor");
	ft_putendl("Usage: ./computor \"equation\"");
	exit (0);
}

void	check_degree(t_maths *master)
{
	
}

int		main(int argc, char **argv)
{
	t_maths master;

	if (argc != 2)
		usage();
	master.left_exp = malloc(sizeof(t_expr));
	master.right_exp = malloc(sizeof(t_expr));
	scanstr(argv[1]);
	split_expressions(&master, argv[1]);
	check_degree(&master);
	return (0);
}
