/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:50:23 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/03 14:48:26 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_max(t_stack **a)
{
	int	max;
	int	i;

	i = -1;
	max = (*a)->stack[0];
	while (++i < (*a)->size)
	{
		if ((*a)->stack[i] > max)
			max = (*a)->stack[i];
	}
	return (max);
}

int	ft_min(t_stack **a)
{
	int	min;
	int	i;

	i = -1;
	min = (*a)->stack[0];
	while (++i < (*a)->size)
	{
		if ((*a)->stack[i] < min)
			min = (*a)->stack[i];
	}
	return (min);
}

int	ft_index_min(t_stack **a, int min)
{
	int	i;

	i = -1;
	while (++i < (*a)->size)
	{
		if ((*a)->stack[i] == min)
			break ;
	}
	return (i);
}
int	ft_index_max(t_stack **a, int max)
{
	int	i;

	i = -1;
	while (++i < (*a)->size)
	{
		if ((*a)->stack[i] == max)
			break ;
	}
	return (i);
}
