/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:47:10 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/11 09:15:47 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		n--;
		s1++;
		s2++;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
