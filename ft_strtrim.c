/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:54:56 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/12 20:03:34 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		sl;
	char	*s;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	s = (char *)s1;
	while (*s && ft_search((char *)set, *s))
		s++;
	sl = ft_strlen(s);
	while (sl && ft_search((char *)set, s[sl - 1]))
		sl--;
	res = ft_substr(s, 0, sl);
	if (!res)
		return (NULL);
	return (res);
}
