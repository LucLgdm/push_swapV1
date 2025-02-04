/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:33:26 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 09:57:02 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **a)
{
	int	tmp;

	tmp = (*a)->stack[(*a)->size - 1];
	(*a)->stack[(*a)->size - 1] = (*a)->stack[(*a)->size - 2];
	(*a)->stack[(*a)->size - 2] = tmp;
	ft_putstr_fd("sa\n", 2);
}

void	sb(t_stack **b)
{
	int	tmp;

	tmp = (*b)->stack[(*b)->size - 1];
	(*b)->stack[(*b)->size - 1] = (*b)->stack[(*b)->size - 2];
	(*b)->stack[(*b)->size - 2] = tmp;
	ft_putstr_fd("sb\n", 2);
}

void	sa_chut(t_stack **a)
{
	int	tmp;

	tmp = (*a)->stack[(*a)->size - 1];
	(*a)->stack[(*a)->size - 1] = (*a)->stack[(*a)->size - 2];
	(*a)->stack[(*a)->size - 2] = tmp;
}

void	sb_chut(t_stack **b)
{
	int	tmp;

	tmp = (*b)->stack[(*b)->size - 1];
	(*b)->stack[(*b)->size - 1] = (*b)->stack[(*b)->size - 2];
	(*b)->stack[(*b)->size - 2] = tmp;
}

void	ss(t_stack **a, t_stack **b)
{
	sa_chut(a);
	sb_chut(b);
	ft_putstr_fd("ss\n", 2);
}
