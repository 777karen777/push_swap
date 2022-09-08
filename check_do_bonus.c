/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_do_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:24:13 by knikogho          #+#    #+#             */
/*   Updated: 2022/09/07 19:45:58 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line_bonus.h"

static int	part1(char *line, t_list **list_a, t_list **list_b)
{
	if (str_cmp_bonus(line, "pa"))
	{
		if (list_len(*list_b))
			from_upx_to_upy(list_b, list_a, '0');
		return (7);
	}
	else if (str_cmp_bonus(line, "pb"))
	{
		if (list_len(*list_a))
			from_upx_to_upy(list_a, list_b, '0');
		return (7);
	}
	else if (str_cmp_bonus(line, "sa"))
	{
		if (list_len(*list_a) > 1)
			swap(list_a, '0');
		return (7);
	}
	return (0);
}

static int	part2(char *line, t_list **list_a, t_list **list_b)
{
	if (str_cmp_bonus(line, "sb"))
	{
		if (list_len(*list_b) > 1)
			swap(list_b, '0');
		return (7);
	}
	else if (str_cmp_bonus(line, "ss"))
	{
		if (list_len(*list_a) > 1 && list_len(*list_b) > 1)
		{
			swap(list_b, '0');
			swap(list_b, '0');
		}
		return (7);
	}
	else if (str_cmp_bonus(line, "ra"))
	{
		if (list_len(*list_a) > 1)
			rotate_up(list_a, '0');
		return (7);
	}
	return (0);
}

static int	part3(char *line, t_list **list_a, t_list **list_b)
{
	if (str_cmp_bonus(line, "rb"))
	{
		if (list_len(*list_b) > 1)
			rotate_up(list_b, '0');
		return (7);
	}
	else if (str_cmp_bonus(line, "rr"))
	{
		if (list_len(*list_a) > 1 && list_len(*list_b) > 1)
		{
			rotate_up(list_a, '0');
			rotate_up(list_b, '0');
		}
		return (7);
	}
	else if (str_cmp_bonus(line, "rra"))
	{
		if (list_len(*list_a) > 1)
			rotate_down(list_a, '0');
		return (7);
	}
	return (0);
}

static int	part4(char *line, t_list **list_a, t_list **list_b)
{
	if (str_cmp_bonus(line, "rrb"))
	{
		if (list_len(*list_b) > 1)
			rotate_down(list_b, '0');
		return (7);
	}
	if (str_cmp_bonus(line, "rrr"))
	{
		if (list_len(*list_a) > 1 && list_len(*list_b) > 1)
		{
			rotate_down(list_a, '0');
			rotate_down(list_b, '0');
		}
		return (7);
	}
	return (0);
}

int	check_do_bonus(t_list **list_a, t_list **list_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (part1(line, list_a, list_b) || part2(line, list_a, list_b)
			|| part3(line, list_a, list_b) || part4(line, list_a, list_b))
		{
			line = get_next_line(0);
			continue ;
		}	
		else
		{
			print_word_err("Error");
			return (0);
		}
	}
	return (7);
}
