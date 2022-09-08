/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:15:59 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 20:16:43 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_up(t_list **list, char c)
{
	t_list	*new_end;
	t_list	*temp;

	new_end = *list;
	*list = (*list)->next;
	temp = *list;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_end;
	new_end->next = NULL;
	if (c == 'a')
		print_word("ra");
	else if (c == 'b')
		print_word("rb");
	else if (c == 'd')
		print_word("rr");
	else
		return ;
}
