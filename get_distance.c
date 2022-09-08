/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_distance.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:06:06 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:35:42 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_distance(t_list **list, int ind)
{
	t_list	*temp;
	int		i;

	temp = *list;
	i = 0;
	while (temp->index != ind)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
