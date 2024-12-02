/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:26:55 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 14:32:54 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	(*a)->size++;
	(*a)->stack[(*a)->size - 1] = (*b)->stack[(*b)->size - 1];
	(*b)->size--;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **b, t_stack **a)
{
	(*b)->size++;
	(*b)->stack[(*b)->size - 1] = (*a)->stack[(*a)->size - 1];
	(*a)->size--;
	ft_putstr_fd("pb\n", 1);
}

// int	*atmp;
	// int	i;

	// atmp = (int *)malloc((*a)->size * sizeof(int));
	// if (atmp == NULL)
	// {
	// 	ft_putstr_fd("Error\n", 2);
	// 	exit(1);
	// }
	// i = -1;
	// while (++i < (*a)->size)
	// 	atmp[i] = (*a)->stack[i];
	// free((*a)->stack);
	// (*a)->size++;
	// (*a)->stack = (int *)malloc((*a)->size * sizeof(int));
	// if ((*a)->stack == NULL)
	// {
	// 	ft_putstr_fd("Error\n", 2);
	// 	exit(1);
	// // }
	// i = -1;
	// while (++i < (*a)->size - 1)
	// 	(*a)->stack[i] = atmp[i];
	// (*a)->stack[(*a)->size - 1] = (*b)->stack[(*b)->size - 1];
	// (*b)->size--;
	// free(atmp);