/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 07:37:52 by sdutta            #+#    #+#             */
/*   Updated: 2023/06/09 10:34:45 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*fill_list(t_list *new_lst, t_list *lst, void *(*f)(void *),
							void (*del)(void *))
{
	void	*new_data;
	t_list	*mark;

	lst = lst->next;
	mark = new_lst;
	while (lst)
	{
		new_data = f(lst->content);
		new_lst->next = ft_lstnew(new_data);
		if (!new_lst->next)
		{
			del(new_data);
			ft_lstclear(&mark, del);
			return (NULL);
		}
		new_lst = new_lst->next;
		lst = lst->next;
		new_data = NULL;
	}
	return (mark);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*final_lst;
	void	*new_data;

	if (!lst)
		return (NULL);
	new_data = f(lst->content);
	new_lst = ft_lstnew(new_data);
	if (!new_lst)
	{
		del(new_data);
		return (NULL);
	}
	final_lst = fill_list(new_lst, lst, f, del);
	return (final_lst);
}
