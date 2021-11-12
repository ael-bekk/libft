/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:47:57 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/09 13:47:59 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				ng;
	unsigned long	n;

	n = 0;
	ng = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	if (*str == '-')
		ng = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		n = n * 10 + (*str - '0');
		str++;
		if (n > LONG_MAX)
		{
			if (ng > 0)
				return (-1);
			return (0);
		}
	}
	return (n * ng);
}
