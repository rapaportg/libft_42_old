/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grapapor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 16:36:16 by grapapor          #+#    #+#             */
/*   Updated: 2018/07/16 01:57:50 by grapapor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_swap(t_list *a, t_list *b)
{
	void	*c;
	size_t	e;

	c = a->content;
	e = a->content_size;
	a->content = b->content;
	a->content_size = b->content_size;
	b->content = c;
	b->content_size = e;
}
