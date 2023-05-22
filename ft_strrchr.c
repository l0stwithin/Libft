/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 23:15:41 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/22 22:47:28 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;
	size_t		i;

	i = 0;
	while (*s)
	{
		if ((unsigned char)*s == c)
		{
			p = s;
			i++;
		}
		s++;
	}
	if (i > 0)
		return ((char *)p);
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
