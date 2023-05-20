/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:52:09 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/20 22:52:17 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	len = ft_strlen(dst);
	if (size < ft_strlen(src) - 1)
		return (size + ft_strlen(src));
	while (dst[i] != 0)
		i++;
	j = 0;
	while (i < size - 1 && src[j] != 0)
		dst[i++] = src[j++];
	dst[i] = 0;
	return (ft_strlen(src) + len);
}
