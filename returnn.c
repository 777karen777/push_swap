/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   returnn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:13:48 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 20:13:49 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	returnn(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
				return (7);
			j++;
		}
		i++;
	}
	return (0);
}
