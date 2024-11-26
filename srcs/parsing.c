/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:00:12 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/26 18:04:47 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    // Data capture, initialize stack a, check validity...

#include "push_swap.h"

void	initialisation(char **argv, t_list *head)
{
	int	i;
	int	*num;

	i = 0;
	while (argv[++i])
	{
		num = (void *)malloc(sizeof(int));
		if (!num)
		{
			ft_lstclear(&head, free);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		} ;
		*num = ft_atoi(argv[i]);
		ft_lstadd_back(&head, ft_lstnew(num));
		free(num);
	}
}

int	check_arg(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		return (1);
	while (argv[++i])
	{
		if (ft_isinteger(argv[i]) != 0)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
	}
	return (0);
}

int	ft_isinteger(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}
