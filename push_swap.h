/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:06:38 by knikogho          #+#    #+#             */
/*   Updated: 2022/09/05 17:09:02 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	long int		content;
	int				index;
	struct s_list	*next;
}	t_list;

long int	ft_atoi(const char *s);
t_list		*make_list_a(int argc, char **arr);
void		print_stacks(t_list *list_a, t_list *list_b);
int			list_len(t_list *list);
long int	*make_arr(t_list *list, int len);
void		sort_arr(long int **arr, int count);
void		set_indexes(t_list *list, long int *arr);
void		move_to_b(t_list **list_a, t_list **list_b, int len);
void		print_word(char *str);
void		swap(t_list **first, char c);
void		sort_a(t_list **list_a, t_list **list_b);
void		move_to_a(t_list **list_a, t_list **list_b);
void		sort_closest(t_list **list_a, t_list **list_b);
int			find_closest(t_list **list_a, t_list **list_b);
int			find_index_a(t_list **list_a, int index_b);
int			get_distance(t_list **list, int index);
int			get_dir(int i, int j, int len_a, int len_b);
void		get_to_indexes(t_list **list_b, t_list **list_a, int di, int ind_b);
int			get_min_steps(int i, int j, int len_a, int len_b);
void		sort_last(t_list **list_a, t_list **list_b);
int			eror(int argc, char **argv, long int *arr, int len);
int			returnn(int argc, char **argv);
void		rotate_to_sort(t_list **list_a);
int			is_sort(t_list **list);
int			eror_double(long int *arr, int len);
void		print_word_err(char *str);
int			check_do_bonus(t_list **list_a, t_list **list_b);
int			str_cmp_bonus(char *str1, char *str2);
int			main(int argc, char **argv);

int			index_of(long int *arr, long int a);
int			is_sorted(t_list *list);
int			get_shortest(t_list **list_a, t_list **list_b, int len);
int			max_of_list(t_list *list);
int			min_of_list(t_list *list);
t_list		*last_node(t_list *list);
void		from_a_to_b(t_list **list_a, t_list **list_b);
void		from_upx_to_upy(t_list **lst, t_list **lst2, char c);
int			get_j(t_list *temp_a, t_list **list_b);
void		dir_is_1(t_list **list_b, t_list **list_a, int ind_b);
void		dir_is_2(t_list **list_b, t_list **list_a, int ind_b);
void		dir_is_3(t_list **list_b, t_list **list_a, int ind_b);
void		dir_is_4(t_list **list_b, t_list **list_a, int ind_b);
void		dir_is_5(t_list **list_b, t_list **list_a, int ind_b);
void		dir_is_6(t_list **list_b, t_list **list_a, int ind_b);

t_list		*ft_lstnew(long int i);
void		ft_lstadd_back(t_list **lst, t_list *new);

void		rotate_up(t_list **list, char c);
void		rotate_down(t_list **list, char c);
int			get_midle(t_list *list);
int			to_up(t_list *list, int num);

#endif