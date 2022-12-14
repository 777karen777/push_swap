/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:10:33 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:11:14 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_of(long int *arr, long int a)
{
	int	i;

	i = 0;
	while (arr[i] != a)
	{
		i++;
	}
	return (i);
}
