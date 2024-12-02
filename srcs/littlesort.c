/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   littlesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:00:43 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 10:26:11 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Sort for a 2-3-4-5 stack element
#include "../includes/push_swap.h"

void	sort_two(t_stack **a)
{
	if (!is_sorted(a))
		sa(a);
}

void	sort_three(t_stack **a)
{
	while (!is_sorted(a))
	{
		if ((*a)->stack[2] > (*a)->stack[1] && (*a)->stack[2] > (*a)->stack[0])
			ra(a);
		else if ((*a)->stack[1] > (*a)->stack[0] && (*a)->stack[1] > (*a)->stack[2])
			rra(a);
		else if ((*a)->stack[2] > (*a)->stack[1])
			sa(a);
	}
}

void    sort_four( t_stack **a,  t_stack **b)
{
    while (!is_sorted(a))
    {
        pb(b, a);
        sort_three(a);
        pa(a, b);
        
    }
}