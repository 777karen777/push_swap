/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:00:01 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:39:05 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_b(t_list **list_a, t_list **list_b, int len)
{
	while (list_len(*list_a) > 3 && !is_sort(list_a))
	{
		if ((*list_a)->index == 0 || (*list_a)->index == len / 2)
		{
			rotate_up(list_a, 'a');
			continue ;
		}
		from_upx_to_upy(list_a, list_b, 'b');
	}
	return ;
}
