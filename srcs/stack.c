/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:26:31 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/09 15:27:00 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	b->max = 0;
	b->median = 0;
	b->min = 0;
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

bool	is_r_sorted(t_stack **b)
{
	int	i;

	i = -1;
	while (++i < (*b)->size - 1)
	{
		if (!((*b)->stack[i] < (*b)->stack[i + 1]))
			return (false);
	}
	return (true);
}

void	update_median(t_stack **stack)
{
	int *sorted;
	int mid;

	sorted = malloc((*stack)->size * sizeof(int));
	if (sorted == NULL)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	ft_memcpy(sorted, (*stack)->stack, (*stack)->size * sizeof(int));

	ft_quick_sort(sorted, 0, (*stack)->size - 1);
	mid = (*stack)->size / 2;
	if ((*stack)->size % 2 == 0)
		(*stack)->median = (sorted[mid - 1] + sorted[mid]) / 2;
	else
		(*stack)->median = sorted[mid];

	free(sorted);
}
