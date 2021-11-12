/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:14:48 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/11 09:12:42 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	int	i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	if (dst > src)
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	else
		while (++i < (int)n)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
