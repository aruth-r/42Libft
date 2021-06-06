/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:47:31 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/06 14:52:52 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	end;
	size_t	len;

	if (*s == 0 || *set == 0)
		return (0);
	while (*s != 0 && (ft_strchr(set, *s)))
		s++;
	end = ft_strlen(s);
	while (end > 0 && (ft_strchr(set, s[end])))
		end--;
	len = end + 1;
	return (ft_substr(s, 0, len));
}
