/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:26:05 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/22 11:45:11 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*v;

	i = 0;
	v = (unsigned char *)s;
	while (i < n)
	{
		if (c == v[i])
			return (&v[i]);
		i++;
	}
	return (NULL);
}
