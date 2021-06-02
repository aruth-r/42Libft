/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 22:30:44 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/29 22:35:22 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//contém erros

#include "libft.h"

static size_t ft_subs_count (const char *s, char c)
{
	size_t i;

	i = 1;
	if (*s == c)
		s++;
	while (*s != 0)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

static size_t ft_subs_len (const char *s, char c)
{
	size_t i;

	i = 0;
	while(*s != 0 && *s != c)
	{
		if(*s != 0)
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char **split;
	char *split_point;
	int i;
	int j;

	i = 0;
	if (*s == c)
		s++;
	j = ft_subs_count(s, c) + 1;
	split = malloc (sizeof(*split)*j);
	if (!split || !s)
		return (0);
	split_point = ft_strdup(s);
	while (i < j)
	{
		if (s[i] != 0)
		{
			//s[i] = ft_substr(s, (unsigned int)(split_point - s), ft_subs_len(split_point, c));
			split_point += ft_subs_len(s, c);
		}
		i++;
	}
	split[i] = 0;
	return (split);
}
