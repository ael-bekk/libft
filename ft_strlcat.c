/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:51:44 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/09 14:15:24 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	i = 0;
	if (!dst && !size)
		return (sl);
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	sl += dl * (dl < size) + size * !(dl < size);
	while (src[i] && (dl + i + 1) < size)
	{
		dst[dl + i] = ((char *)src)[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (sl);
}
