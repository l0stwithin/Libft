/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 07:03:53 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/28 01:42:05 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*trav;
	t_list	*tmp;

	if (del && *lst)
	{
		trav = *lst;
		while (trav)
		{
			del(trav->content);
			tmp = trav;
			trav = trav->next;
			free(tmp);
		}
		*lst = NULL;
	}
}
