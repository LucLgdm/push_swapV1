/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:29:22 by lde-merc          #+#    #+#             */
/*   Updated: 2024/11/26 18:09:30 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "libft/libft.h"

int		parse(int argc, char **argv, t_list *a);
void	initialisation(char **argv, t_list *head);
int		check_arg(int argc, char **argv);
int		ft_isinteger(char *str);

void	sort_two(t_list *a);
void	sort_three(t_list *a);
void	sort_four(t_list *a);
void	sort_big(t_list *a);

    // swap, rotate, reverse rotate, push
#endif