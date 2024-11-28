/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:28:53 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/28 15:57:41 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = parse(argc, argv);
	b = parse(argc, argv);
	ft_printf("a->size = %i\n", a->size);
	for (int i = 0; i < a->size; i++) ft_printf("%i\n", a->stack[i]);
	ft_free_stack(a, b);
	return (0);
}
