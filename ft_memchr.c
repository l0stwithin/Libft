/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:26:05 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/25 04:27:20 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*v;

	i = 0;
	uc = (unsigned char)c;
	v = (unsigned char *)s;
	while (i < n)
	{
		if (uc == v[i])
			return (&v[i]);
		i++;
	}
	return (NULL);
}
