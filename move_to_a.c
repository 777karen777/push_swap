/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:59:30 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:38:55 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_a(t_list **list_a, t_list **list_b)
{
	while (list_len(*list_b))
	{
		sort_closest(list_a, list_b);
	}
	rotate_to_sort(list_a);
	return ;
}
