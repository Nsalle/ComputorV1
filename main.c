/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:31:32 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/14 14:35:01 by nsalle           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"



void	usage()
{
	
}

int		main(int argc, char **argv)
{
	t_maths master;
	
	if (argc != 2)
		usage();
	scanstr(argv[1]);
	master.expr = split_expressions(argv[1]);
	split_degree(&master);
	return (0);
}
