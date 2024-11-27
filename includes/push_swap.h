/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:29:22 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/27 17:02:37 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "../libft/libft.h"

typedef struct s_stack	t_stack;
struct  s_stack
{
	int *stack;
	int size;
};

// Parsing
t_stack	*parse(int argc, char **argv);
void	ft_add_arg_stack(t_list **lst, char *arg);


void	initialisation(char **argv, t_list **head);
int		check_arg(int argc, char **argv);
int		ft_isinteger(char *str);

void	sort_two(t_list **a);
void	sort_three(t_list *a);
void	sort_four(t_list *a);
void	sort_big(t_list *a);

void	error_message(t_list **lst);
void    delete_content(int content);
// swap, rotate, reverse rotate, push
#endif