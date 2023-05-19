/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:58:53 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/18 00:20:41 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*f_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	f_s = (char *)malloc(ft_strlen(s) + 1);
	if (!f_s)
		return (NULL);
	while (s[i] != 0)
	{
		f_s[i] = f((unsigned int)i, s[i]);
		i++;
	}
	f_s[i] = 0;
	return (f_s);
}
