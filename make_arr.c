/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_arr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:18:42 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:20:20 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	*make_arr(t_list *list, int len)
{
	long int	*ar;
	t_list		*temp;
	int			i;

	i = 0;
	ar = (long int *)malloc(sizeof(long int) * len);
	temp = list;
	while (temp)
	{
		ar[i] = temp->content;
		temp = temp->next;
		i++;
	}
	return (ar);
}
