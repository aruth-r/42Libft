/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:13:52 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/29 19:17:21 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	char			*dest;
	size_t			result;

	result = ft_strlen(dst) + ft_strlen(src);
		i = 0;
	if (src == 0)
		return (0);
	if (dstsize < 1)
		*dst = '\0';
	while (dst[i] != '\0')
		i++;
	dest = &dst[i];
	ft_strlcpy(dest, src, dstsize - ft_strlen(dst) - 1);
	dest[dstsize] = '\0';
	return (result);
}
