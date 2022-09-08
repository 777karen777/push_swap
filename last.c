/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:16:35 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:16:43 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*last_node(t_list *list)
{
	t_list	*temp;

	temp = list;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}
