/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 23:37:50 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/14 20:07:48 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*string;

	i = 0;
	if (*s == 0)
	{
		string = (char *)ft_calloc(1, sizeof(char));
		if (string == 0)
			return (0);
		return (string);
	}
	string = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (string == 0)
		return (0);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
