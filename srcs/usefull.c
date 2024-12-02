/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usefull.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:27:25 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 13:30:32 by lde-merc         ###   ########.fr       */
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
