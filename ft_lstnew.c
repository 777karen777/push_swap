/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:02:52 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:02:56 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(long int i)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = i;
	new_list->next = NULL;
	return (new_list);
}
