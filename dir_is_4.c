/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir_is_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:41:46 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 17:42:06 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dir_is_4(t_list **list_b, t_list **list_a, int ind_b)
{
	int	ind_a;

	ind_a = find_index_a(list_a, ind_b);
	while ((*list_a)->index != ind_a)
	{
		rotate_down(list_a, 'd');
		rotate_down(list_b, '0');
	}
	while ((*list_b)->index != ind_b)
		rotate_down(list_b, 'b');
}
