/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:32:09 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/06 20:33:32 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destchar;
	const char	*srcchar;

	destchar = dest;
	srcchar = src;
	if (*srcchar == 0)
			*destchar == 0;
	while (n-- > 0)
		*destchar++ = *srcchar++;
	return (dest);
}
