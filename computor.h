/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:39:36 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/14 14:31:13 by nsalle           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPUTOR_H
# define COMPUTOR_H

# include "./libft/libft.h"

typedef struct		s_maths
{
	char	**expr;
    char	**left_exp;
    char	**right_exp;
    int		degree;
}					t_maths;

char	**split_expressions(char *argv);
void	scanstr(char *argv);

#endif