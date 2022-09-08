/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:11:34 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:28:07 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_list **lis)
{
	t_list	*temp;
	t_list	*list;

	temp = *lis;
	list = *lis;
	if (!is_sorted(temp))
	{
		if (list->index < last_node(list)->index)
			return (0);
		while (list && list->next)
		{
			if (list->index == max_of_list(*lis))
			{
				if (list->next->index == min_of_list(*lis))
					list = list->next;
				else
					return (0);
			}
			else if (list->index > list->next->index)
				return (0);
			list = list->next;
		}
	}
	return (7);
}
