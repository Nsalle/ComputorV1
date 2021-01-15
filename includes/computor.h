/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:39:36 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/15 12:27:33 by nsalle           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTOR_H
# define COMPUTOR_H

# include "../libft/libft.h"

typedef struct		s_expr
{
    char *expr;
    int degree1;
    int degree2;
    int degree3;
    int degree0;
    int discriminant;
}					t_expr;

typedef struct		s_maths
{
    t_expr  *left_exp;
    t_expr	*right_exp;
    int		degree;
}					t_maths;

void    split_expressions(t_maths *master, char *argv);
void	scanstr(char *argv);

#endif