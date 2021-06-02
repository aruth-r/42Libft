/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:50:29 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/20 12:54:53 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*S1;
	unsigned char	*S2;

	S1 = (unsigned char *)s1;
	S2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*S1 == *S2 && n-- > 0)
	{
		S1++;
		S2++;
	}
	return ((int)(*S1 - *S2));
}
