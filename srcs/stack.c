/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:26:31 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 15:03:40 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
		if((*a)->stack[i] == min)
			break ;
	}
	return (i);
}

void	ft_free_stack(t_stack *a, t_stack *b)
{
	if (a->stack)
	{
		free(a->stack);
		a->stack = NULL;
	}
	if (b->stack)
	{
		free(b->stack);
		b->stack = NULL;
	}
	free(a);
	free(b);
}

t_stack	*init_b(void)
{
	t_stack	*b;

	b = (t_stack *)malloc(sizeof(t_stack));
	if (!b)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	b->size = 0;
	b->stack = (int *)malloc((b->size + 1) * sizeof(int));
	if (!b->stack)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	return (b);
}

bool	is_sorted(t_stack **a)
{
	int	i;

	i = -1;
	while (++i < (*a)->size - 1)
	{
		if (!((*a)->stack[i] > (*a)->stack[i + 1]))
			return (false);
	}
	return (true);
}
