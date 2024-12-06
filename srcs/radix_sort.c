/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:54:25 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/06 17:18:12 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_bits(int max)
{
	int	bits;

	bits = 0;
	while (max > 0)
	{
		bits++;
		max = max >> 1;
	}
	return (bits);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	maxbits;
	int	i;
	int	j;
    int size;
    t_stack **aa, **bb;
    
    aa = (t_stack **)malloc(sizeof(t_stack *));
    bb = (t_stack **)malloc(sizeof(t_stack *));
    (*aa)->stack = ft_quick_sort((*a)->stack, 0, (*a)->size);
    (*aa)->size = (*a)->size;
    (*aa)->max = ft_max(aa);
    (*bb) = init_b();
	i = -1;
    size = (*aa)->size;
    (*aa)->max = ft_max(aa);
	maxbits = get_max_bits((*aa)->max);
    ft_printf("maxbits = %i\nmax de aa = %i\n", maxbits, (*aa)->max);
	while (++i < maxbits)
	{
        ft_printf("i = %i\n", i);
		j = -1;
		while (++j < size)
		{
			if ((((*aa)->stack[(*aa)->size - 1] >> i)&1) == 0)
				pb(bb, aa);
			else
				ra(aa);
		}
        ft_printf("Retour dans a\n");
        while ((*bb)->size > 0)
            pa(aa, bb);
	}
}
