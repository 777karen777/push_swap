/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_closest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:54:02 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:29:02 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_closest(t_list **list_a, t_list **list_b)
{
	t_list	*temp_b;
	int		i;
	int		j;
	int		min;
	int		ret_ind;

	temp_b = *list_b;
	j = 0;
	min = INT_MAX;
	while (temp_b)
	{	
		i = get_distance(list_a, find_index_a(list_a, temp_b->index));
		if (get_min_steps(i, j, list_len(*list_a), list_len(*list_b)) < min)
		{
			min = get_min_steps(i, j, list_len(*list_a), list_len(*list_b));
			ret_ind = temp_b->index;
		}
		temp_b = temp_b->next;
		j++;
	}
	return (ret_ind);
}
