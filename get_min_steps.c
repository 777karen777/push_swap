/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_steps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:36:01 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/31 16:08:00 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_steps(int i, int j, int len_a, int len_b)
{
	int	min;

	min = INT_MAX;
	if (i >= j && i < min)
		min = i;
	if (i < j && j < min)
		min = j;
	if (len_b - j <= len_a - i && len_a - i < min)
		min = len_a - i;
	if (len_b - j > len_a - i && len_b - j < min)
		min = len_b - j;
	if (len_b - j + i < min)
		min = len_b - j + i;
	if (len_a - i + j < min)
		min = len_a - i + j;
	return (min);
}
