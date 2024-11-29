/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:29:22 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/29 16:15:20 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
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
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_big(t_stack *a);

// Usefull
t_stack	*init_b(t_stack **a);
void	ft_free_stack(t_stack *a, t_stack *b);
void	error_message(t_list **lst);
void	delete_content(void *content);
bool	is_sorted(t_stack **a);

// Stack
int		ft_push(t_stack **a);
int		ft_pop(t_stack **a);

// Commande
	// swap
void	sa(t_stack **a);
void	sb(t_stack **b);
void	sa_chut(t_stack **a);
void	sb_chut(t_stack **b);
void	ss(t_stack **a, t_stack **b);
	// reverse
void	ra(t_stack **a);
void	rb(t_stack **b);
void	ra_chut(t_stack **a);
void	rb_chut(t_stack **b);
void	rr(t_stack **a, t_stack **b);
	// ra rb rr / rra rrb rrr / pb pb
#endif