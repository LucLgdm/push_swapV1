/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_use.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:25:25 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/28 15:19:11 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	doppel(int n, t_list **lst)
{
	int count;
    t_list  *tmp;

    tmp = *lst;
	count = 0;
	while (tmp)
	{
		if (*(int *)(tmp->content) == n)
		{
            count++;
            if (count > 1)
                return (1);
		}
        tmp = tmp->next;
	}
	return (0);
}
