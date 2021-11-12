/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:54:36 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/09 14:16:36 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		l1;
	int		l2;

	res = NULL;
	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	res = (char *)malloc(l1 + l2 + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, l1);
	ft_memcpy(res + l1, s2, l2);
	res[l1 + l2] = 0;
	return (res);
}
