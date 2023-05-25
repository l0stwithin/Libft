/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:31:23 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/25 23:46:01 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	while (i < nmemb * size)
		str[i++] = 0;
	return ((void *)str);
}
