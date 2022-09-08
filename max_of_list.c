/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_of_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:58:24 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 19:58:40 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_of_list(t_list *list)
{
	t_list	*temp;
	int		max;

	temp = list;
	max = -1;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	return (max);
}
