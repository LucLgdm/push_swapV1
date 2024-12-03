/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:21 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/03 17:03:18 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	*ft_quick_sort(int *arr, int low, int high)
{
	int	pivot;
	int	i;

	i = -1;
	if (low < high)
	{
		pivot = partition(arr, low, high);
		ft_quick_sort(arr, low, pivot - 1);
		ft_quick_sort(arr, pivot + 1, high);
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
