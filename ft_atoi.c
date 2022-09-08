/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:58:46 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/25 18:01:34 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

long int	ft_atoi(const char *s)
{
	int			i;
	long int	num;
	long int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = (num * 10) + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
