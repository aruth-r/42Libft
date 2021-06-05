/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:40:27 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/03 23:40:30 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arraysize(const char *s, char c)
{
	int i;

	i = 1;
	while (*s != '\0')
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**ft_split_copy(char const *s, char c)
{
	char **split;
	char *split_point;
	int i;
	int j;

	i = 0;
	if (*s == c)
		s++;
	j = ft_arraysize(s, c) + 1;
	split = malloc (sizeof(*split)*j);
	if (!split || !s)//se não tem memória ou se a string é vazia
		return (0);
	while (i <= j)
	{
		if (split[i] != 0 && *split_point != 0)
		{
			split[i] = ft_substr(s, (unsigned int)(split_point -s), ft_strlen(split_point)); //encontrar ponto com o ponto de corte e copiar para a string do array
			split_point = ft_strchr(split_point, (int)c);
		}
		i++; // ir para próxima string do array
	}
	split[i] = 0;
	return (split);
}
