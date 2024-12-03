/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_way.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:43:09 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/03 17:40:14 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	my_way(t_stack **a, t_stack **b)
{
	while ((*a)->size != 3)
	{
        update_median(b);
		pb(b, a);
		if ((*b)->size > 1)
		{
            for (int j = (*b)->size - 1; j > -1; j--) ft_printf("b[%i] = %i\n", j, (*b)->stack[j]);
            sort_b(b);
        }
	}
    if(!is_sorted(a))
	    sort_three(a);
	while ((*b)->size != 0)
		pa(b, a);
}
void	sort_b(t_stack **b)
{
	while (!is_r_sorted(b))
	{
		if ((*b)->size == 2)
		{
            sb(b);
            break ;
        }
		update_median(b);
		if ((*b)->stack[(*b)->size - 1] <= (*b)->median)
		{
            rrb(b);
            sb(b);
            rb(b);
            rb(b);
            for (int j = (*b)->size - 1; j > -1; j--) ft_printf("b[%i] = %i\n", j, (*b)->stack[j]);
        }
		else
		{
            sb(b);
            rb(b);
            // if ((*b)->stack[(*b)->size - 1] > (*b)->stack[(*b)->size - 2])
            //     sb(b);
			// else
            //     rrb(b);
            for (int j = (*b)->size - 1; j > -1; j--) ft_printf("b[%i] = %i\n", j, (*b)->stack[j]);
		}
	}
}
