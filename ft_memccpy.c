/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:14:37 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/19 17:18:40 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destchar;
	const char	*srcchar;
	char		stop;

	destchar = (char *)dest;
	srcchar = (const char *)src;
	stop = (char)c;
	while (n-- > 0 && *srcchar != stop)
		*destchar++ = *srcchar++;
	if (*srcchar == stop)
	{
		*destchar++ = *srcchar++;
		return (destchar++);
	}
	else
		return (NULL);
}
