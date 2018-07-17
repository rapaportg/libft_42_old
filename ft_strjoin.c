/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:30:47 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/16 20:02:23 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	if (!(tmp = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (*s1)
		*(tmp + i++) = *(s1++);
	while (*s2)
		*(tmp + i++) = *(s2++);
	*(tmp + i) = '\0';
	return (tmp);
}
