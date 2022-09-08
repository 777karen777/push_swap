/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_closest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:19:38 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:41:03 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_closest(t_list **list_a, t_list **list_b)
{	
	int	index_b;
	int	index_a;
	int	i;
	int	j;
	int	dir;

	index_b = find_closest(list_a, list_b);
	index_a = find_index_a(list_a, index_b);
	i = get_distance(list_a, index_a);
	j = get_distance(list_b, index_b);
	dir = get_dir(i, j, list_len(*list_a), list_len(*list_b));
	get_to_indexes(list_b, list_a, dir, index_b);
	from_upx_to_upy(list_b, list_a, 'a');
}
