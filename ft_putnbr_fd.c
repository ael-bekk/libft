/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:09:34 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/09 15:43:11 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_pnb(unsigned int n, int fd)
{
	char	c;

	if (n > 9)
		ft_pnb(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write(fd, "-", 1);
	ft_pnb(-n * (n < 0) + n * !(n < 0), fd);
}
