/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 07:23:43 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/28 01:42:18 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*trav;

	if (lst && f)
	{
		trav = lst;
		while (trav)
		{
			f(trav->content);
			trav = trav->next;
		}
	}
}
