/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:11:50 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/09 14:50:42 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	res = NULL;
	if (lst && f)
	{
		res = ft_lstnew(f(lst->content));
		if (!res)
			return (NULL);
		new = res;
		lst = lst->next;
		while (lst)
		{
			new->next = ft_lstnew(f(lst->content));
			if (!new->next)
			{
				ft_lstclear(&res, del);
				return (NULL);
			}
			new = new->next;
			lst = lst->next;
		}
	}
	return (res);
}
