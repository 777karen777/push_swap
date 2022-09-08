/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_indexes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:16:54 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 20:17:19 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_indexes(t_list *list, long int *arr)
{
	t_list	*temp;

	temp = list;
	while (temp)
	{
		temp->index = index_of(arr, temp->content);
		temp = temp->next;
	}
}
