/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:28:53 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/27 16:23:36 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	
	a = parse(argc, argv);
	if (a->size == 1)
		return (0);
	else if (a->size == 2)
		sort_two(a);
	// else if (a->size == 3)
	// 	sort_three(a);
	// else if (a->size == 4)
	// 	sort_four(a);
	// else
	// 	sort_big(a);
	ft_printf("a->size = %i\n", a->size);
	free(a);
	return (0);
}
