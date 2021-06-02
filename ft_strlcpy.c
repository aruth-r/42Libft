/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 12:19:47 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/29 23:01:41 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (src == 0)
		return (0);
	if (destsize < 1)
		return (srcsize);
	if (destsize < srcsize)
	{
		ft_memcpy(dest, src, destsize - 1);
		dest[destsize - 1] = 0;
	}
	else
	{
		ft_memcpy(dest, src, srcsize);
		dest[srcsize] = 0;
	}
	return (srcsize);
}
