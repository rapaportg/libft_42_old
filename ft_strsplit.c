/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:25:30 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/16 20:01:37 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isws(char c, char delimiter)
{
	return (c == delimiter);
}

static int		ft_wc(const char *s, char delimiter)
{
	int		i;

	i = 0;
	while (*s)
	{
		if (ft_isws(*s, delimiter))
			s++;
		else
		{
			i++;
			s++;
			while (*s && !ft_isws(*s, delimiter))
				s++;
		}
	}
	return (i);
}

static char		*ft_word_build(char **str, char delimiter)
{
	char		*bptr;
	char		*bsptr;
	char		*sptr;

	sptr = *str;
	while (ft_isws(*sptr, delimiter))
		sptr++;
	*str = sptr;
	while (!ft_isws(*sptr, delimiter))
		sptr++;
	if (!(bptr = ft_memalloc(sizeof(char) * (sptr - *str))))
		return (NULL);
	bsptr = bptr;
	while (sptr > *str)
		*bsptr++ = *((*str)++);
	*bsptr = '\0';
	while (**str && ft_isws(**str, delimiter))
		++*str;
	return (bptr);
}

char			**ft_strsplit(char *s, char c)
{
	char	**buffer;
	char	**bptr;
	int		i;

	if (s == NULL)
		return (NULL);
	i = ft_wc(s, c);
	if (!(buffer = ft_memalloc(sizeof(char *) * (i + 1))))
		return (NULL);
	bptr = buffer;
	while (i--)
	{
		if (!(*bptr++ = ft_word_build(&s, c)))
			return (NULL);
	}
	*bptr = NULL;
	return (buffer);
}
