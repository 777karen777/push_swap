/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:48:23 by knikogho          #+#    #+#             */
/*   Updated: 2022/06/07 16:54:58 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4000
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *c); // rem
char	*ft_strchr(char *s, int c);

#endif
