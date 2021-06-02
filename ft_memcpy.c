/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:32:09 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/14 13:12:26 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destchar;
	const char	*srcchar;

	destchar = dest;
	srcchar = src;
	while (n-- > 0)
		*destchar++ = *srcchar++;
	return (dest);
}
