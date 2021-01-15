/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:31:32 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/15 12:05:10 by nsalle           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/computor.h"

void	usage()
{
	
}

int		main(int argc, char **argv)
{
	t_maths master;

	master.left_exp = malloc(sizeof(t_expr));
	master.right_exp = malloc(sizeof(t_expr));
	if (argc != 2)
		usage();
	scanstr(argv[1]);
	split_expressions(&master, argv[1]);
	return (0);
}
