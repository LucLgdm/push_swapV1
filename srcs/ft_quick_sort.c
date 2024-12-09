/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-merc <lde-merc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:21 by lde-merc          #+#    #+#             */
/*   Updated: 2024/12/09 14:43:11 by lde-merc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_quick_sort(int *arr, int low, int high)
{
	int	pivot;

	if (!arr || low >= high)
		return ;
	pivot = partition(arr, low, high);
	ft_quick_sort(arr, low, pivot - 1);
	ft_quick_sort(arr, pivot + 1, high);
}

int	partition(int *arr, int low, int high)
{
	int	pivot;
	int	i;
	int	tmp;
	int	j;

	pivot = arr[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (arr[j] < pivot)
		{
			i++;
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		j++;
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = tmp;
	return (i + 1);
}
