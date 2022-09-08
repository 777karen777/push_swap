/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:17:25 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/30 17:39:21 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **list_a)
{
	t_list	*last;

	if (list_len(*list_a) < 4 && !is_sorted(*list_a))
	{
		while (!is_sorted(*list_a))
		{
			last = last_node(*list_a);
			if ((*list_a)->index > (*list_a)->next->index
				&& (*list_a)->index > (last_node(*list_a))->index)
				rotate_up(list_a, 'a');
			else if ((*list_a)->index > (*list_a)->next->index)
				swap(list_a, 'a');
			else if ((*list_a)->index < (*list_a)->next->index
				&& (*list_a)->index > last->index)
				rotate_down(list_a, 'a');
			else if ((*list_a)->index < (*list_a)->next->index
				&& (*list_a)->index < last->index)
			{
				rotate_down(list_a, 'a');
				swap(list_a, 'a');
			}	
		}		
	}
	return ;
}

void	sort_5(t_list **list_a, t_list **list_b)
{
	if (!is_sort(list_a))
	{
		while (!is_sort(list_a) && list_len(*list_a) > 3)
		{
			from_upx_to_upy(list_a, list_b, 'b');
		}
		if (list_len(*list_a) == 3 && (*list_a)->index > (*list_a)->next->index
			&& (*list_b)->index < (*list_b)->next->index && !is_sort(list_a))
		{
			swap(list_a, '0');
			swap(list_b, 'd');
		}
		else if ((*list_b)->next && (*list_b)->index < (*list_b)->next->index)
			swap(list_b, 'b');
		if (!is_sort(list_a))
			sort_3(list_a);
		move_to_a(list_a, list_b);
	}
	rotate_to_sort(list_a);
	return ;
}

void	sort_a(t_list **list_a, t_list **list_b)
{
	if (list_len(*list_a) < 4)
	{
		sort_3(list_a);
	}
	else if (list_len(*list_a) <= 5)
	{
		sort_5(list_a, list_b);
	}
	return ;
}
