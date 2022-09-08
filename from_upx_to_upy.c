/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_upx_to_upy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:57:58 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 17:58:10 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	from_upx_to_upy(t_list **lst, t_list **lst2, char c)
{
	t_list	*temp;
	t_list	*temp2;

	temp = *lst;
	temp2 = (*lst)->next;
	temp->next = *lst2;
	*lst2 = temp;
	*lst = temp2;
	if (c == 'a')
		print_word("pa");
	else if (c == 'b')
		print_word("pb");
}
