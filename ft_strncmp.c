/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:50:06 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/08 21:19:27 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (ft_strlen(s1) < n && ft_strlen(s1) < ft_strlen(s2))
		return (memcmp(s1, s2, ft_strlen(s1)));
	if (ft_strlen(s2) < n)
		return (memcmp(s1, s2, ft_strlen(s2)));
	return (memcmp(s1, s2, n));
}
