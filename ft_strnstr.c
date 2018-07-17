/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:34:57 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/13 15:52:05 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	size_t	nb;
	char	*tmp1;
	char	*tmp2;

	if (!*s2)
		return ((void *)s1);
	while (n-- && *s1)
	{
		if (*s1 == *s2)
		{
			nb = n;
			tmp1 = (void *)s1 + 1;
			tmp2 = (void *)s2 + 1;
			while (nb-- && *tmp1 && *tmp2 && *tmp1 == *tmp2)
			{
				++tmp1;
				++tmp2;
			}
			if (!*tmp2)
				return ((void *)s1);
		}
		s1++;
	}
	return (NULL);
}
