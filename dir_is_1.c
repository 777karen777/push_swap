/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir_is_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:39:25 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 17:40:10 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dir_is_1(t_list **list_b, t_list **list_a, int ind_b)
{
	int	ind_a;

	ind_a = find_index_a(list_a, ind_b);
	while ((*list_b)->index != ind_b)
	{
		rotate_up(list_a, 'd');
		rotate_up(list_b, '0');
	}
	while ((*list_a)->index != ind_a)
		rotate_up(list_a, 'a');
}
