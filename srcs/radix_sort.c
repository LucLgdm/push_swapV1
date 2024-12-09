/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:54:25 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/09 15:26:23 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

extern int compteur;

int	get_max_bits(int size)
{
	int	bits;

	bits = 0;
	while ((1 << bits) < size)
		bits++;
	return (bits);
}

void	initialise_stack(t_stack **a)
{
	if (!a || !(*a))
	{
		fprintf(stderr, "Error: Invalid pointer in initialise_stack\n");
		return ;
	}
	if (!(*a)->stack)
		(*a)->stack = NULL;
	(*a)->max = 0;
	(*a)->median = 0;
	(*a)->min = 0;
	(*a)->size = 0;
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int		maxbits;
	int		*a_sorted;
	t_stack	**a_index;
	t_stack	**b_index;
	int		i;
	int		j;
	int		taille;

	// Prepare le terrain
	a_sorted = (int *)malloc((*a)->size * sizeof(int));
	if (!a_sorted)
		exit(1);
	a_index = malloc(sizeof(t_stack *));
	*a_index = malloc(sizeof(t_stack));
	(*a_index)->stack = malloc((*a)->size * sizeof(int));
	initialise_stack(a_index);
	(*a_index)->size = (*a)->size;
	b_index = malloc(sizeof(t_stack *));
	(*b_index) = malloc(sizeof(t_stack));
	(*b_index)->stack = malloc((*a)->size * sizeof(int));
	if (!b_index)
		exit(1);
	initialise_stack(b_index);
	i = -1;
	while (++i < (*a)->size)
		a_sorted[i] = (*a)->stack[i];
	ft_quick_sort(a_sorted, 0, (*a)->size - 1);
	i = -1;
	while (++i < (*a)->size)
	{
		j = -1;
		while (++j < (*a)->size)
		{
			if (a_sorted[j] == (*a)->stack[i])
				(*a_index)->stack[i] = j;
		}
	}
	free(a_sorted);
	// On trie a_index; comme ca on n'a plus le probleme des nombres negatifs
	maxbits = get_max_bits((*a)->size);
	i = -1;
	taille = (*a_index)->size;
	while (++i < maxbits)
	{
		ft_printf("PASSAGE N %i\n", i);
		ft_printf("size = %i\n", (*a_index)->size);
		for(int k = 0; k < (*a_index)->size; k++)
			ft_printf("a[%i] = %i\n", k, (*a_index)->stack[k]);
		j = -1;
		while (++j < taille)
		{
			if ((((*a_index)->stack[(*a_index)->size - 1] >> i) & 1) == 0)
			{
				pb(b_index, a_index);
				pb_chut(b, a);
				compteur++;
			}
			else if (j != taille - 1)
			{
				ra(a_index);
				ra_chut(a);
				compteur++;
			}
		}
		while ((*b_index)->size != 0)
		{
			pa(a_index, b_index);
			pa_chut(a, b);
			compteur++;
		}
	}
}
