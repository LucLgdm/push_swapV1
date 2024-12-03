// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   bucket_sort.c                                      :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/11/26 18:01:21 by lde-merc          #+#    #+#             */
// /*   Updated: 2024/12/03 15:52:46 by lde-merc         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "../includes/push_swap.h"

// void	bucket_sort(t_stack **a, t_stack **b)
// {
// 	int	*sorted, *tmp;
// 	int	nbucket;
// 	int	bucket_size;
// 	int	i;
// 	int	j;

// 	sorted = (int *)malloc((*a)->size * sizeof(int));
// 	tmp = (int *)malloc((*a)->size * sizeof(int));
// 	i = -1;
// 	while (++i < (*a)->size)
// 		sorted[i] = (*a)->stack[i];
// 	sorted = quick_sort(sorted, 0, (*a)->size - 1);
// 	i = -1;
// 	while (++i < (*a)->size)
// 		tmp[i] = sorted[i];
// 	i = -1;
// 	while (++i < (*a)->size)
// 		sorted[i] = tmp[(*a)->size - 1 - i];
//     for(int k = 0; k < (*a)->size; k++) ft_printf("%i ", sorted[k]);
// 	if ((*a)->size < 50)
// 		nbucket = 4;
// 	else
// 		nbucket = 8;
// 	bucket_size = (*a)->size / nbucket;
// 	i = -1;
// 	while (++i < nbucket)
// 	{
// 		j = 0;
// 		while (j < bucket_size)
// 		{
// 			if (is_in_bucket((*a)->stack[0], sorted, i, bucket_size))
// 			{
// 				pb(b, a);
// 				j++;
//                 sort_b(a, b);
//                 ft_printf("\n");
// 			}
// 			else
// 				ra(a);
// 		}
// 	}
// 	free(sorted);
// }
// void    sort_b(t_stack **a, t_stack **b)
// {
//     int max_index;
// 	int	i = 0;
// 	for(int k = 0; k < (*b)->size; k++) ft_printf("b[%i] = %i ", k, (*b)->stack[k]);
//     if ((*b)->size == 2)
//         sort_two(b);
//     else if ((*b)->size == 3)
//         sort_three(b);
//     else if ((*b)->size >= 4)
//     {
//         max_index = ft_index_max(b, ft_max(b));
// 		ft_printf("index max = %i\n", max_index);
// 		ft_printf("(*b)->stack[max_index] = %i\n", (*b)->stack[max_index]);
//         while ((*b)->stack[(*b)->size - 1] != (*b)->stack[max_index])
//         {
			
//             if (max_index > (*b)->size / 2)
//                 rb(b);
//             else
//                 rrb(b);
// 			if (++i == 15)
// 				exit(1);
			
//         }
//         pa(a, b);
//         sort_b(a, b);
//         pb(b, a);
//     }
	
// }
