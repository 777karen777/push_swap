/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_down.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:13:56 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 20:15:18 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_down(t_list **list, char c)
{
	t_list	*new_end;
	t_list	*temp;

	temp = *list;
	while (temp->next)
	{
		if (temp->next->next == NULL)
			new_end = temp;
		temp = temp->next;
	}
	temp->next = *list;
	*list = temp;
	new_end->next = NULL;
	if (c == 'a')
		print_word("rra");
	else if (c == 'b')
		print_word("rrb");
	else if (c == 'd')
		print_word("rrr");
	else
		return ;
}
