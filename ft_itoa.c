/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdutta <sdutta@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:54:39 by sdutta            #+#    #+#             */
/*   Updated: 2023/05/17 20:49:54 by sdutta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_dig(int n);
static int	is_neg(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		nd;
	int		neg;
	char	dig;

	nd = num_dig(n);
	neg = is_neg(n);
	str = (char *)malloc(nd + neg + 1);
	str[nd + neg] = 0;
	if (n == 0)
		str[0] = 48;
	if (neg)
	{
		dig = -(n % 10) + 48;
		str[0] = '-';
		str[nd] = dig;
		n = -(n - n % 10) / 10;
	}
	while (n > 0)
	{
		dig = n % 10 + 48;
		str[--nd] = dig;
		n = (n - n % 10) / 10;
	}
	return (str);
}

static int	is_neg(int n)
{
	if (n < 0)
		return (TRUE);
	else
		return (FALSE);
}

static int	num_dig(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n / 10;
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}