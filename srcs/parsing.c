/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:00:12 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/27 17:03:23 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Data capture, initialize stack a, check validity...

#include "../includes/push_swap.h"

t_stack	*parse(int argc, char **argv)
{
	t_stack	*result;
	t_list	*lst;
	int		i;

	lst = NULL;
	i = 0;
	while (++i < argc)
		ft_add_stack(&lst, argv[i]);
	result = (t_stack *)malloc(sizeof(t_stack));
	if (!result)
		error_message(&lst);
	ft_copy_stack(lst, result);
	return (result);
}

void	ft_add_arg_stack(t_list **lst, char *arg)
{
	// Cas un seul argument : "0 2 +7 -85", verifier si argument convenable
	// (int et + et -), doublon
	// new_elem, addback et on est bon
}

// void	initialisation(char **argv, t_list **head)
// {
// 	int		i;
// 	int		*num;
// 	t_list	*newnode;

// 	i = 0;
// 	while (argv[++i])
// 	{
// 		num = (void *)malloc(sizeof(int));
// 		if (!num)
// 		{
// 			ft_lstclear(head, free);
// 			error_message();
// 		};
// 		*num = ft_atoi(argv[i]);
// 		newnode = ft_lstnew(num);
// 		if (!newnode)
// 		{
// 			free(num);
// 			ft_lstclear(head, free);
// 			error_message();
// 		}
// 		ft_lstadd_back(head, newnode);
// 	}
// }

// int	check_arg(int argc, char **argv)
// {
// 	int	i;

// 	i = 0;
// 	if (argc == 1)
// 		return (1);
// 	while (argv[++i])
// 	{
// 		if (ft_isinteger(argv[i]) != 0)
// 		{
// 			ft_putstr_fd("Error\n", 2);
// 			exit(EXIT_FAILURE);
// 		}
// 	}
// 	return (0);
// }

// int	ft_isinteger(char *str)
// {
// 	int	i;

// 	i = 0;
// 	if (str[i] == '-' || str[i] == '+')
// 		i++;
// 	while (str[i])
// 	{
// 		if (!ft_isdigit(str[i]))
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
