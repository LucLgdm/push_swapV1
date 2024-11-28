/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:27:25 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/28 15:06:42 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_message(t_list **lst)
{
	ft_lstclear(lst, &delete_content);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	delete_content(void *content)
{
	(void)content;
}

void	ft_free_stack(t_stack *a, t_stack *b)
{
	if (a->stack)
	{
		free(a->stack);
		a->stack = NULL;
	}
	if (b->stack)
	{
		free(b->stack);
		b->stack = NULL;
	}
}
