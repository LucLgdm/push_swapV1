/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:16:32 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/25 18:26:13 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lauch_sort(int argc, char **argv)
{
	t_list	**head;
	int		i;
    int		*num;

	i = 0;
	head = NULL;
	if (!check_arg(argc, argv))
		return ;
	while (argv[++i])
    {
        num = (void *)malloc(sizeof(int));
        if (!num)
        {
            ft_putstr_fd("Error\n", 2);
            return ;
        }
        *num = ft_atoi(argv[i]);
        ft_lstadd_back(head, ft_lstnew(num));
        free(num);
    }
}

int	check_arg(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	while (argv[++i])
	{
		if (!ft_isinteger(argv[i]))
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

	i = -1;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
	}
	return (0);
}
