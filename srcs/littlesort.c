/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   littlesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:00:43 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/29 17:17:07 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Sort for a 2-3-4-5 stack element
#include "../includes/push_swap.h"

void	sort_two(t_stack **a)
{
	if (!is_sorted(a))
		sa(a);
}

void	sort_three(t_stack **a)
{
    int i = -1;
    while (!is_sorted(a) && ++i < 3)
    {
        if ((*a)->stack[2] > (*a)->stack[1] && (*a)->stack[2] > (*a)->stack[0])
            ra(a);
        else if ((*a)->stack[2] > (*a)->stack[1])
            sa(a);
        for (int j = 0; j < (*a)->size; j++) ft_printf("a[%i] = %i\n", j, (*a)->stack[j]);
    }
}
