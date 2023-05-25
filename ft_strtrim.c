/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:32:06 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/25 23:26:07 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_beg(char const *s1, char const *set);
static unsigned int	get_end(char const *str, char const *set);
static int			is_found(char c, char const *target);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	index;
	char	*str;

	i = (size_t)get_beg(s1, set);
	j = (size_t)get_end(s1, set);
	if (j < i || !ft_strlen(s1))
		j = i - 1;
	str = (char *)malloc(j - i + 2);
	if (!str)
		return (NULL);
	index = 0;
	while (i <= j && s1[i] != 0)
	{
		str[index] = s1[i];
		i++;
		index++;
	}
	str[index] = 0;
	return (str);
}

static unsigned int	get_beg(char const *str, char const *set)
{
	size_t	i;

	i = 0;
	while (str[i] != 0 && is_found(str[i], set))
		i++;
	return (i);
}

static unsigned int	get_end(char const *str, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(str);
	i = len - 1;
	if (!len)
		i = 0;
	while (i > 0 && is_found(str[i], set))
		i--;
	return (i);
}

static int	is_found(char c, char const *target)
{
	size_t	i;

	i = 0;
	while (target[i] != 0)
	{
		if (c == target[i])
			return (TRUE);
		i++;
	}
	return (FALSE);
}
