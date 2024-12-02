/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:28:23 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 12:31:11 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **a)
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc((*a)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[(*a)->size - 1] = (*a)->stack[0];
	i = -1;
	while (++i < (*a)->size - 1)
		tmp[i] = (*a)->stack[i + 1];
	i = -1;
	while (++i < (*a)->size)
		(*a)->stack[i] = tmp[i];
	free(tmp);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack **b)
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc((*b)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[(*b)->size - 1] = (*b)->stack[0];
	i = -1;
	while (++i < (*b)->size - 1)
		tmp[i] = (*b)->stack[i + 1];
	i = -1;
	while (++i < (*b)->size - 1)
		(*b)->stack[i] = tmp[i];
	free(tmp);
	ft_putstr_fd("rrb\n", 1);
}

void	rra_chut(t_stack **a)
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc((*a)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[(*a)->size - 1] = (*a)->stack[0];
	i = -1;
	while (++i < (*a)->size - 1)
		tmp[i] = (*a)->stack[i + 1];
	i = -1;
	while (++i < (*a)->size)
		(*a)->stack[i] = tmp[i];
	free(tmp);
}

void	rrb_chut(t_stack **b)
{
	int	*tmp;
	int	i;

	tmp = (int *)malloc((*b)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[(*b)->size - 1] = (*b)->stack[0];
	i = -1;
	while (++i < (*b)->size - 1)
		tmp[i] = (*b)->stack[i + 1];
	i = -1;
	while (++i < (*b)->size - 1)
		(*b)->stack[i] = tmp[i];
	free(tmp);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra_chut(a);
	rrb_chut(b);
	ft_putstr_fd("rrr\n", 1);
}
