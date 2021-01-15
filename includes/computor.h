/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcodazzi <rcodazzi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:39:36 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/15 15:25:24 by rcodazzi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTOR_H
# define COMPUTOR_H

# include "../libft/libft.h"

typedef struct		s_expr
{
    char *expr;
    float degree1;
    float degree2;
    float degree3;
    float degree0;
    float discriminant;
}					t_expr;

typedef struct		s_maths
{
    t_expr  *left_exp;
    t_expr	*right_exp;
    float	degree;
}					t_maths;

void    split_expressions(t_maths *master, char *argv);
void	scanstr(char *argv);

#endif