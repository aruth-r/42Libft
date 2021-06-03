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
	unsigned int i;

	i = 0;
	while (dst[i] != '\0')
		i++;
	ft_strlcpy(dst[i], src, dstsize - ft_strlen(dst));
	return (ft_strlen(dst));
}
