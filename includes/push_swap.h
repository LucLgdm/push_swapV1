/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:29:22 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/28 15:17:52 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_stack	t_stack;
struct	s_stack
{
	int	*stack;
	int	size;
};

// Parsing
t_stack	*parse(int argc, char **argv);
void	check_arg(char *arg, t_list **lst);
void	parse_string(t_list **lst, char *arg);
void	ft_add_arg_stack(t_list **lst, char *arg);
void	ft_copy_stack(t_list **lst, t_stack *result);
int		doppel(int result, t_list **lst);

// Sorting
void	sort_two(t_list **a);
void	sort_three(t_list *a);
void	sort_four(t_list *a);
void	sort_big(t_list *a);

// Usefull
void	ft_free_stack(t_stack *a, t_stack *b);
void	error_message(t_list **lst);
void	delete_content(void *content);
// swap, rotate, reverse rotate, push
#endif