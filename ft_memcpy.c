/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 02:18:56 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/25 22:58:30 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	d = dest;
	while (i < n)
	{
		d[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
