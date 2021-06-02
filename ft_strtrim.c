/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:47:31 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/28 19:05:10 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	trim = (char *)malloc(sizeof(char) * (ft_strlen(s1)));
	if (!trim)
		return (0);
	i = 0;
	j = 0;
	while (*set++ != '\0')
	{
		if (ft_strncmp(s1, set, 1) == 0)
			i = 1;
		else if (ft_strncmp((s1 + ft_strlen(s1) - 1), set, 1) == 0)
			j = 1;
	}
	if (i == 1 && j == 0)
		ft_memcpy(trim, s1 + 1, ft_strlen(s1) - 1);
	else if (i == 0 && j == 1)
		ft_memcpy(trim, s1, ft_strlen(s1) - 1);
	else if (i == 1 && j == 1)
		ft_memcpy(trim, s1 + 1, ft_strlen(s1) - 2);
	else
		ft_memcpy(trim, s1, ft_strlen(s1));
	return (trim);
}
