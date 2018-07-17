/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 11:29:55 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/12 19:18:30 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *str)
{
	char	*tmp;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str) + 1;
	if (!(tmp = malloc(sizeof(char) * len)))
		return (NULL);
	while (i < len)
	{
		tmp[i] = str[i];
		i++;
	}
	return (tmp);
}
