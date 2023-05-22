/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:47:09 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/22 20:04:36 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_substr(const char *big, const char *little, size_t space);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (!little[0])
		return (b);
	while (b[i] != 0 && i < len)
	{
		if (b[i] == l[0])
		{
			if (is_substr(&b[i], little, len - i))
				return (&b[i]);
		}
		i++;
	}
	return (NULL);
}

static int	is_substr(const char *big, const char *little, size_t space)
{
	size_t	i;

	i = 0;
	if (ft_strlen(little) > space)
		return (FALSE);
	while (little[i] != 0)
	{
		if (big[i] != little[i])
			return (FALSE);
		i++;
	}
	return (TRUE);
}
