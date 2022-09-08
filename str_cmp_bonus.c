/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_cmp_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:09:03 by knikogho          #+#    #+#             */
/*   Updated: 2022/09/06 17:50:19 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_cmp_bonus(char *str1, char *str2)
{
	int	i;

	i = 0;
	while ((str1[i] && str1[i] != '\n') || (str2[i] && str2[i] != '\n'))
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (7);
}
