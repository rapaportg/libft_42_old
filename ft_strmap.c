/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 10:11:48 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/16 13:30:34 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tmp;

	i = 0;
	if (s == NULL)
		return (NULL);
	tmp = ft_strnew(ft_strlen(s));
	if (tmp == NULL || f == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = f(s[i]);
		i++;
	}
	return (tmp);
}
