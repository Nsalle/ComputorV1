/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   second_degree.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rcodazzi <rcodazzi@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2021/01/15 15:14:09 by rcodazzi     #+#   ##    ##    #+#       */
/*   Updated: 2021/01/20 13:57:01 by rcodazzi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "../includes/computor.h"


float absolute(float num)
{
    if(num < 0){
        num = -num;
    }
    return num;
}

float ft_sqrt(float x)
{
    const float difference = 0.00001;
    float guess = 1.0;
    while(absolute(guess * guess - x) >= difference){
        guess = (x/guess + guess)/2.0;
    }
    return guess;
}

void    solversecondegree(t_expr *m)
{
    m->discriminant = (m->degree1 * m->degree1) - 
        4*m->degree2*m->degree0;
    if(m->discriminant == 0)
        ft_isnul(m);
    else if(m->discriminant > 0 )
        ft_ispositive(m);
    else if (m->discriminant < 0)
    {
        m->discriminant *= -1;
        ft_isnegative(m);
    }
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

    res1 = (-m->degree1 - ft_sqrt(m->discriminant)) / (2* m->degree2);
    res2 = (-m->degree1 + ft_sqrt(m->discriminant)) / (2* m->degree2);

    ft_printf("Discriminant is strictly positive, the two solutions are: \n%f\n%f" , res1,res2);
}

void ft_isnegative(t_expr *m)
{
    float delta;

    delta = ft_sqrt(m->discriminant);

    ft_printf("Discriminant is strictly positive, the two solutions are: \n ");
    ft_printf("-%f - %fi \n-%f + %fi \n", m->degree1, m->degree2, m->degree1, m->degree2);
    
}
