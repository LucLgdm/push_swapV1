/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_way.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:43:09 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/05 10:48:10 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

extern int compteur;

void	my_way(t_stack **a, t_stack **b)
{
	while ((*a)->size != 2)
	{
        update_median(b);
		pb(b, a);
		compteur++;
		if ((*b)->size > 1)
            sort_b(b);
	// 	{
	// 		for (int j = (*b)->size - 1; j > -1; j--) ft_printf("b[%i] = %i\n", j, (*b)->stack[j]);
	// 		rb(b);
	// 		for (int j = (*b)->size - 1; j > -1; j--) ft_printf("b[%i] = %i\n", j, (*b)->stack[j]);
	// 		rrb(b);
	// 		for (int j = (*b)->size - 1; j > -1; j--) ft_printf("b[%i] = %i\n", j, (*b)->stack[j]);
	// }
	}
    if(!is_sorted(a))
	    sort_two(a);
	while ((*b)->size != 0)
	{
		while ((*a)->stack[0] < (*a)->stack[(*a)->size - 1] && (*a)->stack[0] > (*b)->stack[(*b)->size - 1])
			{rra(a); compteur++;}
		pa(a, b);
		compteur++;
	}
}

void	sort_b(t_stack **b)
{
	while (!is_r_sorted(b))
	{
		update_median(b);
		if ((*b)->size == 2)
		{
            sb(b);
			compteur++;
            break ;
        }
		(*b)->min = ft_min(b);
		if ((*b)->stack[(*b)->size - 1] == (*b)->min)
			{rb(b); compteur++;}
		else if ((*b)->stack[(*b)->size - 1] > (*b)->median)
		{
			while ((*b)->stack[(*b)->size - 1] < (*b)->stack[(*b)->size - 2])
			{
				sb(b);
				rb(b);
				compteur += 2;
			}
			while ((*b)->stack[(*b)->size - 1] != (*b)->min)
			{
				rrb(b);
				compteur++;
			}
		}
		else
		{
			while ((*b)->stack[(*b)->size - 1] > (*b)->stack[0])
			{
				rrb(b);
				sb(b);
				compteur += 2;
			}
			while ((*b)->stack[(*b)->size - 1] != (*b)->min)
			{
				rb(b); compteur++;
				// for (int j = (*b)->size - 1; j > -1; j--) ft_printf("b[%i] = %i\n", j, (*b)->stack[j]);
			}
		}
	}
}
