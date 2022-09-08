/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_of_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:58:56 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 19:59:09 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_of_list(t_list *list)
{
	t_list	*temp;
	int		min;

	temp = list;
	min = INT_MAX;
	while (temp)
	{
		if (temp->index < min)
			min = temp->index;
		temp = temp->next;
	}
	return (min);
}
