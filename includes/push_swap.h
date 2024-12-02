/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:29:22 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 14:49:55 by lde-merc         ###   ########.fr       */
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
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);
void	chunks_sort(t_stack **a, t_stack **b);
void	radix_sort(t_stack **a, t_stack **b);

// Usefull
t_stack	*init_b(void);
void	ft_free_stack(t_stack *a, t_stack *b);
void	error_message(t_list **lst);
void	delete_content(void *content);
bool	is_sorted(t_stack **a);
int		ft_min(t_stack **a);
int		ft_index_min(t_stack **a, int min);

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
	// rotate
void	ra(t_stack **a);
void	rb(t_stack **b);
void	ra_chut(t_stack **a);
void	rb_chut(t_stack **b);
void	rr(t_stack **a, t_stack **b);
	// reverse rotate
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rra_chut(t_stack **a);
void	rrb_chut(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
	// push
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
#endif