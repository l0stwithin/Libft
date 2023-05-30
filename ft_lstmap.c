/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 07:37:52 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/30 21:17:16 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*trav;
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (NULL);
	trav = lst;
	new_lst = ft_lstnew(f(trav->content));
	if (!new_lst)
		return (NULL);
	trav = trav->next;
	while (trav)
	{
		elem = ft_lstnew(f(trav->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, elem);
		trav = trav->next;
	}
	return (new_lst);
}
