/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:01:18 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/26 16:39:47 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_list *list_a, t_list *list_b)
{
	while (list_a || list_b)
	{
		if (list_a && list_b)
			printf("%ld  %ld\n", list_a->content, list_b->content);
		else if (list_a)
			printf("%ld - %d\n", list_a->content, list_a->index);
		else if (list_b)
			printf("   %ld\n", list_b->content);
		if (list_a)
			list_a = list_a->next;
		if (list_b)
			list_b = list_b->next;
	}
	return ;
}
