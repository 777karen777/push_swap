/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eror.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:43:08 by knikogho          #+#    #+#             */
/*   Updated: 2022/08/28 18:56:52 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	eror_sumbs(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ' && argv[i][j] != '-' && argv[i][j] != '+'
				&& !(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (7);
			if ((argv[i][j] == '+' || argv[i][j] == '-')
				&& !(argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9'))
				return (7);
			j++;
		}
		i++;
	}
	return (0);
}

int	count_num(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == '0')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		count++;
		i++;
	}
	return (count);
}

int	eror_max(int argc, char **argv)
{
	int	i;
	int	j;
	int	found;

	i = 1;
	while (i < argc)
	{
		j = 0;
		found = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9' && !found)
			{
				if (count_num(&argv[i][j]) > 10)
					return (7);
			}
			if (argv[i][j] == ' ')
				found = 0;
			j++;
		}
		i++;
	}
	return (0);
}

int	eror_max_min(long int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] > 2147483647 || arr[i] < -2147483648)
			return (7);
		i++;
	}
	return (0);
}

int	eror(int argc, char **argv, long int *arr, int len)
{
	int	num;

	num = 0;
	num += eror_sumbs(argc, argv);
	num += eror_max(argc, argv);
	num += eror_max_min(arr, len);
	num += eror_double(arr, len);
	if (num)
		print_word_err("Error");
	return (num);
}
