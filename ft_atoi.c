/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:09:00 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/29 19:14:29 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sgn;
	int	nbr;

	sgn = 1;
	nbr = 0;
	while (ft_isspace((int)*str) == 1)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sgn = sgn * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sgn);
}
