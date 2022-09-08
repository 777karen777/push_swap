/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:20:54 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 19:54:27 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	connect(t_list **list_a, char *str)
{
	ft_lstadd_back(list_a, ft_lstnew(ft_atoi(str)));
	return (7);
}

t_list	*make_list_a(int argc, char **arr)
{
	int			i;
	int			j;
	int			found;
	t_list		*list_a;

	j = 1;
	list_a = 0;
	while (j < argc)
	{
		found = 0;
		i = 0;
		while (arr[j][i])
		{
			if (found == 0 && ((arr[j][i] >= '0' && arr[j][i] <= '9')
				|| arr[j][i] == '+' || arr[j][i] == '-'))
				found = connect(&list_a, &arr[j][i]);
			else if (arr[j][i] == ' ')
				found = 0;
			i++;
		}
		j++;
	}	
	return (list_a);
}
