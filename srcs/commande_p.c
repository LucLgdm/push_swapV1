/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:26:55 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/09 15:22:51 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	if ((*b)->size > 0)
	{
		(*a)->size++;
		(*a)->stack[(*a)->size - 1] = (*b)->stack[(*b)->size - 1];
		(*b)->stack[(*b)->size - 1] = 0;
		(*b)->size--;
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_stack **b, t_stack **a)
{
	if ((*a)->size > 0)
	{
		(*b)->size++;
		(*b)->stack[(*b)->size - 1] = (*a)->stack[(*a)->size - 1];
		(*a)->stack[(*a)->size - 1] = 0;
		(*a)->size--;
		ft_putstr_fd("pb\n", 1);
	}
}
void	pa_chut(t_stack **a, t_stack **b)
{
	if ((*b)->size > 0)
	{
		(*a)->size++;
		(*a)->stack[(*a)->size - 1] = (*b)->stack[(*b)->size - 1];
		(*b)->stack[(*b)->size - 1] = 0;
		(*b)->size--;
	}
}

void	pb_chut(t_stack **b, t_stack **a)
{
	if ((*a)->size > 0)
	{
		(*b)->size++;
		(*b)->stack[(*b)->size - 1] = (*a)->stack[(*a)->size - 1];
		(*a)->stack[(*a)->size - 1] = 0;
		(*a)->size--;
	}
}
