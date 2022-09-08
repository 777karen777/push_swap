/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:36:28 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 17:38:19 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_arr(long int **arr, int count)
{
	int	i;
	int	temp;
	int	sorted;

	i = 0;
	temp = 0;
	sorted = 0;
	while (count > 1 && !sorted)
	{
		sorted = 7;
		i = 0;
		while (i < count - 1)
		{
			if ((*arr)[i] > (*arr)[i + 1])
			{
				temp = (*arr)[i];
				(*arr)[i] = (*arr)[i + 1];
				(*arr)[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
		count--;
	}
	return ;
}
