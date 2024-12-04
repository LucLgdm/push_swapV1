/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_way.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:43:09 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/04 15:56:30 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	my_way(t_stack **a, t_stack **b)
{
	while ((*a)->size != 2)
	{
        update_median(b);
		pb(b, a);
		if ((*b)->size > 1)
            sort_b(b);
	}
    if(!is_sorted(a))
	    sort_two(a);
	while ((*b)->size != 0)
	{
		while ((*a)->stack[0] < (*a)->stack[(*a)->size - 1] && (*a)->stack[0] > (*b)->stack[(*b)->size - 1])
			rra(a);
		pa(a, b);
	}
}

void	sort_b(t_stack **b)
{
	int	mid;
	int	mid2;

	mid = ((*b)->size - 1) / 2;
	mid2 = (*b)->stack[mid];
	while (!is_r_sorted(b))
	{
		update_median(b);
		if ((*b)->size == 2)
		{
            sb(b);
            break ;
        }
		(*b)->min = ft_min(b);
		if ((*b)->stack[(*b)->size - 1] == (*b)->min)
			rb(b);
		else if ((*b)->stack[(*b)->size - 1] > (*b)->median)
		{
			while ((*b)->stack[(*b)->size - 1] < (*b)->stack[(*b)->size - 2])
			{
				sb(b);
				rb(b);
			}
			while ((*b)->stack[mid] != mid2)
				rrb(b);
		}
		else
		{
			while ((*b)->stack[(*b)->size - 1] > (*b)->stack[0])
			{
				rrb(b);
				sb(b);
			}
			while ((*b)->stack[mid] != mid2)
				rb(b);
		}
	}
}
