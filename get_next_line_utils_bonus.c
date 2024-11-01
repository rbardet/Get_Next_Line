/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:11:42 by rbardet-          #+#    #+#             */
/*   Updated: 2024/11/01 03:48:07 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join;
	size_t	a;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *)malloc(len1 + len2 + 1);
	if (!join)
		return (free(join), NULL);
	a = 0;
	while (a < len1)
	{
		join[a] = s1[a];
		a++;
	}
	while (a < len1 + len2)
	{
		join[a] = s2[a - len1];
		a++;
	}
	join[a] = '\0';
	return (join);
}

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	char unsigned	c1;

	str = (char *)s;
	c1 = (char unsigned)c;
	while (*str != '\0')
	{
		if ((char unsigned)*str == c1)
			return (str);
		str++;
	}
	return (NULL);
}
