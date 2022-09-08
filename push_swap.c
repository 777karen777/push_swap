/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:04:09 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/30 17:31:09 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list		*list_a;
	t_list		*list_b;
	int			len;
	long int	*arr;

	list_a = make_list_a(argc, argv);
	list_b = 0;
	len = list_len(list_a);
	arr = make_arr(list_a, len);
	if (!returnn(argc, argv))
		return (0);
	if (eror(argc, argv, arr, len))
		return (0);
	sort_arr(&arr, len);
	set_indexes(list_a, arr);
	if (len <= 5)
		sort_a(&list_a, &list_b);
	else
	{
		move_to_b(&list_a, &list_b, len);
		sort_a(&list_a, &list_b);
		move_to_a(&list_a, &list_b);
	}
	return (0);
}
