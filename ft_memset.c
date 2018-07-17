/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:53:38 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/11 19:07:10 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)dest;
	if (len <= 0)
		return (dest);
	while (len--)
	{
		*tmp++ = (unsigned char)c;
	}
	return (dest);
}
