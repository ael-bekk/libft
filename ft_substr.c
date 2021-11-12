/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:54:20 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/09 14:16:26 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	int		slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = (int)(ft_strlen(s) - start);
	if (slen < 0)
		len = 0;
	else if (slen < (int)len)
		len = slen;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	len += start;
	while (s[start] && start < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
