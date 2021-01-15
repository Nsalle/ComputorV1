/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_degree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcodazzi <rcodazzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 12:38:00 by rcodazzi          #+#    #+#             */
/*   Updated: 2021/01/15 13:13:08 by rcodazzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/computor.h"

void	solverfirstdegree(t_expr *expr)
{
	float res;

	if (expr->degree1 == 0)
	{
        // ft_printf(" a = %f\n b = %f\n",expr->degree1,expr->degree0);

		if (expr->degree0 != 0)
			ft_putendl("There is no solution");
		else
			ft_putendl("There is an infinite number of solutions");

	}
	else if (expr->degree0 == 0){
            // ft_printf(" a = %f\n b = %f\n",expr->degree1,expr->degree0);
		if(expr->degree1 != 0)
			ft_putendl("The solution is: 0 ");
		else
			ft_putendl("There is an infinite number of solutions");
	}
	else 
	{
        // ft_printf(" a = %f\n b = %f\n",expr->degree1,expr->degree0);
		res = -expr->degree0/expr->degree1;
		ft_printf("The solution is: %f\n", res);
	}
}