/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_degree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcodazzi <rcodazzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:14:09 by rcodazzi          #+#    #+#             */
/*   Updated: 2021/01/15 15:37:24 by rcodazzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/computor.h"

void    solversecondegree(t_expr *m)
{
    m->discriminant = (m->degree1 * m->degree1) - 
        4*m->degree2*m->degree0;
    if(m->discriminant == 0)
        ft_isnul(m);
    if(m->discriminant > 0 )
        ft_ispositive(m);
    // ft_isnegative;
}


void    ft_isnul(t_expr *m)
{
    float res;

    res = -m->degree1 / (2* m->degree2);
    ft_printf("The solution is:\n%f" , res);
}

void ft_ispositive(t_expr *m)
{
    float res1;
    float res2;

    res1 = (-m->degree1 - m->discriminant) / (2* m ->degree2);

    ft_printf("Discriminant is strictly positive, the two solutions are: \n%f\n%f" , res1,res2);
}