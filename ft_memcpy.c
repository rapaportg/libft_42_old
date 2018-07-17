/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:26:53 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/13 18:38:51 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;
	size_t	i;

	i = -1;
	ptr = dst;
	ptr2 = (char *)src;
	while (++i < n)
	{
		*(ptr + i) = *(ptr2 + i);
	}
	return (dst);
}
