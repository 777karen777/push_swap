/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:16:55 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:17:44 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_len(t_list *list)
{
	t_list	*temp;
	int		i;

	temp = list;
	i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
