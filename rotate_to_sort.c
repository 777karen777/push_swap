/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_to_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:15:43 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:40:08 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_to_sort(t_list **list_a)
{
	int	distance;
	int	len;

	distance = get_distance(list_a, 0);
	len = list_len(*list_a);
	if (distance < len - distance)
	{
		while (!is_sorted(*list_a))
		{
			rotate_up(list_a, 'a');
		}
	}
	else
	{
		while (!is_sorted(*list_a))
		{
			rotate_down(list_a, 'a');
		}
	}
	return ;
}
