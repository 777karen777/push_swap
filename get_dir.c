/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dir.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:03:20 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/31 16:06:59 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a(int i, int j, int *min, int *dir)
{
	if (i >= j && i < *min)
	{
		*min = i;
		*dir = 1;
	}
	if (i < j && j < *min)
	{
		*min = j;
		*dir = 2;
	}
}

int	get_dir(int i, int j, int len_a, int len_b)
{
	int	min;
	int	dir;

	min = INT_MAX;
	a(i, j, &min, &dir);
	if (len_b - j <= len_a - i && len_a - i < min)
	{
		min = len_a - i;
		dir = 3;
	}
	if (len_b - j > len_a - i && len_b - j < min)
	{
		min = len_b - j;
		dir = 4;
	}
	if (len_b - j + i < min)
	{
		min = len_b - j + i;
		dir = 5;
	}
	if (len_a - i + j < min)
		dir = 6;
	return (dir);
}
