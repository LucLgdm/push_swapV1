/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_r.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:22:58 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 10:52:29 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **a)
{
	int	*tmp;
	int	i;

	i = -1;
	tmp = (int *)malloc((*a)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[0] = (*a)->stack[(*a)->size - 1];
	while (++i < (*a)->size - 1)
		tmp[i + 1] = (*a)->stack[i];
	i = -1;
	while (++i < (*a)->size)
		(*a)->stack[i] = tmp[i];
	free(tmp);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **b)
{
	int	*tmp;
	int	i;

	i = -1;
	tmp = (int *)malloc((*b)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[0] = (*b)->stack[(*b)->size - 1];
	while (++i < (*b)->size - 1)
		tmp[i + 1] = (*b)->stack[i];
	i = -1;
	while (++i < (*b)->size)
		(*b)->stack[i] = tmp[i];
	free(tmp);
	ft_putstr_fd("rb\n", 1);
}

void	ra_chut(t_stack **a)
{
	int	*tmp;
	int	i;

	i = -1;
	tmp = (int *)malloc((*a)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[0] = (*a)->stack[(*a)->size - 1];
	while (++i < (*a)->size - 1)
		tmp[i + 1] = (*a)->stack[i];
	i = -1;
	while (++i < (*a)->size)
		(*a)->stack[i] = tmp[i];
	free(tmp);
}

void	rb_chut(t_stack **b)
{
	int	*tmp;
	int	i;

	i = -1;
	tmp = (int *)malloc((*b)->size * sizeof(int));
	if (!tmp)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	tmp[0] = (*b)->stack[(*b)->size - 1];
	while (++i < (*b)->size - 1)
		tmp[i + 1] = (*b)->stack[i];
	i = -1;
	while (++i < (*b)->size)
		(*b)->stack[i] = tmp[i];
	free(tmp);
}

void	rr(t_stack **a, t_stack **b)
{
	ra_chut(a);
	rb_chut(b);
	ft_putstr_fd("rr\n", 1);
}
