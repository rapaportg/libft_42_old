/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:35:09 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/12 19:15:33 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*src_cpy;
	char	*dest_cpy;
	size_t	i;

	i = -1;
	src_cpy = (char *)src;
	dest_cpy = (char *)dest;
	if (src_cpy < dest_cpy)
		while ((int)(--len) >= 0)
			*(dest_cpy + len) = *(src_cpy + len);
	else
		while (++i < len)
			*(dest_cpy + i) = *(src_cpy + i);
	return (dest);
}
