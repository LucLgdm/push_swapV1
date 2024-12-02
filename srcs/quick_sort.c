/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:21 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/02 16:44:49 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*quick_sort(t_stack **a, int low, int high)
{
	int	pivot;
	int	arr[(*a)->size];
	int	i;

	i = -1;
	while (++i < (*a)->size)
		arr[i] = (*a)->stack[i];
	if (low < high)
	{
		pivot = partition(arr, low, high);
		quick_sort(arr, low, pivot - 1);
		quick_sort(arr, pivot + 1, high);
	}
    return (arr);
}

int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	j;
	int	tmp;

	pivot = arr[high];
	i = low - 1;
	j = low - 1;
	while (++j < high)
	{
		if (arr[j] < pivot)
		{
			++i;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = tmp;
	return (i + 1);
}
