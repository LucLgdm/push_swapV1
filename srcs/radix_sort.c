/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:54:25 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/05 16:25:11 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int get_max_bits(int max)
{
    int bits = 0;
    while (max > 0)
    {
        bits++;
        max = max >> 1;
    }
    return (bits);
}

void    radix_sort(t_stack **a, t_stack **b)
{
    int maxbits;
    int i;
    int j;

    (*a)->max = ft_max(a);
    maxbits = get_max_bits((*a)->max);
    i = -1;
    while (++i < maxbits)
    {
        j = -1;
        while (++j < (*a)->size)
        {
            if ((((*a)->stack[(*a)->size - 1] >> i) & 1) == 1)
                ra(a);
            else
                pb(b, a);
        }
    }
    while ((*b)->size > 0)
        pa(a, b);
}
