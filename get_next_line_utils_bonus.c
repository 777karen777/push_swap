/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knikogho <knikogho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 12:41:59 by knikogho          #+#    #+#             */
/*   Updated: 2022/06/07 16:52:33 by knikogho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char	*str1, char	*str2)
{
	char	*joined;
	size_t	i;
	size_t	j;

	if (!str1)
	{
		str1 = (char *)malloc(sizeof(char) * 1);
		str1[0] = '\0';
	}
	i = 0;
	j = 0;
	joined = malloc((ft_strlen(str1) + ft_strlen(str2) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	while (str1[i])
		joined[j++] = str1[i++];
	i = 0;
	while (str2[i])
		joined[j++] = str2[i++];
	joined[j] = '\0';
	free(str1);
	return (joined);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count])
	{
		count++;
	}
	return (count);
}
