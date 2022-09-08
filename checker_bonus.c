/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:46:48 by knikogho          #+#    #+#             */
/*   Updated: 2022/09/07 19:46:49 by knikogho         ###   ########.fr       */
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
	if (check_do_bonus(&list_a, &list_b))
	{
		if (list_len(list_a) && is_sorted(list_a) && !list_len(list_b))
			print_word("OK");
		else
			print_word("KO");
	}
	return (0);
}
