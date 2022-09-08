/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_to_indexes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:08:51 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:10:12 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_to_indexes(t_list **list_b, t_list **list_a, int dir, int ind_b)
{
	if (dir == 1)
		dir_is_1(list_b, list_a, ind_b);
	else if (dir == 2)
		dir_is_2(list_b, list_a, ind_b);
	else if (dir == 3)
		dir_is_3(list_b, list_a, ind_b);
	else if (dir == 4)
		dir_is_4(list_b, list_a, ind_b);
	else if (dir == 5)
		dir_is_5(list_b, list_a, ind_b);
	else if (dir == 6)
		dir_is_6(list_b, list_a, ind_b);
}
