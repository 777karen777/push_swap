/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:56:13 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:29:17 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_index_a(t_list **list_a, int index_b)
{
	t_list	*temp;
	t_list	*prev;

	temp = *list_a;
	prev = last_node(*list_a);
	if (index_b < min_of_list(*list_a) || index_b > max_of_list(*list_a))
		return (min_of_list(*list_a));
	while (!(index_b < temp->index && index_b > prev->index))
	{
		prev = temp;
		temp = temp->next;
	}
	return (temp->index);
}
