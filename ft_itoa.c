/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 20:05:00 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/27 13:42:39 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_str_size(long long n)
{
	int		i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while ((n /= 10) > 0)
		i++;
	return (i);
}

char			*ft_itoa(int nb)
{
	char		*str;
	int			i;
	long long	n;

	n = (long long)nb;
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_str_size(n);
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	i--;
	while (n > 0)
	{
		str[i--] = ((n % 10) + '0');
		n /= 10;
	}
	return (str);
}
