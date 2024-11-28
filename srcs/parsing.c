/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:00:12 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/28 15:55:28 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Data capture, initialize stack a, check validity...

#include "../includes/push_swap.h"

t_stack	*parse(int argc, char **argv)
{
	t_stack	*result;
	t_list	*lst;
	t_list	*tmp;
	int		i;

	lst = NULL;
	i = 0;
	tmp = lst;
	while (++i < argc)
		ft_add_arg_stack(&lst, argv[i]);
	result = (t_stack *)malloc(sizeof(t_stack));
	if (!result)
		error_message(&lst);
	ft_copy_stack(&lst, result);
	return (result);
}

void	ft_add_arg_stack(t_list **lst, char *arg)
{
	t_list	*new_elem;
	long	result;

	check_arg(arg, lst);
	if (ft_strchr(arg, ' '))
		parse_string(lst, arg);
	else
	{
		result = ft_atoi(arg);
		if (result < -2147483648 || result > 2147483647 || doppel(result, lst))
			error_message(lst);
		new_elem = ft_lstnew(malloc(sizeof(int)));
		if (!new_elem)
			error_message(lst);
		*(int *)(new_elem->content) = result;
		ft_lstadd_back(lst, new_elem);
	}
}

void	check_arg(char *arg, t_list **lst)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (ft_isdigit(arg[i]) || arg[i] == '+' || arg[i] == '-'
			|| arg[i] == ' ')
			i++;
		else
			error_message(lst);
	}
}

void	ft_copy_stack(t_list **lst, t_stack *result)
{
	t_list	*tmp;
	int		count;

	if (*lst)
	{
		count = 0;
		tmp = *lst;
		while (tmp)
		{
			count++;
			tmp = tmp->next;
		}
		result->stack = (int *)malloc(count * sizeof(int));
		if (!result)
			error_message(lst);
		result->size = count;
		tmp = *lst;
		while (tmp)
		{
			result->stack[result->size - count] = *(int *)(tmp->content);
			tmp = tmp->next;
			count--;
		}
	}
	else
	{
		result->stack = NULL;
		result->size = 0;
	}
}

void	parse_string(t_list **lst, char *arg)
{
	char	**splited;
	int		i;

	splited = ft_split(arg, ' ');
	if (!splited)
		error_message(lst);
	i = -1;
	while (splited[++i])
		ft_add_arg_stack(lst, splited[i]);
	while (i)
	{
		free(splited[i]);
		i--;
	}
	free(splited[0]);
	free(splited);
}
