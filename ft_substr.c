/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:07:39 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/14 20:39:22 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*st;

	if (s == 0)
		return (0);
	st = (char *)s + start;
	if (start > ft_strlen(s) || len == 0)
	{
		sub = (char *)ft_calloc(1, sizeof(char));
		return (sub);
	}
	if (len > (ft_strlen(s) + 1))
		sub = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == 0)
		return (0);
	if (len > (ft_strlen(s) + 1))
		ft_memcpy(sub, st, ft_strlen(s) + 1);
	else
		ft_memcpy(sub, st, len);
	sub[len] = 0;
	return (sub);
}
