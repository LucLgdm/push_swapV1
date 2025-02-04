/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:28:53 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/09 14:50:06 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int compteur = 0;

extern int compteur;

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;


	a = parse(argc, argv);
	b = init_b();
	ft_printf("After sort\n");
		for (int j = a->size - 1; j > -1; j--) ft_printf("a[%i] = %i\n", j, a->stack[j]);
	if (a->size == 1)
		return (0);
	else if (a->size == 2)
		sort_two(&a);
	else if (a->size == 3)
		sort_three(&a);
	else if (a->size == 4)
		sort_four(&a, &b);
	else if (a->size == 5)
		sort_five(&a, &b);
	else
		radix_sort(&a, &b);
	ft_printf("After sort\n");
		for (int j = a->size - 1; j > -1; j--) ft_printf("a[%i] = %i\n", j, a->stack[j]);
	ft_free_stack(a, b);
	ft_printf("Nombre d'operation : %i\n", compteur);
	return (0);
}
