/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commande_p.c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:26:55 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 10:39:05 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    pa(t_stack **a, t_stack **b)
{
    int tmp;
    int *atmp;

    tmp = (*b)->stack[(*b)->size - 1];
    (*b)->size--;
    atmp = (int *)malloc((*a)->size * sizeof(int));
    if (atmp == NULL)
    {
        ft_pustr_fd("Error\n", 2);
        exit(1);
    }
    ft_memcpy(atmp, (*a)->stack, (*a)->size * sizeof(int));
    free((*a)->stack);
    (*a)->stack = atmp;
    (*a)->stack[(*a)->size - 1] = tmp;
    (*a)->size++;
    ft_putstr_fd("pa\n", 1);
}

void    pb(t_stack **b, t_stack **a)
{
    int tmp;
    int *btmp;

    tmp = (*a)->stack[(*a)->size - 1];
    (*a)->size--;
    btmp = (int *)malloc((*b)->size * sizeof(int));
    if (btmp == NULL)
    {
        ft_pustr_fd("Error\n", 2);
        exit(1);
    }
    ft_memcpy(btmp, (*b)->stack, (*b)->size * sizeof(int));
    free((*b)->stack);
    (*b)->stack = btmp;
    (*b)->stack[(*b)->size - 1] = tmp;
    (*b)->size++;
    ft_putstr_fd("pb\n", 1);
}
