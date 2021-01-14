/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsalle <nsalle@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:36:54 by nsalle            #+#    #+#             */
/*   Updated: 2021/01/14 15:09:48 by nsalle           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "computor.h"

void    scanstr(char *argv)
{
    if (ft_strlen(argv) != ft_strspn(argv, "0123456789+=-X*/^ "))
    {
        // ft_printf("len = %d\nspn = %d\n",ft_strlen(argv),ft_strspn(argv, "0123456789+=-X*/^ "));
        ft_putendl_fd("Expression is incorrect", 2);
        exit (0);
    }
}

char    **split_expressions(char *argv)
{
    char **expr;

    expr = malloc(sizeof(char*) * 2 );
    if (ft_nboccur(argv, '=') != 1)
    {
        ft_putendl_fd("Expression is incorrect", 2);
        exit (0);
    }
    expr[0] = ft_strndup(argv, ft_strcspn(argv, "="));
    expr[1] = ft_strdup(argv + ft_strcspn(argv, "=") + 1);

    ft_printf("Debut d'expr: %s\nFin d'expr:%s\n", expr[0], expr[1]);
    return (expr);
}

void    split_terms(t_maths *master)
{
    
}
