/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:19:54 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/06/05 00:22:04 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	i;
	int		nb;

	i = 0;
	if (n < 0)
	{
		i++;
		nb = n * -1;
	}
	else
		nb = n;
	while (nb / 10)
	{
		i++;
		nb = nb / 10;
	}
	i++;
	return (i);
}

static int		ft_ispos(int n)
{
	if (n < 0)
		return (0);
	return (1);
}

char			*ft_itoa(int n)
{
	unsigned int	nb;
	char			*itoa;
	size_t			i;

	if (!(itoa = (char *)malloc(ft_nbrlen(n) + 1)))
		return (0);
	i = 0;
	if (n < 0)
	{
		itoa[i] = '-';
		i++;
		nb = -n;
	}
	else
		nb = n;
	itoa[ft_nbrlen(n)] = '\0';
	while (i < ft_nbrlen(n))
	{
		itoa[ft_nbrlen(n) - i - ft_ispos(n)] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	return (itoa);
}
