/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 06:19:00 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/28 01:41:35 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*list;

	if (lst)
	{
		list = *lst;
		last = ft_lstlast(list);
		last->next = new;
		new->next = NULL;
	}
}
