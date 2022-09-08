/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:22:56 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:41:33 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **first, char c)
{
	t_list	*temp;

	temp = (*first)->next;
	(*first)->next = (*first)->next->next;
	temp->next = *first;
	*first = temp;
	if (c == 'a')
		print_word("sa");
	else if (c == 'b')
		print_word("sb");
	else if (c == 'd')
		print_word("ss");
}
