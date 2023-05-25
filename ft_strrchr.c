/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 23:15:41 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/25 21:28:24 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*p;
	unsigned char	*mark;
	unsigned char	uc;
	size_t			count;

	count = 0;
	uc = (unsigned char)c;
	p = (unsigned char *)s;
	while (*p)
	{
		if (*p == uc)
		{
			mark = p;
			count++;
		}
		p++;
	}
	if (count > 0)
		return ((char *)mark);
	if (uc == 0)
		return ((char *)p);
	return (NULL);
}
