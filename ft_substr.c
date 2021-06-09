/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:07:39 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/08 22:34:36 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*st;

	st = (char *)s + start;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if(sub == 0)
		return (0);
	if (start > ft_strlen(s))
		{
			sub[0] = '\0';
			return sub;
		}
	if (!sub)
		return (0);
	ft_memcpy(sub, st, len);
	sub[len] = 0;
	return (sub);
}
