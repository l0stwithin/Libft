/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:42:50 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/26 00:52:43 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_words(char const *s, char c);
char				**alloc_2darr(char const *s, char c,
						unsigned int row_size);
static char			**str_arr(char const *s, char c, char **strs);

char	**ft_split(char const *s, char c)
{
	char			**strs;
	unsigned int	row_size;

	row_size = count_words(s, c) + 1;
	strs = alloc_2darr(s, c, row_size);
	if (!strs)
		return (NULL);
	if (ft_strlen(s) > 0)
		str_arr(s, c, strs);
	strs[row_size - 1] = NULL;
	return ((void *)strs);
}

static char	**str_arr(char const *s, char c, char **strs)
{
	size_t			i;
	size_t			j;
	size_t			k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c)
		i++;
	if (i == 0)
		strs[j][k++] = s[i++];
	while (s[i] != 0)
	{
		if (s[i] == c && s[i - 1] != c)
		{
			strs[j++][k] = 0;
			k = 0;
		}
		if (s[i] != c)
			strs[j][k++] = s[i];
		i++;
	}
	if (s[i - 1] != c)
		strs[j][k] = 0;
	return (strs);
}

static unsigned int	count_words(char const *s, char c)
{
	size_t			i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (!ft_strlen(s))
		return (0);
	while (s[i] == c)
		i++;
	if (i == 0)
		i++;
	while (s[i] != 0)
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] == c)
		return (count);
	return (count + 1);
}

static size_t	word_len(char const *s, char c, size_t	word_no)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != 0 && count + 1 < word_no)
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i + j] != 0 && s[i + j] != c)
		j++;
	return (j);
}

char	**alloc_2darr(char const *s, char c, unsigned int row_size)
{
	char	**strs;
	size_t	i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * row_size);
	if (!strs)
		return (NULL);
	while (i < row_size - 1)
	{
		strs[i] = (char *)malloc(word_len(s, c, i + 1) + 1);
		if (!strs[i])
		{
			while (i-- > 0)
				free(strs[i]);
			free(strs);
			return (NULL);
		}
		i++;
	}
	return (strs);
}
