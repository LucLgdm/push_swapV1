/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:28:53 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/29 16:16:11 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = parse(argc, argv);
	b = init_b(&a);
	if (a->size == 1)
		return (0);
	else if (a->size == 2)
		sort_two(&a);
	else if (a->size == 3)
		sort_three(&a);
	// ft_printf("a->size = %i\n", a->size);
	// for (int i = 0; i < a->size; i++) ft_printf("a[%i] = %i\n", i, a->stack[i]);
	// ft_printf("b->size = %i\n", b->size);
	// for (int i = 0; i < b->size; i++) ft_printf("b[%i] = %i\n", i, 0);
	
	ft_free_stack(a, b);
	return (0);
}
