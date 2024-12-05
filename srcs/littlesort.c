/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   littlesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:00:43 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/05 10:48:16 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

extern int compteur;

void	sort_two(t_stack **a)
{
	if (!is_sorted(a))
		{sa(a); compteur++;}
}

void	sort_three(t_stack **a)
{
	while (!is_sorted(a))
	{
		if ((*a)->stack[2] > (*a)->stack[1] && (*a)->stack[2] > (*a)->stack[0])
			ra(a);
		else if ((*a)->stack[1] > (*a)->stack[0]
			&& (*a)->stack[1] > (*a)->stack[2])
			rra(a);
		else if ((*a)->stack[2] > (*a)->stack[1])
			sa(a);
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	index_min;

	if (is_sorted(a))
		return ;
	(*a)->min = ft_min(a);
	index_min = ft_index_min(a, (*a)->min);
	if (index_min <= (*a)->size / 2)
	{
		while ((*a)->min != (*a)->stack[(*a)->size - 1])
			ra(a);
	}
	else
	{
		while ((*a)->min != (*a)->stack[(*a)->size - 1])
			rra(a);
	}
	if (is_sorted(a))
		return ;
	pb(b, a);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	index_min;

	if (is_sorted(a))
		return ;
	(*a)->min = ft_min(a);
	index_min = ft_index_min(a, (*a)->min);
	ft_printf("min = %i, index min = %i\n", (*a)->min, index_min);
	if (index_min <= (*a)->size / 2)
	{
		while ((*a)->min != (*a)->stack[(*a)->size - 1])
			ra(a);
	}
	else
	{
		while ((*a)->min != (*a)->stack[(*a)->size - 1])
			rra(a);
	}
	if (is_sorted(a))
		return ;
	pb(b, a);
	sort_four(a, b);
	pa(a, b);
}
