/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:23:22 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/16 14:40:36 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	size_t		len;
	char		*j_str;

	len = ft_strlen(s1) + ft_strlen(s2);
	j_str = (char *)malloc(len + 1);
	if (!j_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != 0 && i < len)
		j_str[i++] = s1[j++];
	j = 0;
	while (s2[j] != 0 && i < len)
		j_str[i++] = s2[j++];
	j_str[i] = 0;
	return (j_str);
}
