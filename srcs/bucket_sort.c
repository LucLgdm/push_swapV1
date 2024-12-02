/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bucket_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:01:21 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 17:11:40 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    bucket_sort(t_stack **a, t_stack **b)
{
    int *sorted;
    int nbucket;
    int i;
    int j;

    sorted = quick_sort(a, 0, (*a)->size - 1);
    if ((*a)->size < 50)
        nbucket = 4;
    else
        nbucket = 8;
    i = -1;
    j = 0;
    while (++i < (*a)->size)
    {
        if (is_in_bucket((*a)->stack[0], sorted, nbucket))
        {
            pb(b, a);
            j++;
        }
        else
            ra(a);
        if (j == (*a)->size / nbucket)
            break;
    }
    free(sorted);
}
