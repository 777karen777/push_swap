/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:02:28 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:02:29 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	a = *lst;
	while (a)
	{
		if ((a)->next == NULL)
		{
			(a)->next = new;
			new->next = NULL;
			return ;
		}
		a = (a)->next;
	}
	return ;
}
