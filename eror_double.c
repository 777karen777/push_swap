/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eror_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:52:31 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 17:52:36 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	eror_double(long int *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				return (7);
			j++;
		}
		i++;
	}
	return (0);
}
