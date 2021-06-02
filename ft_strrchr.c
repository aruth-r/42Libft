/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 16:51:55 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/29 19:18:35 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			n;
	unsigned char	*x;

	n = ft_strlen(s) + 1;
	while (n-- > 0)
	{
		x = (unsigned char *)s + n;
		if (*x == c)
			return ((char *)x);
	}
	return (0);
}
